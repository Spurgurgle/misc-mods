class CfgMods 
{
	class BetterWhetStone
	{
		dir = "BetterWhetStone";
		picture = "BetterWhetStone\Whetstone.edds";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "BetterWhetStone";
		credits = "";
		author = "Spurgle";
		authorID = "0";
		version = 1.1;
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};	
		class defs 
		{
			class worldScriptModule 
			{
				value = "";
				files[] = {"BetterWhetStone\Scripts\4_World"};
			};
		};
	};
};
class cfgPatches
{
	class BetterWhetStone
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Whetstone: Inventory_Base
	{
		varQuantityInit=300;
		varQuantityMin=0;
		varQuantityMax=300;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
	};
	class MakeShift_Whetstone: Whetstone
	{
		scope=2;
		displayName="MakeShift Whetstone";
		descriptionShort="$STR_CfgVehicles_Whetstone1";
		model="\dz\gear\tools\whetstone.p3d";
		animClass="Knife";
		rotationFlags=34;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		weight=200;
		itemSize[]={1,2};
		repairKitType=4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\whetstone.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\whetstone.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\whetstone_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\whetstone_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\whetstone_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Stitch
				{
					soundSet="StitchUpSelf_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="sewingkit_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};