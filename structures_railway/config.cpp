// config.bin - 12:12:45 05/22/17, generated in 0.00 seconds
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
	class DZ_Structures_Rail {
		units[] = {"Land_wagon_box", "Land_loco_742_blue", "Land_Rail_Semafor", "Land_Rail_Zavora"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};

class CfgVehicles {
	class HouseNoDestruct;	// External class reference
	
	class Land_Rail_Semafor : HouseNoDestruct {
		model = "\dz\structures\Rail\Rail_Misc\rail_Semafor.p3d";
	};
	
	class Land_Rail_Zavora : HouseNoDestruct {
		model = "\dz\structures\Rail\Rail_Misc\rail_Zavora.p3d";
	};
	
	class Land_wagon_box : HouseNoDestruct {
		displayName = $STR_WAGON_BOX;
		model = "\dz\structures\Rail\Rail_Wagon\wagon_box.p3d";
		ladders[] = {{"start1", "end1"}};
	};
	
	class Land_loco_742_blue : HouseNoDestruct {
		displayName = $STR_LOCO_BLUE;
		model = "\dz\structures\Rail\Rail_Loco\loco_742_blue.p3d";
	};
};
