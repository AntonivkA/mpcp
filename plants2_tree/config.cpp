// config.bin - 12:06:54 05/22/17, generated in 0.00 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define private		0
#define protected		1
#define public		2

class CfgPatches {
	class DZ_Trees {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles {
	class FixedContainer;	// External class reference
	
	class ChristmasTree : FixedContainer {
		scope = protected;
		model = "DZ\plants2\tree\t_picea2s_christmas.p3d";
		itemsCargo[] = {"Fruit_Apple", "Fruit_Kiwi", "Fruit_Potato", "Fruit_Pumpkin", "Fruit_Orange", "Fruit_Banana", "Fruit_Pear"};
	};
};
