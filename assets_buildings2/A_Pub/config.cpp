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
	class DZ_Buildings2_A_Pub
	{
		units[] = {"Land_A_Pub_01"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Buildings2"};
	};
};
class CfgVehicles
{
	class House;
	class Land_A_Pub_01: House
	{
		scope = 2;
		model = "dz\buildings2\A_Pub\A_Pub_01.p3d";
		displayName = "Pub";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.1;
			};
			class doors2: doors1
			{
				initOpened = 0.7;
			};
			class doors3: doors1
			{
				initOpened = 0.3;
			};
			class doors4: doors1
			{
				initOpened = 0.8;
			};
			class doors5: doors2 {};
			class doors6: doors2 {};
			class doors7: doors2 {};
			class doors8: doors2 {};
			class doors9: doors2 {};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doors1_action;
				radius = 2.5;
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
			class OpenDoors_3: OpenDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') < 0.5);
				statement = (this animateSource ['doors3', 1]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') >= 0.5);
				statement = (this animateSource ['doors3', 0]);
			};
			class OpenDoors_4: OpenDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') < 0.5);
				statement = (this animateSource ['doors4', 1]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') >= 0.5);
				statement = (this animateSource ['doors4', 0]);
			};
			class OpenDoors_5: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') < 0.5);
				statement = (this animateSource ['doors5', 1]);
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') >= 0.5);
				statement = (this animateSource ['doors5', 0]);
			};
			class OpenDoors_6: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors6') < 0.5);
				statement = (this animateSource ['doors6', 1]);
			};
			class CloseDoors_6: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors6') >= 0.5);
				statement = (this animateSource ['doors6', 0]);
			};
			class OpenDoors_7: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors7') < 0.5);
				statement = (this animateSource ['doors7', 1]);
			};
			class CloseDoors_7: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors7') >= 0.5);
				statement = (this animateSource ['doors7', 0]);
			};
			class OpenDoors_8: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors8') < 0.5);
				statement = (this animateSource ['doors8', 1]);
			};
			class CloseDoors_8: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors8') >= 0.5);
				statement = (this animateSource ['doors8', 0]);
			};
			class OpenDoors_9: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors9') < 0.5);
				statement = (this animateSource ['doors9', 1]);
			};
			class CloseDoors_9: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors9') >= 0.5);
				statement = (this animateSource ['doors9', 0]);
			};
		};
	};
};
