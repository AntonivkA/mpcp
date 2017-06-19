// config.bin - 21:14:04 06/19/17, generated in 0.01 seconds
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
	class DZ_Structures_House_A_FuelStation {
		units[] = {"Land_A_FuelStation_Shed"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};

class CfgVehicles {
	class Static;	// External class reference
	
	class House : Static {
		class DestructionEffects;	// External class reference
	};
	
	class Land_A_FuelStation_Feed : House {
		model = "\dz\structures\House\A_FuelStation\A_FuelStation_Feed.p3d";
		transportFuel = 50000;
		nameSound = "fuelstation";
		armor = 15;
		accuracy = 0.5;	// accuracy needed to recognize type of this target
		canSplit = 0;
		stackedMax = 5000;
		stackedUnit = "l";
		quantity = "format ['%1%%', round((quantity _this / maxQuantity _this) * 100)]";
		storeVariables[] = {"quantity", "modifiers", "liquidType"};
		synchronizedVariables[] = {"quantity", 1, "liquidType", 1};
	};
	
	class Land_A_FuelStation_Build : House {
		armor = 3000;
		model = "\dz\structures\House\A_FuelStation\A_FuelStation_Build.p3d";
		
		class AnimationSources {
			class doors1 {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
			};
			
			class doors2 : doors1 {
				initOpened = 0.7;
			};
		};
		
		class UserActions {
			class OpenDoors_1 {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = "doors1_action";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doors1') < 0.5)";
				statement = "(this animateSource ['doors1', 1])";
			};
			
			class CloseDoors_1 : OpenDoors_1 {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "((this animationSourcePhase 'doors1') >= 0.5)";
				statement = "(this animateSource ['doors1', 0])";
			};
			
			class OpenDoors_2 : OpenDoors_1 {
				position = "doors2_action";
				condition = "((this animationSourcePhase 'doors2') < 0.5)";
				statement = "(this animateSource ['doors2', 1])";
			};
			
			class CloseDoors_2 : CloseDoors_1 {
				position = "doors2_action";
				condition = "((this animationSourcePhase 'doors2') >= 0.5)";
				statement = "(this animateSource ['doors2', 0])";
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "CloseDoors_1";
		actionBegin2 = "OpenDoors_2";
		actionEnd2 = "CloseDoors_2";
	};
	
	class Land_A_FuelStation_Shed : House {
		model = "\dz\structures\House\A_FuelStation\A_FuelStation_Shed.p3d";
	};
};
