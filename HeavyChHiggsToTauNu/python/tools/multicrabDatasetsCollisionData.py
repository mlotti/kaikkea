import multicrabDatasetsCommon as common

datasets = {
    ############################################################
    # Collision data
    #
    # BTau PD (for signal analysis)
    "BTau_141950-144114_Nov4": {
        "dataVersion": "38Xdata",
        "trigger": "HLT_SingleIsoTau20_Trk5",
        "data": {
            "RECO": {
                "datasetpath": "/BTau/Run2010A-Nov4ReReco_v1/RECO",
                "luminosity": 0,
                "lumis_per_job": 50,
                "lumiMask": "Nov4ReReco"
            },
            "AOD": {
                "datasetpath": "/BTau/Run2010A-Nov4ReReco_v1/AOD",
                "luminosity": 0,
                "lumis_per_job": 50, # Adjusted for PATtuple file size
                "lumiMask": "Nov4ReReco"
            },
            "pattuple_v6_1": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010A_Sep17ReReco_v2_RECO_pattuple_v6_1-b9b1bac3463fc5700035eeb83da514a6/USER",
                "luminosity": 2.139732871,
                "number_of_jobs": 10
            },
            "pattuple_v6_2": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010A_Sep17ReReco_v2_RECO_pattuple_v6_2-b9b1bac3463fc5700035eeb83da514a6/USER",
                "luminosity": 2.027848248,
                "number_of_jobs": 10
            },
            "pattuple_v6_3": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010A_Nov4ReReco_v1_RECO_pattuple_v6_3-dfc6d27ce5aa60b808b4a2bcd34b7c86/USER",
                "luminosity": 2.799065107,
                "number_of_jobs": 20
            },
            "pattuple_v6": {
                "fallback": "pattuple_v6_3"
            }
        }

    },
    "BTau_146240-148107_Nov4": {
        "dataVersion": "38Xdata",
        "trigger": "HLT_SingleIsoTau20_Trk15_MET20",
        "runs": (146240, 148107),
        "data": {
            "RECO": {
                "datasetpath": "/BTau/Run2010B-Nov4ReReco_v1/RECO",
                "luminosity": 0,
                "lumis_per_job": 50, # Adjusted for PATtuple file size
                "lumiMask": "Nov4ReReco"
            },
            "AOD": {
                "datasetpath": "/BTau/Run2010B-Nov4ReReco_v1/AOD",
                "luminosity": 0,
                "lumis_per_job": 50,
                "lumiMask": "Nov4ReReco"
            },
            "pattuple_v6_1": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010B_PromptReco_v2_RECO_pattuple_v6_1-43c3132ebadd44967499e6cca288e3ab/USER",
                "luminosity": 5.899172590,
                "number_of_jobs": 10
            },
            "pattuple_v6_2": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010B_PromptReco_v2_RECO_pattuple_v6_2-43c3132ebadd44967499e6cca288e3ab/USER",
                "luminosity": 5.867011630,
                "number_of_jobs": 10
            },
            "pattuple_v6_3": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010B_Nov4ReReco_v1_RECO_pattuple_v6_3-ba8b03606ed700d03389442a6378453f/USER",
                "luminosity": 14.527814041,
                "number_of_jobs": 20
            },
            "pattuple_v6": {
                "fallback": "pattuple_v6_3"
            }
        },
    },
    "BTau_148108-148864_Nov4": {
        "dataVersion": "38Xdata",
        "trigger": "HLT_SingleIsoTau20_Trk15_MET25_v3",
        "runs": (148108, 148864),
        "data": {
            "pattuple_v6_1": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010B_PromptReco_v2_RECO_pattuple_v6_1-87e2c0e398f5cb72e5974e2df0c2a6a6/USER",
                "luminosity": 4.600225784,
                "number_of_jobs": 3
            },
            "pattuple_v6": {
                "fallback": "pattuple_v6_1"
            }
        },
    },
    "BTau_148108-149182_Nov4": {
        "dataVersion": "38Xdata",
        "trigger": "HLT_SingleIsoTau20_Trk15_MET25_v3",
        "runs": (148108, 149182),
        "data": {
            "RECO": {
                "datasetpath": "/BTau/Run2010B-Nov4ReReco_v1/RECO",
                "luminosity": 0,
                "lumis_per_job": 15, # Adjusted for PATtuple file size
                "lumiMask": "Nov4ReReco"
            },
            "AOD": {
                "datasetpath": "/BTau/Run2010B-Nov4ReReco_v1/AOD",
                "luminosity": 0,
                "lumis_per_job": 15,
                "lumiMask": "Nov4ReReco"
            },
            "pattuple_v6_2": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010B_PromptReco_v2_RECO_pattuple_v6_2-87e2c0e398f5cb72e5974e2df0c2a6a6/USER",
                "luminosity": 13.821016530,
                "number_of_jobs": 10
            },
            "pattuple_v6_3": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010B_Nov4ReReco_v1_RECO_pattuple_v6_3-9e6b3ce3f61ebd1c080721235dd644e5/USER",
                "luminosity": 16.166113934,
                "number_of_jobs": 10
            },
            "pattuple_v6": {
                "fallback": "pattuple_v6_3"
            }
        },
    },
    "BTau_149291-149442_Nov4": {
        "dataVersion": "38Xdata",
        "trigger": "HLT_SingleIsoTau20_Trk15_MET25_v4",
        "runs": (149291, 149442),
        "data": {
            "RECO": {
                "datasetpath": "/BTau/Run2010B-Nov4ReReco_v1/RECO",
                "luminosity": 0,
                "lumis_per_job": 20, # Adjusted for PATtuple file size
                "lumiMask": "Nov4ReReco"
            },
            "AOD": {
                "datasetpath": "/BTau/Run2010B-Nov4ReReco_v1/AOD",
                "luminosity": 0,
                "lumis_per_job": 20,
                "lumiMask": "Nov4ReReco"
            },
            "pattuple_v6_2": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010B_PromptReco_v2_RECO_pattuple_v6_2-377aee71049a82c7ea12a489f5d5e3ef/USER",
                "luminosity": 2.131303202,
                "number_of_jobs": 2
            },
            "pattuple_v6_3": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/BTau/local-Run2010B_Nov4ReReco_v1_RECO_pattuple_v6_3-ae876897d946fa7a17cf73f63fd66244/USER",
                "luminosity": 2.270540967,
                "number_of_jobs": 2
            },
            "pattuple_v6": {
                "fallback": "pattuple_v6_3"
            }
        },
    },

    # Jet PD (for QCD background analysis"
    "JetMETTau_136033-141887_Nov4": { # first run actually 135821, but lumi list starts from this one
        "dataVersion": "38Xdata",
        "trigger": "HLT_Jet30U",
        "data": {
            "RECO": {
                "datasetpath": "/JetMETTau/Run2010A-Nov4ReReco_v1/RECO",
                "luminosity": 0,
                "number_of_jobs": 100, # Adjusted for PATtuple
                "lumiMask": "Nov4ReReco"
            },
            "pattuple_v6_4": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/JetMETTau/local-Run2010A_Nov4ReReco_v1_RECO_pattuple_v6_4-4c46839dc2dbfe33eac25fb0510aaca6/USER",
                "luminosity": .284734728,
                "number_of_jobs": 10 # 1.7M events
            },
            "pattuple_v6": {
                "fallback": "pattuple_v6_4"
            }
        }
    },
    "JetMET_141950-144114_Nov4": {
        "dataVersion": "38Xdata",
        "trigger": "HLT_Jet30U",
        "data": {
            "RECO": {
                "datasetpath": "/JetMET/Run2010A-Nov4ReReco_v1/RECO",
                "luminosity": 0,
                "number_of_jobs": 300, # Adjusted for PATtuple
                "lumiMask": "Nov4ReReco"
            },
            "pattuple_v6_4": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/JetMET/local-Run2010A_Nov4ReReco_v1_RECO_pattuple_v6_4-4c46839dc2dbfe33eac25fb0510aaca6/USER",
                "luminosity": 2.895797321,
                "number_of_jobs": 20 # 2.9M events
            },
            "pattuple_v6": {
                "fallback": "pattuple_v6_4"
            }
        }
    },
    "Jet_146240-148058_Nov4": { # last run really 149442, but last run with HLT_Jet30U is this one
        "dataVersion": "38Xdata",
        "trigger": "HLT_Jet30U",
        "runs": (146240, 148058),
        "data": {
            "RECO": {
                "datasetpath": "/Jet/Run2010B-Nov4ReReco_v1/RECO",
                "luminosity": 0,
                "number_of_jobs": 40, # Adjusted for PATtuple
                "lumiMask": "Nov4ReReco"
            },
            "pattuple_v6_4": {
                "dbs_url": common.pattuple_dbs,
                "datasetpath": "/Jet/local-Run2010B_Nov4ReReco_v1_RECO_pattuple_v6_4-4c46839dc2dbfe33eac25fb0510aaca6/USER",
                "luminosity": 14.527814041,
                "number_of_jobs": 4
            },
            "pattuple_v6": {
                "fallback": "pattuple_v6_4"
            }
        }
    },


    # Mu PD (for electroweak background analysis)
    "Mu_135821-144114_Nov4": {
        "dataVersion": "38Xdata",
        "trigger": "HLT_Mu9",
        "data": {
            "RECO": {
                "datasetpath": "/Mu/Run2010A-Nov4ReReco_v1/RECO", # runs 135821-144114
                "luminosity": 0,
                "lumis_per_job": 500, # Adjusted for PAT on the fly
                "lumiMask": "Nov4ReReco"
            },
            "AOD": {
                "datasetpath": "/Mu/Run2010A-Nov4ReReco_v1/AOD", # runs 135821-144114
                "luminosity": 0,
                "lumis_per_job": 500,
                "lumiMask": "Nov4ReReco"
            }
        }
    },
    "Mu_146240-147116_Nov4": {
        "dataVersion": "38Xdata",
        "trigger": "HLT_Mu9",
        "runs": (146240, 147116),
        "data": {
            "RECO": {
                "datasetpath": "/Mu/Run2010B-Nov4ReReco_v1/RECO",
                "luminosity": 0,
                "lumis_per_job": 600, # Adjusted for PAT on the fly
                "lumiMask": "Nov4ReReco"
            },
            "AOD": {
                "datasetpath": "/Mu/Run2010B-Nov4ReReco_v1/AOD",
                "luminosity": 0,
                "lumis_per_job": 600, # Adjusted for PAT on the fly
                "lumiMask": "Nov4ReReco"
            }
        }
    },
    "Mu_147196-149442_Nov4": {
        "dataVersion": "38Xdata",
        "trigger": "HLT_Mu15_v1",
        "runs": (147196, 149442),
        "data": {
            "RECO": {
                "datasetpath": "/Mu/Run2010B-Nov4ReReco_v1/RECO",
                "luminosity": 0,
                "lumis_per_job": 500, # Adjusted for PAT on the fly
                "lumiMask": "Nov4ReReco"
            },
            "AOD": {
                "datasetpath": "/Mu/Run2010B-Nov4ReReco_v1/AOD",
                "luminosity": 0,
                "lumis_per_job": 500, # Adjusted for PAT on the fly
                "lumiMask": "Nov4ReReco"
            }
        }
    },
}
