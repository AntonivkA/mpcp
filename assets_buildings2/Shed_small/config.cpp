////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 6.18
//'now' is Wed May 24 13:06:00 2017 : 'file' last modified on Fri Jan 27 09:46:11 2017
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

//Class /mnt/g/config.bin{
class CfgPatches
{
	class DZ_Buildings2_Shed_small
	{
		units[] = {"Land_Shed_W01","Land_Shed_W02","Land_Shed_W03","Land_Shed_M01","Land_Shed_M02","Land_Shed_M03"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Buildings","DZ_Buildings2"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Shed_W01: HouseNoDestruct
	{
		armor = 30;
		model = "dz\buildings2\Shed_small\Shed_W01.p3d";
	};
	class Land_Shed_W02: Land_Shed_W01
	{
		model = "dz\buildings2\Shed_small\Shed_W02.p3d";
		displayName = "Shed W2";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 4;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doors1') >= 0.5)";
				statement = "(this animateSource ['doors1', 0])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "((this animationSourcePhase 'doors1') < 0.5)";
				statement = "(this animateSource ['doors1', 1])";
			};
		};
	};
	class Land_Shed_W03: Land_Shed_W01
	{
		model = "dz\buildings2\Shed_small\Shed_W03.p3d";
		displayName = "Shed W3";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 4;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doors1') >= 0.5)";
				statement = "(this animateSource ['doors1', 0])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "((this animationSourcePhase 'doors1') < 0.5)";
				statement = "(this animateSource ['doors1', 1])";
			};
		};
	};
	class Land_Shed_M01: Land_Shed_W01
	{
		model = "dz\buildings2\Shed_small\Shed_M01.p3d";
		displayName = "Shed M1";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 4;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doors1') >= 0.5)";
				statement = "(this animateSource ['doors1', 0])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "((this animationSourcePhase 'doors1') < 0.5)";
				statement = "(this animateSource ['doors1', 1])";
			};
		};
	};
	class Land_Shed_M02: Land_Shed_W01
	{
		model = "dz\buildings2\Shed_small\Shed_M02.p3d";
	};
	class Land_Shed_M03: Land_Shed_W01
	{
		model = "dz\buildings2\Shed_small\Shed_M03.p3d";
	};
};
