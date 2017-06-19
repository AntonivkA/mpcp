////////////////////////////////////////////////////////////////////
//DeRap: /mnt/g/Program Files (x86)/Steam/steamapps/common/Arma 3/@DayZ/Addons/assets_buildings/config.bin
//Produced from mikero's Dos Tools Dll version 6.31
//'now' is Mon Jun 19 20:17:26 2017 : 'file' last modified on Thu May 25 19:07:51 2017
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
	class DZ_Buildings
	{
		units[] = {"Land_Hlidac_budka","Land_Hangar_2","Land_molo_drevo_bs","Land_molo_drevo_end","Land_plot_zed_drevo1_branka","Land_kulna","Land_pumpa","Land_vez","Land_Vysilac_FM","Land_telek1","Land_Stoplight02","Land_NavigLight","Land_runway_edgelight","Land_Runway_PAPI","Land_Runway_PAPI_2","Land_Runway_PAPI_3","Land_Runway_PAPI_4","Land_brana02nodoor","Land_budova1","Land_budova2","Land_hut06","Land_repair_center","Land_sara_hasic_zbroj","Land_SS_hangar","Land_stodola_old_open","Land_stodola_open","Land_budova4_in","Land_Garaz","Land_kasna_new","Land_komin","Land_newplot","Land_newplot2","Land_posed","Land_psi_bouda","Land_sara_domek_zluty","Land_Tovarna2","Land_trafostanica_velka_draty","Land_trafostanica_velka","UndergroundStash","Land_anvil","Land_case_bedroom_b","Land_case_wall_unit_part_c","Land_case_wall_unit_part_d","Land_dhangar_brownskrin","Land_dkamna_bila","Land_drill","Land_grinder","Land_kitchen_table_a","Land_metal_cutting_saw","Land_postel_panelak1","Land_postel_panelak2","Land_stul_kuch1","Land_vise","Land_workbench","Land_drevo_hromada","Land_KBud","Land_lampa_ind","Land_lampa_ind_zebr","Land_lampa_sidl","Land_lampa_sidl_2","Land_lampa_sidl_3","Land_lavicka_1","Land_lavicka_2","Land_lavicka_3","Land_lavicka_4","Land_nastenka2","Land_nastenka3","Land_Nasypka","Land_pletivo_wired","Land_pletivo_wired_branaL_civil","Land_pletivo_wired_branaP","Land_pletivo_wired_hole","Land_pletivo_wired_slope","Land_plot_green_brank_o","Land_plot_green_branka","Land_plot_green_cihlsloup","Land_plot_green_draty","Land_plot_green_vrat_l","Land_plot_green_vrat_o","Land_plot_green_vrat_r","Land_plot_green_vrata","Land_plot_rust_brank_o","Land_plot_rust_branka","Land_plot_rust_cihlsloup","Land_plot_rust_draty","Land_plot_rust_vrat_l","Land_plot_rust_vrat_o","Land_plot_rust_vrat_r","Land_plot_rust_vrata","Land_plot_vlnplech1","Land_plot_vlnplech2","Land_plot_zed_drevo_sloupek","Land_plot_zed_drevo1","Land_plot_zed_drevo2","Land_plot_zed_drevo3","Land_Stoh","Land_Zabradli_pruhovane_levykonec","Land_Zabradli_pruhovane_pravykonec","Land_Zabradli_pruhovane_stred","Land_Zabradli_pruhovane_stred_slope","Land_ACamp","Land_Camp","Land_CampEast","Land_Mash","Land_medical_tent","Land_medical_tent_frame","Land_Pristresek_mensi","Land_shower_tent"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgDestroy
{
	class BuildingHit
	{
		sound[] = {};
	};
};
class CfgVehicles
{
	class Land_VASICore;
	class Static;
	class House: Static
	{
		class DestructionEffects{};
	};
	class HouseNoDestruct: House{};
	class Land_brana02nodoor: House
	{
		scope = 2;
		model = "dz\buildings\brana02nodoor.p3d";
	};
	class Land_budova1: House
	{
		scope = 2;
		model = "dz\buildings\budova1.p3d";
	};
	class Land_budova2: House
	{
		scope = 2;
		model = "dz\buildings\budova2.p3d";
	};
	class Land_budova4_in: House
	{
		model = "dz\buildings\budova4_in.p3d";
		scope = 2;
		displayName = "Barracks 3";
		mapSize = 15.4;
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				initPhase = 1;
				animPeriod = 1;
				sound = "DoorWoodSmall";
				soundPosition = "doors1_action";
			};
			class doors2: doors1
			{
				sound = "DoorWoodSmall";
				soundPosition = "doors2_action";
			};
			class doors3: doors1
			{
				sound = "DoorWoodSmall";
				soundPosition = "doors3_action";
			};
			class doors4: doors1
			{
				sound = "DoorWoodSmall";
				soundPosition = "doors4_action";
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 2;
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
			class OpenDoors_2: OpenDoors_1
			{
				position = "doors2_action";
				condition = "((this animationSourcePhase 'doors2') >= 0.5)";
				statement = "(this animateSource ['doors2', 0])";
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = "doors2_action";
				condition = "((this animationSourcePhase 'doors2') < 0.5)";
				statement = "(this animateSource ['doors2', 1])";
			};
			class OpenDoors_3: OpenDoors_1
			{
				position = "doors3_action";
				condition = "((this animationSourcePhase 'doors3') >= 0.5)";
				statement = "(this animateSource ['doors3', 0])";
			};
			class CloseDoors_3: CloseDoors_1
			{
				position = "doors3_action";
				condition = "((this animationSourcePhase 'doors3') < 0.5)";
				statement = "(this animateSource ['doors3', 1])";
			};
			class OpenDoors_4: OpenDoors_1
			{
				position = "doors4_action";
				condition = "((this animationSourcePhase 'doors4') >= 0.5)";
				statement = "(this animateSource ['doors4', 0])";
			};
			class CloseDoors_4: CloseDoors_1
			{
				position = "doors4_action";
				condition = "((this animationSourcePhase 'doors4') < 0.5)";
				statement = "(this animateSource ['doors4', 1])";
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "OpenDoors_1";
		actionBegin2 = "OpenDoors_2";
		actionEnd2 = "OpenDoors_2";
		actionBegin3 = "OpenDoors_3";
		actionEnd3 = "OpenDoors_3";
		actionBegin4 = "OpenDoors_4";
		actionEnd4 = "OpenDoors_4";
		numberOfDoors = 4;
	};
	class Land_Garaz: HouseNoDestruct
	{
		scope = 2;
		model = "dz\buildings\garaz.p3d";
		displayName = "Garage";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "DoorMetalTwin";
				soundPosition = "doorstwin1_action";
			};
			class doorstwin2: doorstwin1
			{
				sound = "DoorMetalTwin";
				soundPosition = "doorstwin2_action";
			};
			class doorstwin3: doorstwin1
			{
				sound = "DoorMetalTwin";
				soundPosition = "doorstwin3_action";
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
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "CloseDoors_1";
		actionBegin2 = "OpenDoors_2";
		actionEnd2 = "CloseDoors_2";
		actionBegin3 = "OpenDoors_3";
		actionEnd3 = "CloseDoors_3";
	};
	class Land_Hangar_2: House
	{
		scope = 2;
		model = "dz\buildings\hangar_2.p3d";
		displayName = "Hangar 2";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
			class doors3
			{
				source = "user";
				initPhase = 0;
				animPeriod = 3;
			};
			class doors4: doors3{};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doorstwin1_action";
				radius = 4;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doorstwin1') >= 0.5)";
				statement = "(this animateSource ['doorstwin1',0])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "((this animationSourcePhase 'doorstwin1') < 0.5)";
				statement = "(this animateSource ['doorstwin1',1])";
			};
			class OpenDoors_2
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors3_action";
				radius = 3;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doors3') < 0.5)";
				statement = "(this animateSource ['doors3',1])";
			};
			class CloseDoors_2: OpenDoors_2_2
			{
				position = "doors3_action";
				condition = "((this animationSourcePhase 'doors3') >= 0.5)";
				statement = "(this animateSource ['doors3',0])";
			};
			class OpenDoors_3: OpenDoors_2
			{
				position = "doors4_action";
				condition = "((this animationSourcePhase 'doors4') < 0.5)";
				statement = "(this animateSource ['doors4',1])";
			};
			class CloseDoors_3: CloseDoors_2
			{
				position = "doors4_action";
				condition = "((this animationSourcePhase 'doors4') >= 0.5)";
				statement = "(this animateSource ['doors4',0])";
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "CloseDoors_1";
		actionBegin2 = "OpenDoors_2";
		actionEnd2 = "CloseDoors_2";
		actionBegin3 = "OpenDoors_3";
		actionEnd3 = "CloseDoors_3";
	};
	class Land_Hlidac_budka: House
	{
		scope = 2;
		displayName = "Line-keeper's box";
		model = "dz\buildings\Hlidac_budka.p3d";
		mapSize = 2;
		animated = 1;
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doors1') >= 0.5)";
				statement = "(this animateSource ['doors1',0])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "doors1_action";
				condition = "((this animationSourcePhase 'doors1') < 0.5)";
				statement = "(this animateSource ['doors1',1])";
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "CloseDoors_1";
	};
	class Land_hut06: House
	{
		scope = 2;
		model = "dz\buildings\hut06.p3d";
		displayName = "Hut";
	};
	class Land_kasna_new: House
	{
		scope = 2;
		displayName = "Fountain";
		model = "dz\buildings\kasna_new.p3d";
	};
	class Land_komin: House
	{
		scope = 2;
		displayName = "Chimney";
		model = "dz\buildings\komin.p3d";
		ladders[] = {{"start","end"}};
	};
	class Land_kulna: House
	{
		scope = 2;
		displayName = "Shed";
		model = "dz\buildings\kulna.p3d";
	};
	class Land_molo_drevo_bs: House
	{
		scope = 2;
		displayName = "Wooden pier (long)";
		model = "dz\buildings\molo_drevo_bs.p3d";
	};
	class Land_molo_drevo_end: Land_molo_drevo_bs
	{
		scope = 2;
		displayName = "Wooden pier (end)";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\molo_drevo_end.p3d";
	};
	class Land_newplot: House
	{
		scope = 2;
		displayName = "New plot 1";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\newplot.p3d";
	};
	class Land_newplot2: House
	{
		scope = 2;
		displayName = "New plot 2";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\newplot2.p3d";
	};
	class Land_posed: House
	{
		scope = 2;
		displayName = "Hunting tower";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\posed.p3d";
		ladders[] = {{"start","end"}};
	};
	class Land_psi_bouda: Land_molo_drevo_bs
	{
		scope = 2;
		displayName = "Doghouse";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\psi_bouda.p3d";
	};
	class Land_repair_center: House
	{
		scope = 2;
		displayName = "Repair center";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\repair_center.p3d";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class doorstwin2: doorstwin1{};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doorstwin1_action";
				radius = 3.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doorstwin1') >= 0.5)";
				statement = "(this animateSource ['doorstwin1',0])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "doorstwin1_action";
				condition = "((this animationSourcePhase 'doorstwin1') < 0.5)";
				statement = "(this animateSource ['doorstwin1',1])";
			};
			class OpenDoors_2: OpenDoors_1
			{
				position = "doorstwin2_action";
				condition = "((this animationSourcePhase 'doorstwin2') >= 0.5)";
				statement = "(this animateSource ['doorstwin2',0])";
			};
			class CloseDoors_2: CloseDoors_1
			{
				position = "doorstwin2_action";
				condition = "((this animationSourcePhase 'doorstwin2') < 0.5)";
				statement = "(this animateSource ['doorstwin2',1])";
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "CloseDoors_1";
		actionBegin2 = "OpenDoors_2";
		actionEnd2 = "CloseDoors_2";
	};
	class Land_sara_domek_zluty: House
	{
		scope = 2;
		displayName = "House yellow";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\sara_domek_zluty.p3d";
		animated = 1;
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
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
				condition = "((this animationSourcePhase 'doors1') >= 0.5)";
				statement = "(this animateSource ['doors1', 0])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "doors1_action";
				condition = "((this animationSourcePhase 'doors1') < 0.5)";
				statement = "(this animateSource ['doors1', 1])";
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "OpenDoors_1";
	};
	class Land_sara_hasic_zbroj: House
	{
		scope = 2;
		displayName = "Garage yellow";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\sara_hasic_zbroj.p3d";
	};
	class Land_SS_hangar: House
	{
		scope = 2;
		displayName = "Hangar";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\SS_hangar.p3d";
	};
	class Land_stodola_old_open: House
	{
		scope = 2;
		displayName = "Barn old open";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\stodola_old_open.p3d";
	};
	class Land_stodola_open: House
	{
		scope = 2;
		displayName = "Barn open";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\stodola_open.p3d";
	};
	class Land_telek1: House
	{
		scope = 2;
		displayName = "TV Tower";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\telek1.p3d";
		ladders[] = {{"start1","end1"},{"start2","end2"},{"start3","end3"}};
	};
	class Land_Tovarna2: House
	{
		scope = 2;
		displayName = "Factory";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\tovarna2.p3d";
		ladders[] = {{"start1","end1"},{"start3","end3"},{"start4","end4"},{"start5","end5"}};
	};
	class Land_trafostanica_velka_draty: House
	{
		scope = 2;
		displayName = "Electric wires transformer";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\trafostanica_velka_draty.p3d";
	};
	class Land_trafostanica_velka: House
	{
		scope = 2;
		displayName = "Transformer";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\trafostanica_velka.p3d";
	};
	class UndergroundStash: House
	{
		scope = 2;
		displayName = "Underground stash";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "\DZ\buildings\underground_stash.p3d";
	};
	class Land_vez: House
	{
		scope = 2;
		displayName = "Underground stash";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\vez.p3d";
		ladders[] = {{"start","end"}};
	};
	class Land_Vysilac_FM: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Buildings";
		model = "dz\buildings\Vysilac_FM.p3d";
		displayName = "Radio 1";
		ladders[] = {{"start","end"}};
		class Destruction
		{
			animations[] = {{"dz\buildings\rtm\vysilac_fm.rtm",0.5,3}};
		};
	};
	class Land_anvil: House
	{
		scope = 2;
		displayName = "Anvil";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\anvil.p3d";
	};
	class Land_case_bedroom_b: House
	{
		scope = 2;
		displayName = "Case bedroom";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\case_bedroom_b.p3d";
	};
	class Land_case_wall_unit_part_c: House
	{
		scope = 2;
		displayName = "Cabinet with shelves 1";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\case_wall_unit_part_c.p3d";
	};
	class Land_case_wall_unit_part_d: House
	{
		scope = 2;
		displayName = "Cabinet with shelves 2";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\case_wall_unit_part_d.p3d";
	};
	class Land_dhangar_brownskrin: House
	{
		scope = 2;
		displayName = "Brown cupboard";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\dhangar_brownskrin.p3d";
	};
	class Land_dkamna_bila: House
	{
		scope = 2;
		displayName = "Stove";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\dkamna_bila.p3d";
	};
	class Land_drill: House
	{
		scope = 2;
		displayName = "Drill";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\drill.p3d";
	};
	class Land_grinder: House
	{
		scope = 2;
		displayName = "Drill";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\grinder.p3d";
	};
	class Land_kitchen_table_a: House
	{
		scope = 2;
		displayName = "Kitchen table 1";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\kitchen_table_a.p3d";
	};
	class Land_metal_cutting_saw: House
	{
		scope = 2;
		displayName = "Metal cutting saw";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\metal_cutting_saw.p3d";
	};
	class Land_postel_panelak1: House
	{
		scope = 2;
		displayName = "Bed pannel 1";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\postel_panelak1.p3d";
	};
	class Land_postel_panelak2: House
	{
		scope = 2;
		displayName = "Bed pannel 2";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\postel_panelak2.p3d";
	};
	class Land_stul_kuch1: House
	{
		scope = 2;
		displayName = "Kitchen table 2";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\stul_kuch1.p3d";
	};
	class Land_vise: House
	{
		scope = 2;
		displayName = "Vise";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\vise.p3d";
	};
	class Land_workbench: House
	{
		scope = 2;
		displayName = "Workbench";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Furniture";
		model = "dz\buildings\furniture\workbench.p3d";
	};
	class Land_drevo_hromada: House
	{
		scope = 2;
		displayName = "Heap of firewood";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\drevo_hromada.p3d";
	};
	class Land_KBud: House
	{
		scope = 2;
		displayName = "Street toilet";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\KBud.p3d";
		animated = 1;
		destrType = "DestructTent";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 2.5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doors1') < 0.5)";
				statement = "(this animateSource ['doors1', 1])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "doors1_action";
				condition = "((this animationSourcePhase 'doors1') >= 0.5)";
				statement = "(this animateSource ['doors1', 0])";
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "OpenDoors_1";
	};
	class Land_lampa_ind: House
	{
		scope = 2;
		displayName = "Street lamp ind";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\lampa_ind.p3d";
	};
	class Land_lampa_ind_zebr: House
	{
		scope = 2;
		displayName = "Street lamp ind zebr";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\lampa_ind_zebr.p3d";
	};
	class Land_lampa_sidl: House
	{
		scope = 2;
		displayName = "Street lamp 1";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\lampa_sidl.p3d";
	};
	class Land_lampa_sidl_2: House
	{
		scope = 2;
		displayName = "Street lamp 2";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\lampa_sidl_2.p3d";
	};
	class Land_lampa_sidl_3: House
	{
		scope = 2;
		displayName = "Street lamp 3";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\lampa_sidl_3.p3d";
	};
	class Land_lavicka_1: House
	{
		scope = 2;
		displayName = "Bench 1";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\lavicka_1.p3d";
	};
	class Land_lavicka_2: House
	{
		scope = 2;
		displayName = "Bench 2";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\lavicka_2.p3d";
	};
	class Land_lavicka_3: House
	{
		scope = 2;
		displayName = "Bench 3";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\lavicka_3.p3d";
	};
	class Land_lavicka_4: House
	{
		scope = 2;
		displayName = "Bench 4";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\lavicka_4.p3d";
	};
	class Land_nastenka2: House
	{
		scope = 2;
		displayName = "Notice-board 1";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\nastenka2.p3d";
	};
	class Land_nastenka3: House
	{
		scope = 2;
		displayName = "Notice-board 2";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\nastenka3.p3d";
	};
	class Land_Nasypka: House
	{
		scope = 2;
		displayName = "Sand bunker";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\Nasypka.p3d";
		ladders[] = {{"start","end"}};
	};
	class Land_NavigLight: House
	{
		scope = 2;
		displayName = "Navigation light";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\NavigLight.p3d";
	};
	class Land_pletivo_wired: House
	{
		scope = 2;
		displayName = "Wire mesh fence";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\pletivo_wired.p3d";
	};
	class Land_pletivo_wired_branaL_civil: HouseNoDestruct
	{
		scope = 2;
		displayName = "Wire mesh fence gate left";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\pletivo_wired_branaL_civil.p3d";
		animated = 1;
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 5;
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
		};
	};
	class Land_pletivo_wired_branaP: Land_pletivo_wired_branaL_civil
	{
		scope = 2;
		displayName = "Wire mesh fence gate right";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\pletivo_wired_branaP.p3d";
	};
	class Land_pletivo_wired_hole: House
	{
		scope = 2;
		displayName = "Wire mesh fence";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\pletivo_wired_hole.p3d";
	};
	class Land_pletivo_wired_slope: House
	{
		scope = 2;
		displayName = "Wire mesh fence";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\pletivo_wired_slope.p3d";
	};
	class Land_plot_green_brank_o: House
	{
		scope = 2;
		displayName = "Wire mesh fence gate";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\plot_green_brank_o.p3d";
		animated = 1;
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
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
	class Land_plot_green_branka: House
	{
		scope = 2;
		displayName = "Wire mesh fence gate";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_green_branka.p3d";
		destrType = "DestructTree";
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 10;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doors1') < 0.5)";
				statement = "(this animateSource ['doors1',1])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "((this animationSourcePhase 'doors1') >= 0.5)";
				statement = "(this animateSource ['doors1',0])";
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "CloseDoors_1";
	};
	class Land_plot_green_cihlsloup: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\plot_green_cihlsloup.p3d";
	};
	class Land_plot_green_draty: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\plot_green_draty.p3d";
	};
	class Land_plot_green_vrat_l: HouseNoDestruct
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\plot_green_vrat_l.p3d";
		animated = 1;
		class AnimationSources
		{
			class doors1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
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
	class Land_plot_green_vrat_o: HouseNoDestruct
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\plot_green_vrat_o.p3d";
		animated = 1;
		class AnimationSources
		{
			class doorstwin1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
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
		};
	};
	class Land_plot_green_vrat_r: Land_plot_green_vrat_l
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\plot_green_vrat_r.p3d";
	};
	class Land_plot_green_vrata: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_green_vrata.p3d";
		destrType = "DestructTree";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "User";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 5;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doorstwin1') < 0.5)";
				statement = "(this animateSource ['doorstwin1',1])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "((this animationSourcePhase 'doorstwin1') >= 0.5)";
				statement = "(this animateSource ['doorstwin1',0])";
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "CloseDoors_1";
	};
	class Land_plot_rust_brank_o: Land_plot_green_vrat_l
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\plot_rust_brank_o.p3d";
	};
	class Land_plot_rust_branka: Land_plot_green_branka
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_rust_branka.p3d";
	};
	class Land_plot_rust_cihlsloup: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_rust_cihlsloup.p3d";
	};
	class Land_plot_rust_draty: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_rust_draty.p3d";
	};
	class Land_plot_rust_vrat_l: Land_plot_green_vrat_l
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\plot_rust_vrat_l.p3d";
	};
	class Land_plot_rust_vrat_o: Land_plot_green_vrat_o
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\plot_rust_vrat_o.p3d";
	};
	class Land_plot_rust_vrat_r: Land_plot_green_vrat_l
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "DZ\buildings\misc\plot_rust_vrat_r.p3d";
	};
	class Land_plot_rust_vrata: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_rust_vrata.p3d";
		class AnimationSources
		{
			class doorstwin1
			{
				source = "User";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "doors1_action";
				radius = 6;
				onlyForPlayer = 0;
				condition = "((this animationSourcePhase 'doorstwin1') < 0.5)";
				statement = "(this animateSource ['doorstwin1',1])";
			};
			class CloseDoors_1: OpenDoors_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				condition = "((this animationSourcePhase 'doorstwin1') >= 0.5)";
				statement = "(this animateSource ['doorstwin1',0])";
			};
		};
		actionBegin1 = "OpenDoors_1";
		actionEnd1 = "CloseDoors_1";
	};
	class Land_plot_vlnplech1: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_vlnplech1.p3d";
	};
	class Land_plot_vlnplech2: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_vlnplech2.p3d";
	};
	class Land_plot_zed_drevo1_branka: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_zed_drevo1_branka.p3d";
	};
	class Land_plot_zed_drevo_sloupek: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_zed_drevo_sloupek.p3d";
	};
	class Land_plot_zed_drevo1: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_zed_drevo1.p3d";
	};
	class Land_plot_zed_drevo2: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_zed_drevo2.p3d";
	};
	class Land_plot_zed_drevo3: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\plot_zed_drevo3.p3d";
	};
	class Land_pumpa: House
	{
		scope = 2;
		displayName = "Water pump";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\misc\pumpa.p3d";
		class UserActions
		{
			class DrinkWater
			{
				displayNameDefault = "$STR_DN_PUMP_DRINK";
				displayName = "$STR_DN_PUMP_DRINK";
				showWindow = 1;
				position = "action";
				radius = 2.5;
				onlyForPlayer = 0;
				hideOnUse = 1;
				condition = "true";
				statement = "_person playAction 'drinkWell';[_person,'RiverWater'] call player_fnc_processStomach;[_person,'You drink some water from the well','colorAction'] call fnc_playerMessage;";
			};
			class FillBottle
			{
				displayNameDefault = "$STR_DN_PUMP_FILL";
				displayName = "$STR_DN_PUMP_FILL";
				priority = 0.1;
				showWindow = 1;
				position = "action";
				radius = 2.5;
				onlyForPlayer = 0;
				hideOnUse = 1;
				condition = "(itemInHands _person) isKindOf 'BottleBase'";
				statement = "[this,(itemInHands _person),_person,_name] spawn player_fillBottle;";
			};
		};
	};
	class Land_runway_edgelight: House
	{
		scope = 2;
		displayName = "Runway Lights";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\runway_edgelight.p3d";
	};
	class Land_runway_PAPI: House
	{
		scope = 2;
		displayName = "Runway Lights";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\runway_PAPI.p3d";
	};
	class Land_runway_PAPI_2: House
	{
		scope = 2;
		displayName = "Runway Lights";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\runway_PAPI_2.p3d";
	};
	class Land_runway_PAPI_3: House
	{
		scope = 2;
		displayName = "Runway Lights";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\runway_PAPI_3.p3d";
	};
	class Land_runway_PAPI_4: House
	{
		scope = 2;
		displayName = "Runway Lights";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\runway_PAPI_4.p3d";
	};
	class Land_Stoh: House
	{
		scope = 2;
		displayName = "Haystack";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\Stoh.p3d";
	};
	class Land_Stoplight02: House
	{
		scope = 2;
		displayName = "Stoplight";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\stoplight02.p3d";
	};
	class Land_Zabradli_pruhovane_levykonec: House
	{
		scope = 2;
		displayName = "They snapped striped (Left)";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\Zabradli_pruhovane_levykonec.p3d";
	};
	class Land_Zabradli_pruhovane_pravykonec: House
	{
		scope = 2;
		displayName = "They snapped striped (Right)";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\Zabradli_pruhovane_pravykonec.p3d";
	};
	class Land_Zabradli_pruhovane_stred: House
	{
		scope = 2;
		displayName = "They snapped striped (Center)";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\Zabradli_pruhovane_stred.p3d";
	};
	class Land_Zabradli_pruhovane_stred_slope: House
	{
		scope = 2;
		displayName = "They snapped striped slope (Center)";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Misc\Zabradli_pruhovane_stred_slope.p3d";
	};
	class Land_ACamp: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		displayName = "Camping tent";
		model = "dz\buildings\Tents\ACamp.p3d";
		icon = "dz\buildings\Icons\i_ACamp_CA.paa";
		destrType = "DestructTent";
		vehicleClass = "Military";
		mapSize = 2.6;
		ccuracy = 1000;
		cost = 20;
		irTarget = 0;
		animated = 0;
	};
	class Land_Camp: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		displayName = "Tent";
		model = "dz\buildings\Tents\Camp.p3d";
		icon = "dz\buildings\Icons\i_Camp_CA.paa";
		destrType = "DestructTent";
		vehicleClass = "Military";
		mapSize = 6.4;
		accuracy = 1000;
		cost = 20;
		irTarget = 0;
		animated = 0;
	};
	class Land_CampEast: Land_Camp
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		displayName = "Tent (US)";
		model = "dz\buildings\Tents\CampEast.p3d";
		icon = "dz\buildings\Icons\i_CampEast_CA.paa";
	};
	class Land_Mash: Land_Camp
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		displayName = "Field Hospital";
		model = "dz\buildings\Tents\mash.p3d";
		icon = "dz\buildings\Icons\i_MASH_CA.paa";
		accuracy = 0.3;
		attendant = 1;
		mapSize = 6.4;
		supplyRadius = 9.3;
	};
	class Land_medical_tent: House
	{
		scope = 2;
		displayName = "Medical Tent";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Tents\medical_tent.p3d";
	};
	class Land_medical_tent_frame: House
	{
		scope = 2;
		displayName = "Medical Tent Frame";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Tents\medical_tent_frame.p3d";
	};
	class Land_Pristresek_mensi: House
	{
		scope = 2;
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		displayName = "Military Shed";
		model = "\DZ\buildings\tents\Pristresek_mensi.p3d";
	};
	class Land_shower_tent: House
	{
		scope = 2;
		displayName = "Shower tent";
		editorCategory = "DayZ";
		editorSubcategory = "DayZ_Misc";
		model = "dz\buildings\Tents\shower_tent.p3d";
	};
	class StreetLampOff: House{};
};
class CfgNonAIVehicles
{
	class StreetLamp
	{
		colorDiffuse[] = {0.9,0.8,0.6};
		colorAmbient[] = {0.02,0.02,0.02};
		radius = 37.5;
	};
};
class CfgSFX
{
	class Church
	{
		smallBell[] = {"dz\buildings\Sound\bell1",0.1,1};
		largeBell[] = {"dz\buildings\Sound\bell2",0.31622776,1};
	};
};
