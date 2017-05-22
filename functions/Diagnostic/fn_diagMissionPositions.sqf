/*
	Author: Karel Moricky

	Description:
	Displays positions of units from all missions

	Parameter(s):
	0: CONFIG - config path which will be scanned (default: configfile >> "CfgMissions")
	1: (Optional): BOOL - when true, displays all units, otherwise just player positions (default: false)
	2: (Optional): BOOL - when true, scan will perceive the main folder as campaign (required when param 0 is direct path to campaign)

	Returns:
	BOOL
*/

#define ICON_SIZE	26
#define DELETE_CONFIG	diag_mergeconfigfile ["O:\arma3\DZ\functions\Diagnostic\fn_diagMissionPositions_delete.cfg"];

startloadingscreen [""];

_cfgStart = [_this,0,configfile >> "CfgMissions",[configfile]] call bis_fnc_param;
_showAll = [_this,1,false,[false]] call bis_fnc_param;
_isCampaign = [_this,2,false,[false]] call bis_fnc_param;

_campaignDirectory = if (_isCampaign) then {"*"} else {""};
												
_playerIcon = gettext (configfile >> "cfgingameui" >> "islandmap" >> "iconPlayer");
_playerColor = getarray (configfile >> "cfgingameui" >> "islandmap" >> "colorMe");
_wpIcon = gettext (configfile >> "RscDisplayArcadeMap" >> "controlsBackground" >> "CA_Map" >> "Waypoint" >> "icon");
_wpColor = getarray (configfile >> "RscDisplayArcadeMap" >> "controlsBackground" >> "CA_Map" >> "Waypoint" >> "color");
_wpLineColor = getarray (configfile >> "CfgInGameUI" >> "IslandMap" >> "colorActiveMission");

_charDot = toarray "." select 0;


_fn_posLimit = {
	_posX = _this select 0;
	_posY = _this select 1;
	if (_posX < _posXmin || _posXmin == 0) then {_posXmin = _posX;};
	if (_posX > _posXmax || _posXmax == 0) then {_posXmax = _posX;};

	if (_posY < _posYmin || _posYmin == 0) then {_posYmin = _posY;};
	if (_posY > _posYmax || _posYmax == 0) then {_posYmax = _posY;};

	_listX set [count _listX,_posX];
	_listY set [count _listY,_posY];
};


