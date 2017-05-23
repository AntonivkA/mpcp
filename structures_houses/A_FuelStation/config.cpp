#define _ARMA_

enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class DZ_Structures_House_A_FuelStation
	{
		units[] = {"Land_A_FuelStation_Shed"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};
class CfgVehicles
{
	class Static;
	class House: Static
	{
		class DestructionEffects;
	};
	class Land_A_FuelStation_Feed: House
	{
		model = "\dz\structures\House\A_FuelStation\A_FuelStation_Feed.p3d";
		transportFuel = 50000;
		nameSound = "fuelstation";
		armor = 15;
		accuracy = 0.5;
		canSplit = 0;
		stackedMax = 5000;
		stackedUnit = "l";
		quantity = "format ['%1%%', round((quantity _this / maxQuantity _this) * 100)]";
		storeVariables[] = {"quantity","modifiers","liquidType"};
		synchronizedVariables[] = {"quantity",1,"liquidType",1};
	};
	class Land_A_FuelStation_Build: House
	{
		armor = 3000;
		model = "\dz\structures\House\A_FuelStation\A_FuelStation_Build.p3d";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
			};
			class doors2: doors1
			{
				initOpened = 0.7;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doors1_action;
				radius = 4;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') < 0.5);
				statement = (this animateSource ['doors2', 1]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') >= 0.5);
				statement = (this animateSource ['doors2', 0]);
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "CloseDoors_1";
		actionBegin2 = "OpenDoors_2";
		actionEnd2 = "CloseDoors_2";
	};
	class Land_A_FuelStation_Shed: House
	{
		model = "\dz\structures\House\A_FuelStation\A_FuelStation_Shed.p3d";
	};
};
