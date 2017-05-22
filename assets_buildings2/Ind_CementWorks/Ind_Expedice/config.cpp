// config.bin - 11:58:50 05/22/17, generated in 0.01 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define private		0
#define protected		1
#define public		2

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
	class DZ_Buildings2_Ind_CementWorks_Ind_Expedice {
		units[] = {"Land_Ind_Expedice_1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Buildings", "DZ_Buildings2"};
	};
};

class CfgVehicles {
	class HouseNoDestruct;	// External class reference
	
	class Land_Ind_Expedice_1 : HouseNoDestruct {
		scope = protected;
		model = "dz\buildings2\Ind_CementWorks\Ind_Expedice\Ind_Expedice_1.p3d";
		ladders[] = {{"start1", "end1"}, {"start2", "end2"}, {"start3", "end3"}, {"start4", "end4"}};
		armor = 20000;
		
		class Doors {
			class DoorsTwin1 {
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0;
				armor = 0.2;
				soundOpen = "doorMetalTwinOpen";
				soundClose = "doorMetalTwinClose";
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
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors4 {
				displayName = "door 4";
				component = "Doors4";
				soundPos = "doors4_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0;
				armor = 0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorWoodRattle";
			};
			
			class Doors5 {
				displayName = "door 5";
				component = "Doors5";
				soundPos = "doors5_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0;
				armor = 0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
	
	class Land_Ind_Expedice_2 : HouseNoDestruct {
		model = "dz\buildings2\Ind_CementWorks\Ind_Expedice\Ind_Expedice_2.p3d";
	};
	
	class Land_Ind_Expedice_3 : HouseNoDestruct {
		model = "dz\buildings2\Ind_CementWorks\Ind_Expedice\Ind_Expedice_3.p3d";
	};
};
