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
	class DZ_Buildings2_Shed_wooden
	{
		units[] = {"Land_Shed_wooden"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Buildings2"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Shed_wooden: HouseNoDestruct
	{
		scope = 2;
		displayName = "Shed Wooden";
		model = "dz\buildings2\Shed_wooden\Shed_wooden.p3d";
		animated = 1;
		vehicleClass = "Misc";
		mapSize = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
				sound = "doorWoodNolatch";
				soundPosition = "doors1_action";
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
		};
	};
};
