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
	class DZ_Buildings2_Farm_Cowshed
	{
		units[] = {"Land_Farm_Cowshed_a","Land_Farm_Cowshed_b","Land_Farm_Cowshed_c"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Buildings","DZ_Buildings2"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Farm_Cowshed_a: HouseNoDestruct
	{
		scope = 2;
		model = "dz\buildings2\Farm_Cowshed\Farm_Cowshed_a.p3d";
		displayName = "Cowshed (a)";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.1;
				sound = "doorWoodTwin";
				soundPosition = "doorstwin1_action";
			};
			class doorstwin2: doorstwin1
			{
				sound = "doorWoodTwin";
				soundPosition = "doorstwin2_action";
			};
			class doors5: doorstwin1
			{
				initOpened = 0.8;
				sound = "doorWoodTwin";
				soundPosition = "doors5_action";
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doorstwin1_action;
				radius = 4;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doorstwin1') >= 0.5);
				statement = (this animateSource ['doorstwin1', 0]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doorstwin1') < 0.5);
				statement = (this animateSource ['doorstwin1', 1]);
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') >= 0.5);
				statement = (this animateSource ['doorstwin2', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') < 0.5);
				statement = (this animateSource ['doorstwin2', 1]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') >= 0.5);
				statement = (this animateSource ['doors5', 0]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') < 0.5);
				statement = (this animateSource ['doors5', 1]);
			};
		};
	};
	class Land_Farm_Cowshed_b: HouseNoDestruct
	{
		scope = 2;
		model = "dz\buildings2\Farm_Cowshed\Farm_Cowshed_b.p3d";
		displayName = "Cowshed (b)";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
	class Land_Farm_Cowshed_c: HouseNoDestruct
	{
		scope = 2;
		model = "dz\buildings2\Farm_Cowshed\Farm_Cowshed_c.p3d";
		displayName = "Cowshed (c)";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = twin1_action;
				radius = 5;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doorstwin1') < 0.5);
				statement = (this animateSource ['doorstwin1', 1]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT"; 
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = ((this animationSourcePhase 'doorstwin1') >= 0.5);
				statement = (this animateSource ['doorstwin1', 0]);
			};
		};
	};
};
