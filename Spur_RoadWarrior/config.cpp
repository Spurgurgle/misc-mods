class CfgPatches
{
	class Spur_RoadWarrior
	{
		units[]={};
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
	class Spur_RoadWarrior
	{
		dir="Spur_RoadWarrior";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Spur_RoadWarrior";
		credits="Spurgle";
		author="Spurgle";
		authorID="76561198120653239";
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
					"Spur_RoadWarrior/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Spur_RoadWarrior/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Spur_RoadWarrior/scripts/5_mission"
				};
			};
		};
	};
};