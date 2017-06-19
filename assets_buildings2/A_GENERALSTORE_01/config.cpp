////////////////////////////////////////////////////////////////////
//DeRap: /mnt/g/Program Files (x86)/Steam/steamapps/common/Arma 3/@DayZ/Addons/assets_buildings2/A_GENERALSTORE_01/config.bin
//Produced from mikero's Dos Tools Dll version 6.31
//'now' is Mon Jun 19 20:29:15 2017 : 'file' last modified on Tue May 23 11:02:41 2017
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
	class DZ_Buildings2_A_GENERALSTORE_01
	{
		units[] = {"Land_A_GeneralStore_01","Land_A_GeneralStore_01a"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Buildings","DZ_Buildings2"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_A_GeneralStore_01: HouseNoDestruct
	{
		scope = 2;
		animated = 1;
		model = "dz\buildings2\A_GeneralStore_01\A_GeneralStore_01.p3d";
		displayName = "General Store 1";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.6;
			};
			class doorstwin2: doorstwin1{};
			class doorstwin3: doorstwin1{};
			class doorstwin4: doorstwin1{};
			class doorstwin5: doorstwin1{};
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
			class OpenDoors_2: OpenDoors_1
			{
				position = "doorstwin2_action";
				condition = "((this animationSourcePhase 'doorstwin2') < 0.5)";
				statement = "(this animateSource ['doorstwin2', 1])";
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = "doorstwin2_action";
				condition = "((this animationSourcePhase 'doorstwin2') >= 0.5)";
				statement = "(this animateSource ['doorstwin2', 0])";
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = "doorstwin3_action";
				condition = "((this animationSourcePhase 'doorstwin3') < 0.5)";
				statement = "(this animateSource ['doorstwin3', 1])";
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = "doorstwin3_action";
				condition = "((this animationSourcePhase 'doorstwin3') >= 0.5)";
				statement = "(this animateSource ['doorstwin3', 0])";
			};
			class OpenDoors_4: OpenDoors_1
			{
				position = "doorstwin4_action";
				condition = "((this animationSourcePhase 'doorstwin4') < 0.5)";
				statement = "(this animateSource ['doorstwin4', 1])";
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = "doorstwin4_action";
				condition = "((this animationSourcePhase 'doorstwin4') >= 0.5)";
				statement = "(this animateSource ['doorstwin4', 0])";
			};
			class OpenDoors_5: OpenDoors_1
			{
				position = "doorstwin5_action";
				condition = "((this animationSourcePhase 'doorstwin5') < 0.5)";
				statement = "(this animateSource ['doorstwin5', 1])";
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = "doorstwin5_action";
				condition = "((this animationSourcePhase 'doorstwin5') >= 0.5)";
				statement = "(this animateSource ['doorstwin5', 0])";
			};
		};
	};
	class Land_A_GeneralStore_01a: Land_A_GeneralStore_01
	{
		scope = 2;
		model = "dz\buildings2\A_GeneralStore_01\A_GeneralStore_01a.p3d";
		displayName = "General Store 1a";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
	};
};
