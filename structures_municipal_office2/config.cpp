// config.bin - 12:12:08 05/22/17, generated in 0.01 seconds
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
	class DZ_Structures_A_MunicipalOffice2 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};

class CfgVehicles {
	class HouseNoDestruct;	// External class reference
	
	class Land_A_MunicipalOffice2 : HouseNoDestruct {
		model = "DZ\structures\A_MunicipalOffice2\A_MunicipalOffice2.p3d";
		featureSize = 50;
		ladders[] = {{"start", "end"}};
		
		class Doors {
			class DoorsTwin1 {
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.1;
				armor = 0.2;
				soundOpen = "doorWoodTwinOpen";
				soundClose = "doorWoodTwinClose";
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
				initOpened = 0.5;
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
				initOpened = 0.4;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors6 {
				displayName = "door 6";
				component = "Doors6";
				soundPos = "doors6_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.6;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors7 {
				displayName = "door 7";
				component = "Doors7";
				soundPos = "doors7_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.8;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
};
