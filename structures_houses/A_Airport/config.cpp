// config.bin - 12:08:20 05/22/17, generated in 0.01 seconds
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
	class DZ_A_Airport {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};

class CfgVehicles {
	class HouseNoDestruct;	// External class reference
	
	class Land_KrasnoAir_Hangars : HouseNoDestruct {
		model = "DZ\structures\House\A_Airport\KrasnoAir_Hangars.p3d";
		
		class Doors {
			class Doors01 {
				displayName = "door 01";
				component = "Doors01";
				soundPos = "doors01_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
	
	class Land_KrasnoAir_Control : HouseNoDestruct {
		model = "DZ\structures\House\A_Airport\KrasnoAir_Control.p3d";
		
		class Doors {
			class Doors01 {
				displayName = "door 01";
				component = "Doors01";
				soundPos = "doors01_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors02 {
				displayName = "door 02";
				component = "Doors02";
				soundPos = "doors02_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors03 {
				displayName = "door 03";
				component = "Doors03";
				soundPos = "doors03_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors05 {
				displayName = "door 05";
				component = "Doors05";
				soundPos = "doors05_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors06 {
				displayName = "door 06";
				component = "Doors06";
				soundPos = "doors06_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors07 {
				displayName = "door 07";
				component = "Doors07";
				soundPos = "doors07_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors08 {
				displayName = "door 08";
				component = "Doors08";
				soundPos = "doors08_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors09 {
				displayName = "door 09";
				component = "Doors09";
				soundPos = "doors09_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors10 {
				displayName = "door 10";
				component = "Doors10";
				soundPos = "doors10_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
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
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
};
