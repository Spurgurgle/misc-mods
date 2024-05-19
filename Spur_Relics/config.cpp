class CfgPatches
{
	class Spur_Relics
	{
		units[]=
		{
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class Spur_Relics
	{
		dir="Spur_Relics";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Spur_Relics";
		credits="Spurgle";
		author="Spurgle";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Spur_Relics/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Spur_Relics/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Spur_Relics/scripts/5_mission"
				};
			};
		};
	};
};