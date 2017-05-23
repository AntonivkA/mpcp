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
	class DZ_Structures_House_A_Hospital
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
	class Land_A_Hospital: HouseNoDestruct
	{
		model = "\dz\structures\House\A_Hospital\A_Hospital.p3d";
		ladders[] = {{"Ladder01_start","Ladder01_end"},{"Ladder02_start","Ladder02_end"},{"Ladder03_start","Ladder03_end"},{"Ladder04_start","Ladder04_end"}};
		displayName = "Hospital";
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
			class doors5: doors1
			{
				initOpened = 0.7;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "<img image='\dz\ui\data\igui\cfg\actions\open_ca.paa' size='2.5' />";
				displayName = "Open door";
				position = doors1_action;
				radius = 2;
				onlyForPlayer = 0;
				condition = ((this animationSourcePhase 'doors1') >= 0.5);
				statement = (this animateSource ['doors1', 0]);
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "<img image='\dz\ui\data\igui\cfg\actions\close_ca.paa' size='2.5' />";
				displayName = "Close door";
				condition = ((this animationSourcePhase 'doors1') < 0.5);
				statement = (this animateSource ['doors1', 1]);
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') >= 0.5);
				statement = (this animateSource ['doors2', 0]);
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = doors2_action;
				condition = ((this animationSourcePhase 'doors2') < 0.5);
				statement = (this animateSource ['doors2', 1]);
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = doors3_action;
				condition = ((this animationSourcePhase 'doors3') >= 0.5);
				statement = (this animateSource ['doors3', 0]);
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = doors3_action;
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
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') >= 0.5);
				statement = (this animateSource ['doors5', 0]);
			};
			class CloseDoors_5: CloseDoors_1
			{
				position = doors5_action;
				condition = ((this animationSourcePhase 'doors5') < 0.5);
				statement = (this animateSource ['doors5', 1]);
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "CloseDoors_1";
		actionBegin2 = "OpenDoors_2";
		actionEnd2 = "CloseDoors_2";
		actionBegin3 = "OpenDoors_3";
		actionEnd3 = "CloseDoors_3";
		actionBegin4 = "OpenDoors_4";
		actionEnd4 = "CloseDoors_4";
		actionBegin5 = "OpenDoors_5";
		actionEnd5 = "CloseDoors_5";
	};
};
