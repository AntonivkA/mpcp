// config.bin - 12:09:06 05/22/17, generated in 0.00 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXISY = 2,
	DESTRUCTNO = 0,
	STABILIZEDINAXESBOTH = 3,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class CfgPatches {
	class DZ_Structures_House_HouseBT {
		units[] = {"Land_HouseB_Tenement_DayZ", "Land_HouseB_Tenement"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};

class CfgVehicles {
	class HouseNoDestruct;	// External class reference
	
	class Land_HouseB_Tenement_DayZ : HouseNoDestruct {
		model = "\dz\structures\House\HouseBT\HouseB_tenement_dayz.p3d";
		ladders[] = {{"start1", "end1"}};
		featureSize = 50;
	};
	
	class Land_HouseB_Tenement_DayZ_rubble : HouseNoDestruct {
		model = "\dz\structures\House\HouseBT\HouseB_Tenement_DayZ_rubble.p3d";
		
		class MarkerLights {};
	};
	
	class Land_HouseB_Tenement : Land_HouseB_Tenement_DayZ {
		model = "\dz\structures\House\HouseBT\HouseB_Tenement";
	};
};
