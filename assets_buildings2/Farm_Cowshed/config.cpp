////////////////////////////////////////////////////////////////////
//DeRap: /mnt/g/Program Files (x86)/Steam/steamapps/common/Arma 3/@DayZ/Addons/assets_buildings2/Farm_Cowshed/config.bin
//Produced from mikero's Dos Tools Dll version 6.31
//'now' is Mon Jun 19 20:34:44 2017 : 'file' last modified on Wed May 24 13:32:37 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(12 Enums)
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
			};
			class doorstwin2: doorstwin1{};
			class doors5: doorstwin1
			{
				initOpened = 0.8;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doorstwin1_action";
				radius = 3;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doorstwin1') >= 0.5)";
				statement = "(this animateSource ['doorstwin1', 0])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "((this animationSourcePhase 'doorstwin1') < 0.5)";
				statement = "(this animateSource ['doorstwin1', 1])";
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = "doorstwin2_action";
				condition = "((this animationSourcePhase 'doorstwin2') >= 0.5)";
				statement = "(this animateSource ['doorstwin2', 0])";
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = "doorstwin2_action";
				condition = "((this animationSourcePhase 'doorstwin2') < 0.5)";
				statement = "(this animateSource ['doorstwin2', 1])";
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = "doors5_action";
				condition = "((this animationSourcePhase 'doors5') >= 0.5)";
				statement = "(this animateSource ['doors5', 0])";
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = "doors5_action";
				condition = "((this animationSourcePhase 'doors5') < 0.5)";
				statement = "(this animateSource ['doors5', 1])";
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
				position = "twin1_action";
				radius = 3;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doorstwin1') < 0.5)";
				statement = "(this animateSource ['doorstwin1', 1])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "((this animationSourcePhase 'doorstwin1') >= 0.5)";
				statement = "(this animateSource ['doorstwin1', 0])";
			};
		};
	};
};
