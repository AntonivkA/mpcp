// config.bin - 12:10:11 05/22/17, generated in 0.00 seconds
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
	class DZ_Structures_House_Street_Booth {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};

class CfgVehicles {
	class HouseNoDestruct;	// External class reference
	
	class Land_Misc_StreetBooth_grocery : HouseNoDestruct {
		model = "DZ\structures\House\Street_Booth\Misc_StreetBooth_grocery.p3d";
		ladders[] = {{"start1", "end1"}};
		
		class Doors {
			class Doors1 {
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
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
	
	class Land_Misc_StreetBooth_news : Land_Misc_StreetBooth_grocery {
		model = "DZ\structures\House\Street_Booth\Misc_StreetBooth_news.p3d";
	};
	
	class Land_Misc_StreetBooth_fastfood : Land_Misc_StreetBooth_grocery {
		model = "DZ\structures\House\Street_Booth\Misc_StreetBooth_fastfood.p3d";
	};
};
