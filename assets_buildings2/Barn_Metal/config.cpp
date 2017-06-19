////////////////////////////////////////////////////////////////////
//DeRap: /mnt/g/Program Files (x86)/Steam/steamapps/common/Arma 3/@DayZ/Addons/assets_buildings2/Barn_Metal/config.bin
//Produced from mikero's Dos Tools Dll version 6.31
//'now' is Mon Jun 19 20:32:18 2017 : 'file' last modified on Tue May 23 23:38:03 2017
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
	class DZ_Buildings2_Barn_Metal
	{
		units[] = {"Land_Barn_Metal"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Buildings2"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Barn_Metal: HouseNoDestruct
	{
		scope = 2;
		model = "dz\buildings2\Barn_Metal\Barn_Metal.p3d";
		ladders[] = {{"start1","end1"},{"start2","end2"}};
		animated = 1;
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0;
			};
			class doors2: doors1
			{
				initPhase = 1;
			};
			class doors3: doors2{};
			class doors4: doors1{};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 3;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doors1') < 0.5)";
				statement = "(this animateSource ['doors1', 1])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "((this animationSourcePhase 'doors1') >= 0.5)";
				statement = "(this animateSource ['doors1', 0])";
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = "doors2_action";
				condition = "((this animationSourcePhase 'doors2') < 0.5)";
				statement = "(this animateSource ['doors2', 1])";
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = "doors2_action";
				condition = "((this animationSourcePhase 'doors2') >= 0.5)";
				statement = "(this animateSource ['doors2', 0])";
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = "doors3_action";
				condition = "((this animationSourcePhase 'doors3') < 0.5)";
				statement = "(this animateSource ['doors3', 1])";
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = "doors3_action";
				condition = "((this animationSourcePhase 'doors3') >= 0.5)";
				statement = "(this animateSource ['doors3', 0])";
			};
			class OpenDoors_4: OpenDoors_1
			{
				position = "doors4_action";
				condition = "((this animationSourcePhase 'doors4') < 0.5)";
				statement = "(this animateSource ['doors4', 1])";
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = "doors4_action";
				condition = "((this animationSourcePhase 'doors4') >= 0.5)";
				statement = "(this animateSource ['doors4', 0])";
			};
		};
	};
};
