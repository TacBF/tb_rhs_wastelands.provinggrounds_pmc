class TacBF
{
  class Supply
  {
    // Generates cargo IDs (More effecient broadcasting for these items + their ammo)
    staticWeapons[] = {"RDS_M2StaticMG_FIA", "RDS_M2StaticMG_MiniTripod_FIA", "RDS_M252_FIA", "RDS_TOW_TriPod_FIA", "RDS_Igla_AA_pod_CSAT", "RDS_DSHKM_CSAT", "RDS_DSHkM_Mini_TriPod_CSAT", "RDS_KORD_high_CSAT", "RDS_KORD_CSAT",  "RDS_2b14_82mm_CSAT", "RDS_SPG9_CSAT", "RDS_Metis_CSAT"};
    class CargoCollections
    {
      class statics_west {
        transportClear = 1;
        cargo[] = {{"RDS_M2StaticMG_MiniTripod_FIA", 4, 8}, {"RDS_M252_FIA", 0, 0}, {"RDS_TOW_TriPod_FIA", 0, 0}, {"TB_Box_West_Mines_F", 3, 0}};
      };
      class statics_east {
        transportClear = 1;
        cargo[] = {{"RDS_KORD_CSAT", 4, 8}, {"RDS_SPG9_CSAT", 0, 0}, {"TB_Box_East_Mines_F", 3, 0}};
      };
      class statics_res {
        transportClear = 1;
        cargo[] = {{"RDS_DSHkM_Mini_TriPod_CSAT", 6, 12}, {"RDS_SPG9_CSAT", 2, 4}, {"RDS_ZU23_CSAT", 0, 6}, {"TB_Box_East_Mines_F", 4, 0}};
      };
			class rds_westFO {
				transportClear = 1;
				cargo[] = {{"RDS_M2StaticMG_FIA", 2, 4}, {"RDS_M252_FIA", 0, 0}};
			};

			class rds_eastFO {
				transportClear = 1;
				cargo[] = {{"RDS_DSHKM_CSAT", 2, 4}, {"RDS_2b14_82mm_CSAT", 1, 3}};
			};
    };
		class Containers
		{
			class ICE_ForwardOutpost_container_WestMG
			{
				crateCollection = "rds_westFO";
				mass = 1750; 
			};

			class ICE_ForwardOutpost_container_EastMG
			{
				crateCollection = "rds_eastFO";
				mass = 1750; 
			};
		}; 
  };
};