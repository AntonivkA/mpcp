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
	class DZ_Structures_House_Village_store
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Structures"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Village_store: HouseNoDestruct
	{
		model = "DZ\structures\House\Village_store\Village_store.p3d";
		class AnimationSources
		{
			class doors3
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.7;
			};
			class doors4: doors3
			{
				initOpened = 0.3;
			};
			class doorstwin1: doors3
			{
				initOpened = 0.5;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doors3_action;
				radius = 2;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doors3') >= 0.5);
				statement = (this animateSource ['doors3', 0]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doors3') < 0.5);
				statement = (this animateSource ['doors3', 1]);
			};
			class OpenDoors_4: OpenDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') >= 0.5);
				statement = (this animateSource ['doors4', 0]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') < 0.5);
				statement = (this animateSource ['doors4', 1]);
			};
			class OpenDoors_5: OpenDoors_1
			{
				position = doorstwin1_action;
				condition = ((this animationSourcePhase 'doorstwin1') >= 0.5);
				statement = (this animateSource ['doorstwin1', 0]);
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = doorstwin1_action;
				condition = ((this animationSourcePhase 'doorstwin1') < 0.5);
				statement = (this animateSource ['doorstwin1', 1]);
			};
		};
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.5;
				armor = 0.2;
				soundOpen = "doorWoodTwinOpen";
				soundClose = "doorWoodTwinClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors3
			{
				displayName = "door 3";
				component = "Doors3";
				soundPos = "doors3_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.7;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors4
			{
				displayName = "door 4";
				component = "Doors4";
				soundPos = "doors4_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
};
