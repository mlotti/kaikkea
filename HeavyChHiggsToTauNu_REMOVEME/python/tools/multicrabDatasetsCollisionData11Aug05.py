## \package multicrabDatasetsCollisionData11Aug05
#
# Dataset definitions for partial Run2011 (170722-172619) Aug10 ReReco (with CMSSW 42X)
#
# \see multicrab

import multicrabDatasetsCommon as common

## Dataset definitions
datasets = {
    # Single tau + MET
    "Tau_170722-172619_Aug05": {
        "dataVersion": "42Xdata",
        "trigger": "HLT_IsoPFTau35_Trk20_MET60_v6",
        "runs": (170722, 172619),
        "data": {
            "AOD": {
                "datasetpath": "/Tau/Run2011A-05Aug2011-v1/AOD",
                "number_of_jobs": 110, # Adjusted for PATtuple file size
                "lumiMask": "DCSONLY11"
            },
            "pattuple_v18": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/Tau/local-05Aug2011_v1_AOD_170722_pattuple_v18-516e60e4f3f21c17e8f9bca025365e30/USER",
                "luminosity": 370.826000,
                "number_of_jobs": 1,
            },
            "pattuple_v18_2": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/Tau/local-Run2011A_05Aug2011_v1_AOD_170722_pattuple_v18_2b-b181b3cffb39e031e0e03a7bce397555/USER",
                "number_of_jobs": 2,
            },
            "pattuple_v18_3": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/Tau/local-Run2011A_05Aug2011_v1_AOD_170722_pattuple_v18_3-79f359e64890a90caf2b7abf9c65a694/USER",
                "number_of_jobs": 2,
                "args": {"doTauHLTMatchingInAnalysis": "1"},
            },
            "pattuple_v19": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/Tau/local-Run2011A_05Aug2011_v1_AOD_170722_pattuple_v19-4c1de2b1b331a58336df02ae39c0b25d/USER",
                "number_of_jobs": 1,
            }
        }
    },

    # Single tau (control)
    "Tau_Single_170722-172619_Aug05": {
        "dataVersion": "42Xdata",
        "trigger": "HLT_IsoPFTau35_Trk20_v6",
        "runs": (170722, 172619),
        "data": {
            "AOD": {
                "datasetpath": "/Tau/Run2011A-05Aug2011-v1/AOD",
                "number_of_jobs": 110, # Adjusted for PATtuple file size
                "lumiMask": "DCSONLY11"
            },
            "pattuple_v18_0": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/Tau/local-05Aug2011_v1_AOD_Single_170722_pattuple_v18-94011b60044d698fe5dbd6fe93c7d90b/USER",
                "luminosity": 370.826000,
                "number_of_jobs": 1,
            },
            "pattuple_v18_1": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/Tau/local-05Aug2011_v1_AOD_Single_170722_pattuple_v18_1-e7ac736350b7c673637ba90e811c1fee/USER",
                "number_of_jobs": 1,
            },
            "pattuple_v18": {
                "fallback": "pattuple_v18_1"
            },
            "pattuple_v19": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/Tau/local-Run2011A_05Aug2011_v1_AOD_Single_170722_pattuple_v19-91bfbcc06bd99fc8caf522eeea084d33/USER",
                "number_of_jobs": 1,
            },
        }
    },

    # Single Mu
    "SingleMu_170722-172619_Aug05": {
        "dataVersion": "42Xdata",
        "args": {"doTauHLTMatching": 0},
        "triggerOR": [
            "HLT_Mu40_v5", "HLT_IsoMu24_v8", # not prescaled
            "HLT_Mu15_v8", "HLT_Mu20_v7", "HLT_Mu24_v7", "HLT_Mu30_v7", "HLT_IsoMu15_v13", "HLT_IsoMu17_v13", # prescaled
            ],
        "runs": (170722, 172619),
        "data": {
            "AOD": {
                "datasetpath": "/SingleMu/Run2011A-05Aug2011-v1/AOD",
                "number_of_jobs": 490, # Adjusted for PATtuple file size
                "lumiMask": "DCSONLY11"
            },
            "pattuple_v19": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/SingleMu/local-Run2011A_05Aug2011_v1_AOD_170722_pattuple_v19-3a653e1bd941d76d28bcbdfed0228b46/USER",
                "number_of_jobs": 15,
            },
        }
    },

    # Single Mu for tau embedding skims
    "SingleMu_Mu_170722-172619_Aug05": {
        "dataVersion": "42Xdata",
        "trigger": "HLT_Mu40_v5",
        "runs": (170722, 172619),
        "data": {
            "AOD": {
                "datasetpath": "/SingleMu/Run2011A-05Aug2011-v1/AOD",
                "number_of_jobs": 200,
                "lumiMask": "DCSONLY11"
            },
        }
    },
}
