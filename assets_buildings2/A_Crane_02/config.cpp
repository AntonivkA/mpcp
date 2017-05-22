// config.bin - 12:00:18 05/22/17, generated in 0.00 seconds
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
	class DZ_Buildings2_A_Crane_02 {
		units[] = {"Land_A_Crane_02b"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Buildings2"};
	};
};

class CfgVehicles {
	class HouseNoDestruct;	// External class reference
	
	class Land_A_Crane_02a : HouseNoDestruct {
		model = "dz\buildings2\A_Crane_02\A_Crane_02a.p3d";
		featureSize = 30;
		ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
	};
	
	class Land_A_Crane_02b : HouseNoDestruct {
		armor = 110;
		featureSize = 30;
		model = "dz\buildings2\A_Crane_02\A_Crane_02b.p3d";
		ladders[] = {{"start3", "end3"}, {"start4", "end4"}, {"start5", "end5"}, {"start6", "end6"}};
	};
};
