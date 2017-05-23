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
	class DZ_Structures_Tisy_base
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
	class Land_KitchenRoom: HouseNoDestruct
	{
		armor = 320;
		model = "\DZ\structures\Tisy_base\KitchenRoom.p3d";
		ladders[] = {{"start1","end1"}};
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors2
			{
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors3
			{
				displayName = "door 3";
				component = "Doors3";
				soundPos = "doors3_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
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
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors5
			{
				displayName = "door 5";
				component = "Doors5";
				soundPos = "doors5_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors6
			{
				displayName = "door 6";
				component = "Doors6";
				soundPos = "doors6_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors7
			{
				displayName = "door 7";
				component = "Doors7";
				soundPos = "doors7_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
	class Land_SecretBase_HQ: HouseNoDestruct
	{
		armor = 320;
		model = "\DZ\structures\Tisy_base\SecretBase_HQ.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.7;
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
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors4
			{
				displayName = "door 4";
				component = "Doors4";
				soundPos = "doors4_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors5
			{
				displayName = "door 5";
				component = "Doors5";
				soundPos = "doors5_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors6
			{
				displayName = "door 6";
				component = "Doors6";
				soundPos = "doors6_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors7
			{
				displayName = "door 7";
				component = "Doors7";
				soundPos = "doors7_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors8
			{
				displayName = "door 8";
				component = "Doors8";
				soundPos = "doors8_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors9
			{
				displayName = "door 9";
				component = "Doors9";
				soundPos = "doors9_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors10
			{
				displayName = "door 10";
				component = "Doors10";
				soundPos = "doors10_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors11
			{
				displayName = "door 11";
				component = "Doors11";
				soundPos = "doors11_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors12
			{
				displayName = "door 12";
				component = "Doors12";
				soundPos = "doors12_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors13
			{
				displayName = "door 13";
				component = "Doors13";
				soundPos = "doors13_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors14
			{
				displayName = "door 14";
				component = "Doors14";
				soundPos = "doors14_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors15
			{
				displayName = "door 15";
				component = "Doors15";
				soundPos = "doors15_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors16
			{
				displayName = "door 16";
				component = "Doors16";
				soundPos = "doors16_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors17
			{
				displayName = "door 17";
				component = "Doors17";
				soundPos = "doors17_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors18
			{
				displayName = "door 18";
				component = "Doors18";
				soundPos = "doors18_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors19
			{
				displayName = "door 19";
				component = "Doors19";
				soundPos = "doors19_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
	class Land_SecretBase_Bunker2: HouseNoDestruct
	{
		armor = 500;
		model = "\DZ\structures\Tisy_base\SecretBase_Bunker2.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.6;
				armor = 0.2;
				soundOpen = "doorMetalTwinOpen";
				soundClose = "doorMetalTwinClose";
				soundLocked = "doorWoodRattle";
			};
			class DoorsTwin2
			{
				displayName = "door Twin2";
				component = "DoorsTwin2";
				soundPos = "doorsTwin2_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorMetalTwinOpen";
				soundClose = "doorMetalTwinClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors5
			{
				displayName = "door 5";
				component = "Doors5";
				soundPos = "doors5_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors6
			{
				displayName = "door 6";
				component = "Doors6";
				soundPos = "doors6_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
	class Land_SecretBase_Radar: HouseNoDestruct
	{
		armor = 500;
		model = "\DZ\structures\Tisy_base\SecretBase_Radar.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors2
			{
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors3
			{
				displayName = "door 3";
				component = "Doors3";
				soundPos = "doors3_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
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
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors5
			{
				displayName = "door 5";
				component = "Doors5";
				soundPos = "doors5_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors6
			{
				displayName = "door 6";
				component = "Doors6";
				soundPos = "doors6_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors7
			{
				displayName = "door 7";
				component = "Doors7";
				soundPos = "doors7_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors8
			{
				displayName = "door 8";
				component = "Doors8";
				soundPos = "doors8_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors9
			{
				displayName = "door 9";
				component = "Doors9";
				soundPos = "doors9_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors10
			{
				displayName = "door 10";
				component = "Doors10";
				soundPos = "doors10_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors11
			{
				displayName = "door 11";
				component = "Doors11";
				soundPos = "doors11_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors12
			{
				displayName = "door 12";
				component = "Doors12";
				soundPos = "doors12_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors13
			{
				displayName = "door 13";
				component = "Doors13";
				soundPos = "doors13_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors14
			{
				displayName = "door 14";
				component = "Doors14";
				soundPos = "doors14_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors15
			{
				displayName = "door 15";
				component = "Doors15";
				soundPos = "doors15_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors16
			{
				displayName = "door 16";
				component = "Doors16";
				soundPos = "doors16_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
			class Doors17
			{
				displayName = "door 17";
				component = "Doors17";
				soundPos = "doors17_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.2;
				armor = 0.2;
				soundOpen = "doorWoodSmallOpen";
				soundClose = "doorWoodSmallClose";
				soundLocked = "doorWoodRattle";
			};
		};
	};
	class Land_Radar_Antenna: HouseNoDestruct
	{
		armor = 400;
		model = "\DZ\structures\Tisy_base\Radar_Antenna.p3d";
	};
	class Land_RadarPlatform_20m: HouseNoDestruct
	{
		armor = 500;
		model = "\DZ\structures\Tisy_base\RadarPlatform_20m.p3d";
	};
	class Land_G_house: HouseNoDestruct
	{
		armor = 15000;
		model = "\DZ\structures\Tisy_base\G_house.p3d";
	};
	class Land_Base_cooler: HouseNoDestruct
	{
		armor = 1000;
		ladders[] = {{"start1","end1"}};
		model = "\DZ\structures\Tisy_base\Base_cooler.p3d";
	};
};
