scriptName "DZ\ModulesCore\modules_e\oo\data\scripts\functions\createObject.sqf";
/*
	File: createObject.sqf
	Author: Joris-Jan van 't Land

	Description:
	Instantiating an object of a certain class

	Parameter(s):
	_this select 0: String (class name)
	_this select 1: Array (optional parameters for constructor)
	
	Returns:
	created Logic object: Object
*/

//Parameter validation
if (isNil "_this") exitWith {debugLog "Log: [createObject] no parameters defined!"; objNull};
if ((typeName _this) != (typeName [])) exitWith {debugLog "Log: [createObject] list of parameters must be an Array!"; objNull};
if ((count _this) < 1) exitWith {debugLog ("Log: [createObject] " + (count _this) + " parameters provided, 1 expected!"); objNull};

private ["_className"];
_className = _this select 0;
if ((typeName _className) != (typeName "")) exitWith {debugLog "Log: [createObject] class name (0) must be a String!"; objNull};

private ["_class", "_return"];
_class = configFile >> "CfgOO" >> _className;

if ((configName _class) == "") exitWith {debugLog "Log: [createObject] class does not exist in CfgOO!"; objNull};

//See if a group was already created for the logics (to prevent a large number of groups)
if (isNil "BIS_OO_grpLogic") then 
{
	createCenter sideLogic;
	BIS_OO_grpLogic = createGroup sideLogic;
};

private ["_logic"];
_logic = BIS_OO_grpLogic createUnit ["Logic", [1, 1, 1], [], 0, "NONE"];
_logic enableSimulation false;
_return = _logic;

private ["_constructorParams"];
//TODO: only provide the object to the constructor when its constructor requires it
_constructorParams = _return; //Constructors will sometimes need to know their own objects
if ((count _this) > 1) then 
{
	_constructorParams = [_constructorParams];
	if ((typeName (_this select 1)) == (typeName [])) then 
	{
		_constructorParams = _constructorParams + (_this select 1);
	} 
	else 
	{
		_constructorParams = _constructorParams + [_this select 1];
	};
};

private ["_attributes"];
_attributes = _class >> "Attributes";

if ((configName _attributes) != "") then 
{
	//Initialize all attributes
	for "_i" from 0 to ((count _attributes) - 1) do 
	{
		private ["_attribute", "_attribName", "_attribDefault", "_defaultValue", "_attribType"];
		_attribute = _attributes select _i;
		
		_attribName = configName _attribute;
		if ((typeName _attribName) != (typeName "")) exitWith {debugLog "Log: [createObject] attribute name should be a String!"; _return = objNull};
		if (_attribName == "") exitWith {debugLog "Log: [createObject] attribute name cannot be empty!"; _return = objNull};
		
		_attribType = getText (_attribute >> "type");
		if ((typeName _attribType) != (typeName "")) exitWith {debugLog "Log: [createObject] attribute type should be a String!"; _return = objNull};
		if (!(_attribType in ["SCALAR", "STRING", "BOOL", "ARRAY", "OBJECT", "CONFIG", "GROUP", "TASK", "SIDE"])) exitWith {debugLog "Log: [createObject] attribute type should be one of SCALAR, STRING, BOOL, ARRAY, OBJECT, CONFIG or GROUP!"; _return = objNull};
		
		_attribDefault = _attribute >> "defaultValue";
		if ((configName _attribDefault) == "") then 
		{
			switch (_attribType) do 
			{
				case "SCALAR": {_defaultValue = 0};
				case "STRING": {_defaultValue = ""};
				case "BOOL": {_defaultValue = false};
				case "ARRAY": {_defaultValue = []};
				case "OBJECT": {_defaultValue = objNull};
				case "CONFIG": {_defaultValue = configFile};
				case "GROUP": {_defaultValue = grpNull};
				case "TASK": {_defaultValue = taskNull};
				case "SIDE": {_defaultValue = sideLogic};
				default {_defaultValue = -1}; //This default case should never be reached
			};
		} 
		else 
		{
			switch (_attribType) do 
			{
				case "SCALAR": {_defaultValue = getNumber _attribDefault};
				case "STRING": {_defaultValue = getText _attribDefault};
				case "BOOL": 
				{
					private ["_defaultBool"];
					_defaultBool = getText _attribDefault;
					if (_defaultBool == "true") then {_defaultValue = true} else {_defaultValue = false};
				};
				case "ARRAY": {_defaultValue = getArray _attribDefault};
				default {_defaultValue = -1};
			};
		};
		
		_logic setVariable [_attribName, _defaultValue];
	};
};

//Call the class' constructor automatically (if it exists)
//Constructors should always return a Bool
if (!(isNil {"BIS_OO_" + _className + "_" + _className})) then 
{
	call (compile ("_constructorParams call BIS_OO_" + _className + "_" + _className));
};

debugLog ("Log: [createObject] created instance of class: " + _className);

_return