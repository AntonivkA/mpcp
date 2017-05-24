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
	class DZ_Structures_House_A_Office02
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
	class Land_A_Office02: HouseNoDestruct
	{
		model = "\dz\structures\House\A_Office02\A_Office02.p3d";
		ladders[] = {{"start1","end1"},{"start2","end2"},{"start3","end3"}};
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
			};
			class doorstwin2: doorstwin1
			{
				initOpened = 0.5;
			};
			class doorstwin3: doorstwin1
			{
				initOpened = 0.7;
			};
			class doorstwin4: doorstwin1
			{
				initOpened = 0.4;
			};
			class doorstwin5: doorstwin1
			{
				initOpened = 1;
			};
			class doors1: doorstwin1
			{
				initOpened = 0.2;
			};
			class doors2: doorstwin1
			{
				initOpened = 0.6;
			};
			class doors3: doorstwin1
			{
				initOpened = 0.3;
			};
			class doors4: doorstwin1
			{
				initOpened = 0.9;
			};
			class doors5: doorstwin1
			{
				initOpened = 0.1;
			};
			class doors10: doorstwin1
			{
				initOpened = 0.8;
			};
			class doors11: doorstwin1
			{
				initOpened = 0.1;
			};
			class doors14: doorstwin1
			{
				initOpened = 0.6;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doorstwin1_action;
				radius = 2.5;
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
			class OpenDoors_2: OpenDoors_1
			{
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') < 0.5);
				statement = (this animateSource ['doorstwin2', 1]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doorstwin2_action;
				condition = ((this animationSourcePhase 'doorstwin2') >= 0.5);
				statement = (this animateSource ['doorstwin2', 0]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doorstwin3_action;
				condition = ((this animationSourcePhase 'doorstwin3') < 0.5);
				statement = (this animateSource ['doorstwin3', 1]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doorstwin3_action;
				condition = ((this animationSourcePhase 'doorstwin3') >= 0.5);
				statement = (this animateSource ['doorstwin3', 0]);
			};
			class OpenDoors_4: OpenDoors_1
			{
				position = doorstwin4_action;
				condition = ((this animationSourcePhase 'doorstwin4') < 0.5);
				statement = (this animateSource ['doorstwin4', 1]);
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = doorstwin4_action;
				condition = ((this animationSourcePhase 'doorstwin4') >= 0.5);
				statement = (this animateSource ['doorstwin4', 0]);
			};
			class OpenDoors_5: OpenDoors_1
			{
				position = doorstwin5_action;
				condition = ((this animationSourcePhase 'doorstwin5') < 0.5);
				statement = (this animateSource ['doorstwin5', 1]);
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = doorstwin5_action;
				condition = ((this animationSourcePhase 'doorstwin5') >= 0.5);
				statement = (this animateSource ['doorstwin5', 0]);
			};
			class OpenDoors_6: OpenDoors_1
			{
				position = doors1_action;
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
			class CloseDoors_6: CloseDoors_1
			{
				position = doors1_action;
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class OpenDoors_7: OpenDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') < 0.5);
				statement = (this animateSource ['doors2', 1]);
			};
			class CloseDoors_7: CloseDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') >= 0.5);
				statement = (this animateSource ['doors2', 0]);
			};
			class OpenDoors_8: OpenDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') < 0.5);
				statement = (this animateSource ['doors3', 1]);
			};
			class CloseDoors_8: CloseDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') >= 0.5);
				statement = (this animateSource ['doors3', 0]);
			};
			class OpenDoors_9: OpenDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') < 0.5);
				statement = (this animateSource ['doors4', 1]);
			};
			class CloseDoors_9: CloseDoors_1
			{
				position = doors4_action;
				condition = ((this animationSourcePhase 'doors4') >= 0.5);
				statement = (this animateSource ['doors4', 0]);
			};
			class OpenDoors_10: OpenDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') < 0.5);
				statement = (this animateSource ['doors5', 1]);
			};
			class CloseDoors_10: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') >= 0.5);
				statement = (this animateSource ['doors5', 0]);
			};
			class OpenDoors_11: OpenDoors_1
			{
				position = doors10_action;
				condition = ((this animationSourcePhase 'doors10') < 0.5);
				statement = (this animateSource ['doors10', 1]);
			};
			class CloseDoors_11: CloseDoors_1
			{
				position = doors10_action;
				condition = ((this animationSourcePhase 'doors10') >= 0.5);
				statement = (this animateSource ['doors10', 0]);
			};
			class OpenDoors_12: OpenDoors_1
			{
				position = doors11_action;
				condition = ((this animationSourcePhase 'doors11') < 0.5);
				statement = (this animateSource ['doors11', 1]);
			};
			class CloseDoors_12: CloseDoors_1
			{
				position = doors11_action;
				condition = ((this animationSourcePhase 'doors11') >= 0.5);
				statement = (this animateSource ['doors11', 0]);
			};
			class OpenDoors_13: OpenDoors_1
			{
				position = doors14_action;
				condition = ((this animationSourcePhase 'doors14') < 0.5);
				statement = (this animateSource ['doors14', 1]);
			};
			class CloseDoors_13: CloseDoors_1
			{
				position = doors14_action;
				condition = ((this animationSourcePhase 'doors14') >= 0.5);
				statement = (this animateSource ['doors14', 0]);
			};
		};
	};
};
