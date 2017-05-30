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
	class DZ_Misc3
	{
		units[] = {"Land_HBarrier_large","Land_HBarrier1","Land_HBarrier3","Land_HBarrier5","Land_fort_bagfence_corner","Land_fort_bagfence_long","Land_fort_bagfence_round","Land_BagFenceCorner","Land_BagFenceEnd","Land_BagFenceLong","Land_BagFenceRound","Land_BagFenceShort","Land_fort_artillery_nest","Fort_RazorWire","Land_fortified_nest_big","Land_fortified_nest_small","Land_Fort_Watchtower","Hedgehog","Land_Fort_EnvelopeSmall","Land_Fort_EnvelopeBig","Fort_Barricade","FoldTable","FoldChair","WoodChair","Desk","SmallTable","Park_bench1","Park_bench2","Land_CncBlock","Land_CncBlock_Stripes","Land_CncBlock_D","Land_Toilet","Land_Fire","Land_Fire_burning","Land_Campfire","Land_Campfire_burning","Land_Campfire_dry","Barrels","Paleta1","Paleta2","Land_Misc_deerstand","Land_Misc_GContainer_Big","Land_Misc_Scaffolding","Land_Ind_IlluminantTower","Land_Ind_Timbers","Pile_of_wood","Land_Ind_BoardsPack1","Land_Ind_BoardsPack2","Land_radar","Fence_Ind","Fence_Ind_long","Fence_corrugated_plate","Haystack","Garbage_container","Garbage_can","Axe_woodblock","Haystack_small","Misc_concrete_High","PowerGenerator","Satelit","Land_psi_bouda","FloorMop","Notebook","SmallTV","Land_A_tent","Land_tent_east","Land_Camp","Land_CampEast","Land_ACamp","Land_GuardShed","Land_Antenna","Land_CamoNet_NATO","Land_CamoNet_NATOVar","Land_CamoNetB_NATO","Land_CamoNet_EAST","Land_CamoNet_EastVar","Land_CamoNetB_EAST","PowGen_Big","Barrack2","Land_Mash","Land_BoatSmall_1","Land_BoatSmall_2a","Land_BoatSmall_2b","Hanged","Hanged_MD","Land_Church_tomb_1","Land_Church_tomb_2","Land_Church_tomb_3","Land_MassGrave","Fort_CAmp","Fort_Nest","Wooden_barrels","Land_seno_balik","Land_PowGen_Big_ruins","Land_Barrack2"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Structures","DZ_Misc","DZ_Misc2","DZ_Buildings","DZ_Buildings2"};
	};
};
class smallfire;
class CfgVehicles
{
	class Static;
	class House: Static
	{
		class DestructionEffects{};
	};
	class HouseNoDestruct: House{};
	class Land_MassGrave: HouseNoDestruct
	{
		displayName = "$STR_DN_MASS_GRAVE";
		model = "\DZ\misc3\DeadBodies\MassGrave.p3d";
		icon = "dz\structures\Data\Icons\i_grave_CA.paa";
		mapSize = 2;
		accuracy = 1000;
		class EventHandlers
		{
			init = "dummy = _this execVM ""DZ\misc3\DeadBodies\scripts\fly.sqf""";
		};
	};
	class Land_fort_bagfence_corner: HouseNoDestruct
	{
		displayName = "$STR_DN_FORT_BAGFENCE_CORNER";
		model = "\dz\misc3\fort_bagfence_corner.p3d";
		icon = "\dz\misc3\data\Icons\icon_fortBagFenceCorner_ca.paa";
		mapSize = 3.2;
	};
	class Land_fort_bagfence_long: Land_fort_bagfence_corner
	{
		displayName = "$STR_DN_FORT_BAGFENCE_LONG";
		model = "\dz\misc3\fort_bagfence_long.p3d";
		icon = "\dz\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
	};
	class Land_fort_bagfence_round: Land_fort_bagfence_corner
	{
		displayName = "$STR_DN_FORT_BAGFENCE_ROUND";
		model = "\dz\misc3\fort_bagfence_round.p3d";
		icon = "\dz\misc3\data\Icons\icon_fortBagFenceRound_ca.paa";
	};
	class Land_fort_artillery_nest: HouseNoDestruct
	{
		displayName = "$STR_DN_FORT_ARTILLERY_NEST";
		model = "\dz\misc3\fort_artillery_nest.p3d";
		icon = "\dz\misc3\data\Icons\icon_fortArtilleryNest_ca.paa";
		mapSize = 20;
		GhostView = "Land_fort_artillery_nestPreview";
	};
	class Land_fortified_nest_big: HouseNoDestruct
	{
		displayName = "$STR_DN_FORTIFIED_NEST_BIG";
		model = "\dz\misc3\fortified_nest_big.p3d";
		icon = "\dz\misc3\data\Icons\icon_fortNestBig_ca.paa";
		armor = 500;
	};
	class Land_fortified_nest_small: HouseNoDestruct
	{
		displayName = "$STR_DN_FORTIFIED_NEST_SMALL";
		model = "\dz\misc3\fortified_nest_small.p3d";
		icon = "\dz\misc3\data\Icons\icon_fortNestSmall_ca.paa";
		mapSize = 5;
	};
	class Land_Fort_Watchtower: HouseNoDestruct
	{
		displayName = "$STR_DN_FORT_WATCHTOWER";
		model = "\dz\misc3\fort_watchtower.p3d";
		icon = "\dz\misc3\data\Icons\icon_fortWatchTower_ca.paa";
		ladders[] = {{"start1","end1"}};
	};
	class Land_Antenna: HouseNoDestruct
	{
		displayName = "$STR_DN_ANTENNA";
		model = "\dz\misc3\antenna.p3d";
		icon = "\dz\misc3\data\Icons\icon_antenna_ca.paa";
		mapSize = 5;
	};
	class Land_CamoNet_NATO: HouseNoDestruct
	{
		displayName = "$STR_DN_CAMONET_NATO";
		model = "\dz\misc3\CamoNet_NATO.p3d";
		icon = "\dz\misc3\data\Icons\icon_camoNet_ca.paa";
		mapSize = 13.5;
	};
	class Land_CamoNet_NATOVar: Land_CamoNet_NATO
	{
		displayName = "$STR_DN_CAMONET_NATOVAR";
		model = "\dz\misc3\CamoNet_NATOVar.p3d";
	};
	class Land_CamoNetB_NATO: Land_CamoNet_NATO
	{
		displayName = "$STR_DN_CAMONETB_NATO";
		model = "\dz\misc3\CamoNetB_NATO.p3d";
		icon = "\dz\misc3\data\Icons\icon_camoNetBig_ca.paa";
		mapSize = 18;
	};
	class Land_CamoNet_EAST: HouseNoDestruct
	{
		displayName = "$STR_DN_CAMONET_EAST";
		model = "\dz\misc3\CamoNet_EAST.p3d";
		icon = "\dz\misc3\data\Icons\icon_camoNet_ca.paa";
		mapSize = 13.5;
	};
	class Land_CamoNet_EastVar: Land_CamoNet_EAST
	{
		displayName = "$STR_DN_CAMONET_EASTVAR";
		model = "\dz\misc3\CamoNet_EastVar.p3d";
	};
	class Land_CamoNetB_EAST: Land_CamoNet_EAST
	{
		displayName = "$STR_DN_CAMONETB_EAST";
		model = "\dz\misc3\CamoNetB_EAST.p3d";
		icon = "\dz\misc3\data\Icons\icon_camoNetBig_ca.paa";
		mapSize = 18;
	};
	class Land_CncBlock: HouseNoDestruct
	{
		displayName = "$STR_MISC_CNCBLOCK";
		model = "\dz\misc3\CncBlock.p3d";
		Icon = "\dz\misc3\Data\Icons\icon_cnc_con_barrier_CA.paa";
		mapSize = 4;
		armor = 150;
	};
	class Land_CncBlock_Stripes: HouseNoDestruct
	{
		displayName = "$STR_MISC_CNCBLOCK_STRIPES";
		model = "\dz\misc3\CncBlock_stripes.p3d";
		Icon = "\dz\misc3\Data\Icons\icon_cnc_con_barrier_stripes_CA.paa";
		mapSize = 4;
	};
	class Land_CncBlock_D: HouseNoDestruct
	{
		displayName = "$STR_MISC_CNCBLOCK_D";
		model = "\dz\misc3\CncBlock_D.p3d";
		Icon = "\dz\misc3\Data\Icons\icon_cnc_con_barrier_CA.paa";
		mapSize = 4;
	};
	class Land_Toilet: HouseNoDestruct
	{
		displayName = "$STR_MISC_TOILET";
		model = "\dz\misc3\Toilet.p3d";
		icon = "\dz\misc3\Data\Toilet_CA.paa";
		animated = 1;
		mapSize = 0.1;
		accuracy = 0.3;
		coefInside = 0.5;
		coefInsideHeur = 0.8;
		cost = 0;
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.1;
				sound = "DoorWoodSmall";
				soundPosition = "doors1_action";
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = doors1_action;
				radius = 2;
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
		};
	};
	class Land_A_tent: HouseNoDestruct
	{
		displayName = "$STR_DN_A_TENT";
		model = "\dz\misc3\A_tent.p3d";
		icon = "\dz\misc3\data\Icons\icon_Atent_ca.paa";
		armor = 10;
		mapSize = 3;
	};
	class Land_tent_east: HouseNoDestruct
	{
		displayName = "$STR_DN_TENT_EAST";
		model = "\dz\misc3\tent_east.p3d";
		icon = "\dz\misc3\data\Icons\icon_tentEast_ca.paa";
		mapSize = 12;
	};
	class Land_BoatSmall_1: HouseNoDestruct
	{
		scope = 2;
		displayName = "$STR_DN_WBOATSMALL";
		model = "\dz\misc3\BoatSmall_1.p3d";
	};
	class Land_BoatSmall_2a: HouseNoDestruct
	{
		scope = 2;
		displayName = "$STR_DN_WBOATSMALL_2A";
		model = "\dz\misc3\BoatSmall_2a.p3d";
	};
	class Land_BoatSmall_2b: HouseNoDestruct
	{
		scope = 2;
		displayName = "$STR_DN_WBOATSMALL_2B";
		model = "\dz\misc3\BoatSmall_2b.p3d";
	};
};
