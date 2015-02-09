#include "HiggsAnalysis/MiniAOD2TTree/interface/JetDumper.h"

JetDumper::JetDumper(std::vector<edm::ParameterSet> psets){
    inputCollections = psets;
    booked           = false;
    pt  = new std::vector<double>[inputCollections.size()];
    eta = new std::vector<double>[inputCollections.size()];    
    phi = new std::vector<double>[inputCollections.size()];    
    e   = new std::vector<double>[inputCollections.size()];    

    //p4 = new std::vector<reco::Candidate::LorentzVector>[inputCollections.size()];
    pdgId = new std::vector<short>[inputCollections.size()];

    nDiscriminators = inputCollections[0].getParameter<std::vector<std::string> >("discriminators").size();
    discriminators = new std::vector<float>[inputCollections.size()*nDiscriminators];
    handle = new edm::Handle<edm::View<pat::Jet> >[inputCollections.size()];

    useFilter = false;
    for(size_t i = 0; i < inputCollections.size(); ++i){
	bool param = inputCollections[i].getUntrackedParameter<bool>("filter",false);
        if(param) useFilter = true;
    }
}
JetDumper::~JetDumper(){}

void JetDumper::book(TTree* tree){
  booked = true;
  for(size_t i = 0; i < inputCollections.size(); ++i){
    std::string name = inputCollections[i].getUntrackedParameter<std::string>("branchname","");
    if(name.length() == 0) name = inputCollections[i].getParameter<edm::InputTag>("src").label();
    tree->Branch((name+"_pt").c_str(),&pt[i]);
    tree->Branch((name+"_eta").c_str(),&eta[i]);
    tree->Branch((name+"_phi").c_str(),&phi[i]);
    tree->Branch((name+"_e").c_str(),&e[i]);    
    //tree->Branch((name+"_p4").c_str(),&p4[i]);
    tree->Branch((name+"_pdgId").c_str(),&pdgId[i]);

    std::vector<std::string> discriminatorNames = inputCollections[i].getParameter<std::vector<std::string> >("discriminators");
    for(size_t iDiscr = 0; iDiscr < discriminatorNames.size(); ++iDiscr) {
      tree->Branch((name+"_"+discriminatorNames[iDiscr]).c_str(),&discriminators[inputCollections.size()*iDiscr+(iDiscr+1)*i]);
    }
  }
}

bool JetDumper::fill(edm::Event& iEvent, const edm::EventSetup& iSetup){
    if (!booked) return true;

    for(size_t ic = 0; ic < inputCollections.size(); ++ic){
	edm::InputTag inputtag = inputCollections[ic].getParameter<edm::InputTag>("src");
	std::vector<std::string> discriminatorNames = inputCollections[ic].getParameter<std::vector<std::string> >("discriminators");
	iEvent.getByLabel(inputtag, handle[ic]);
	if(handle[ic].isValid()){

	    for(size_t i=0; i<handle[ic]->size(); ++i) {
    		const pat::Jet& obj = handle[ic]->at(i);

		pt[ic].push_back(obj.p4().pt());
                eta[ic].push_back(obj.p4().eta());
                phi[ic].push_back(obj.p4().phi());
                e[ic].push_back(obj.p4().energy());

		//p4[ic].push_back(obj.p4());

		for(size_t iDiscr = 0; iDiscr < discriminatorNames.size(); ++iDiscr) {
		    discriminators[inputCollections.size()*iDiscr+(iDiscr+1)*ic].push_back(obj.bDiscriminator(discriminatorNames[iDiscr]));
		}

		int genParton = 0;
		if(obj.genParton()){
		  genParton = obj.genParton()->pdgId();
		}
		pdgId[ic].push_back(genParton);
            }
        }
    }
    return filter();
}

void JetDumper::reset(){
    for(size_t ic = 0; ic < inputCollections.size(); ++ic){
	pt[ic].clear();
	eta[ic].clear();
	phi[ic].clear();
	e[ic].clear();
//        p4[ic].clear();
        pdgId[ic].clear();
    }
    for(size_t ic = 0; ic < inputCollections.size()*nDiscriminators; ++ic){
        discriminators[ic].clear();
    }
}