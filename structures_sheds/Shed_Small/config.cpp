// config.bin - 12:13:27 05/22/17, generated in 0.00 seconds
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
	class DZ_Structures_Shed_Shed_Small {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};

class CfgVehicles {
	class HouseNoDestruct;	// External class reference
	
	class Land_Shed_W4 : HouseNoDestruct {
		model = "\dz\structures\Shed\Shed_Small\Shed_W4.p3d";
	};
};
