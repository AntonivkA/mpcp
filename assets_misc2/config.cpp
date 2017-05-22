// config.bin - 12:00:45 05/22/17, generated in 0.01 seconds
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
	class DZ_Misc2 {
		units[] = {"FoldChair_with_Cargo"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Buildings2", "DZ_Buildings", DZ_UI};
	};
};

class cfgVehicles {
	class HouseNoDestruct;	// External class reference
	class Ruins;	// External class reference
	
	class Land_Barrack2 : HouseNoDestruct {
		displayName = $STR_DN_BARRACK2;
		model = "\dz\misc2\Barrack2\Barrack2.p3d";
		icon = "\dz\misc2\data\icons\icon_barrack2_ca.paa";
		mapSize = 11;
		accuracy = 0.2;	// accuracy needed to recognize type of this target
		
		class Doors {
			class Doors1 {
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
	
	class Land_GuardShed : HouseNoDestruct {
		displayName = $STR_DN_GUARDSHED;
		model = "\dz\misc2\GuardShed.p3d";
		icon = "\dz\misc2\data\Icons\icon_guardShed_ca.paa";
		mapSize = 2.4;
		cost = 0;
	};
	
	class Land_PowGen_Big : HouseNoDestruct {
		model = "\dz\misc2\Samsite\PowGen_Big.p3d";
		ladders[] = {{"start1", "end1"}};
	};
	
	class Land_PowGen_Big_ruins : HouseNoDestruct {
		model = "\dz\misc2\Samsite\PowGen_Big_ruins.p3d";
	};
	
	class Land_Gunrack1 : HouseNoDestruct {
		model = "\dz\misc2\Gunrack1.p3d";
	};
	
	class Land_DoorTest : HouseNoDestruct {
		displayName = "DoorTest";
		model = "\dz\misc2\DoorTest\DoorTest.p3d";
		mapSize = 11;
		accuracy = 0.2;	// accuracy needed to recognize type of this target
		
		class Doors {
			class Doors1 {
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors2 {
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors3 {
				displayName = "door 3";
				component = "Doors3";
				soundPos = "doors3_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
	
	class Land_DoorTest2 : Land_DoorTest {
		displayName = "DoorTestDirectional";
		model = "\dz\misc2\DoorTest\DoorTest2.p3d";
	};
};
