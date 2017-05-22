// config.bin - 12:08:34 05/22/17, generated in 0.01 seconds
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
	class DZ_Structures_House_A_Office02 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};

class CfgVehicles {
	class HouseNoDestruct;	// External class reference
	
	class Land_A_Office02 : HouseNoDestruct {
		model = "\dz\structures\House\A_Office02\A_Office02.p3d";
		ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}};
		
		class Doors {
			class Doors1 {
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodFrontOpen";
				soundClose = "doorWoodFrontClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors2 {
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.6;
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
				initPhase = 1;
				initOpened = 0.3;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors4 {
				displayName = "door 4";
				component = "Doors4";
				soundPos = "doors4_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.9;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors5 {
				displayName = "door 5";
				component = "Doors5";
				soundPos = "doors5_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.1;
				armor = 0.2;
				soundOpen = "doorWoodFrontOpen";
				soundClose = "doorWoodFrontClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors10 {
				displayName = "door 10";
				component = "Doors10";
				soundPos = "doors10_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.8;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors11 {
				displayName = "door 11";
				component = "Doors11";
				soundPos = "doors11_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.1;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors14 {
				displayName = "door 14";
				component = "Doors14";
				soundPos = "doors14_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.6;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class DoorsTwin1 {
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.3;
				armor = 0.2;
				soundOpen = "doorWoodTwinOpen";
				soundClose = "doorWoodTwinClose";
				soundLocked = "doorWoodRattle";
			};
			
			class DoorsTwin2 {
				displayName = "door Twin2";
				component = "DoorsTwin2";
				soundPos = "doorsTwin2_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodTwinOpen";
				soundClose = "doorWoodTwinClose";
				soundLocked = "doorWoodRattle";
			};
			
			class DoorsTwin3 {
				displayName = "door Twin3";
				component = "DoorsTwin3";
				soundPos = "doorsTwin3_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.7;
				armor = 0.2;
				soundOpen = "doorWoodTwinOpen";
				soundClose = "doorWoodTwinClose";
				soundLocked = "doorWoodRattle";
			};
			
			class DoorsTwin4 {
				displayName = "door Twin4";
				component = "DoorsTwin4";
				soundPos = "doorsTwin4_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.4;
				armor = 0.2;
				soundOpen = "doorWoodTwinOpen";
				soundClose = "doorWoodTwinClose";
				soundLocked = "doorWoodRattle";
			};
			
			class DoorsTwin5 {
				displayName = "door Twin5";
				component = "DoorsTwin5";
				soundPos = "doorsTwin5_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 1;
				armor = 0.2;
				soundOpen = "doorWoodTwinOpen";
				soundClose = "doorWoodTwinClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
};
