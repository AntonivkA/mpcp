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
	class DZ_Structures_House_Police_Station
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
	class Land_Police_Station: HouseNoDestruct
	{
		model = "DZ\structures\House\Police_Station\police_station.p3d";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.5;
			};
			class doors2: doors1{};
			class doors3: doors1{};
			class doors4: doors1{};
			class doors5: doors1{};
			class doors6: doors1{};
			class doors7: doors1{};
			class doors8: doors1{};
			class doors9: doors1{};
			class doors10: doors1{};
			class doors11: doors1{};
			class doors12: doors1{};
			class doors13: doors1{};
			class doors14: doors1{};
			class doors15: doors1{};
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
			class OpenDoors_6: OpenDoors_1
			{
				position = doors6_action;
				condition = ((this animationSourcePhase 'doors6') >= 0.5);
				statement = (this animateSource ['doors6', 0]);
			};
			class CloseDoors_6: CloseDoors_1
			{
				position = doors6_action;
				condition = ((this animationSourcePhase 'doors6') < 0.5);
				statement = (this animateSource ['doors6', 1]);
			};
			class OpenDoors_7: OpenDoors_1
			{
				position = doors7_action;
				condition = ((this animationSourcePhase 'doors7') >= 0.5);
				statement = (this animateSource ['doors7', 0]);
			};
			class CloseDoors_7: CloseDoors_1
			{
				position = doors7_action;
				condition = ((this animationSourcePhase 'doors7') < 0.5);
				statement = (this animateSource ['doors7', 1]);
			};
			class OpenDoors_8: OpenDoors_1
			{
				position = doors8_action;
				condition = ((this animationSourcePhase 'doors8') >= 0.5);
				statement = (this animateSource ['doors8', 0]);
			};
			class CloseDoors_8: CloseDoors_1
			{
				position = doors8_action;
				condition = ((this animationSourcePhase 'doors8') < 0.5);
				statement = (this animateSource ['doors8', 1]);
			};
			class OpenDoors_9: OpenDoors_1
			{
				position = doors9_action;
				condition = ((this animationSourcePhase 'doors9') >= 0.5);
				statement = (this animateSource ['doors9', 0]);
			};
			class CloseDoors_9: CloseDoors_1
			{
				position = doors9_action;
				condition = ((this animationSourcePhase 'doors9') < 0.5);
				statement = (this animateSource ['doors9', 1]);
			};
			class OpenDoors_10: OpenDoors_1
			{
				position = doors10_action;
				condition = ((this animationSourcePhase 'doors10') >= 0.5);
				statement = (this animateSource ['doors10', 0]);
			};
			class CloseDoors_10: CloseDoors_1
			{
				position = doors10_action;
				condition = ((this animationSourcePhase 'doors10') < 0.5);
				statement = (this animateSource ['doors10', 1]);
			};
			class OpenDoors_11: OpenDoors_1
			{
				position = doors11_action;
				condition = ((this animationSourcePhase 'doors11') >= 0.5);
				statement = (this animateSource ['doors11', 0]);
			};
			class CloseDoors_11: CloseDoors_1
			{
				position = doors11_action;
				condition = ((this animationSourcePhase 'doors11') < 0.5);
				statement = (this animateSource ['doors11', 1]);
			};
			class OpenDoors_12: OpenDoors_1
			{
				position = doors12_action;
				condition = ((this animationSourcePhase 'doors12') >= 0.5);
				statement = (this animateSource ['doors12', 0]);
			};
			class CloseDoors_12: CloseDoors_1
			{
				position = doors12_action;
				condition = ((this animationSourcePhase 'doors12') < 0.5);
				statement = (this animateSource ['doors12', 1]);
			};
			class OpenDoors_13: OpenDoors_1
			{
				position = doors13_action;
				condition = ((this animationSourcePhase 'doors13') >= 0.5);
				statement = (this animateSource ['doors13', 0]);
			};
			class CloseDoors_13: CloseDoors_1
			{
				position = doors12_action;
				condition = ((this animationSourcePhase 'doors13') < 0.5);
				statement = (this animateSource ['doors13', 1]);
			};
			class OpenDoors_14: OpenDoors_1
			{
				position = doors14_action;
				condition = ((this animationSourcePhase 'doors14') >= 0.5);
				statement = (this animateSource ['doors14', 0]);
			};
			class CloseDoors_14: CloseDoors_1
			{
				position = doors14_action;
				condition = ((this animationSourcePhase 'doors14') < 0.5);
				statement = (this animateSource ['doors14', 1]);
			};
			class OpenDoors_15: OpenDoors_1
			{
				position = doors15_action;
				condition = ((this animationSourcePhase 'doors15') >= 0.5);
				statement = (this animateSource ['doors15', 0]);
			};
			class CloseDoors_15: CloseDoors_1
			{
				position = doors15_action;
				condition = ((this animationSourcePhase 'doors15') < 0.5);
				statement = (this animateSource ['doors15', 1]);
			};
		};
	};
};
