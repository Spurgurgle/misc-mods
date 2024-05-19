class CfgPatches
{
	class Spur_FoldingShovel
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Tools"  
		};
	};
};
class CfgMods
{
	class Spur_FoldingShovel
	{
		dir="Spur_FoldingShovel";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Spur_FoldingShovel";
		credits=""; 
		author="";
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
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Spur_FoldingShovel/scripts/4_world"
				};
			};
		};
	};
};
class CfgVehicles
{
	class FieldShovel;
	class Spur_FieldShovelPlus: FieldShovel
	{
		scope=2;
		displayName="Field Shovel";
		descriptionShort="A shovel that fits in your bag";
	};
	class Inventory_Base;
	class Spur_FoldingShovel: Inventory_Base
	{
		scope=2;
		displayName="Folding Shovel";
		descriptionShort="A Shovel that folds to fit better in your bag";
		model="\Spur_FoldingShovel\Spur_FoldingShovel.p3d";
		rotationFlags=17;
		suicideAnim="woodaxe";
		weight=2500;
		itemSize[]={2,5};
		fragility=0.0080000004;
		build_action_type=4;
		dismantle_action_type=4;
		openItemSpillRange[]={30,60};
		class AnimationSources
		{
			class fold
			{
				source="user";
				initPhase=0;
				animPeriod=1.5;
			};
			
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Spur_FoldingShovel\data\Spur_FoldingShovel.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_FoldingShovel\data\Spur_FoldingShovel.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Spur_FoldingShovel\data\Spur_FoldingShovel_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_FoldingShovel\data\Spur_FoldingShovel_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Spur_FoldingShovel\data\Spur_FoldingShovel_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeHatchet";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeHatchet_Heavy";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeHatchet_Heavy";
				range=3.3;
			};
		};
		isMeleeWeapon=1;
		class Horticulture
		{
			ToolAnim="DIGGINGSHOVEL";
			DiggingTimeToComplete=6;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpShovel_Light
				{
					soundSet="pickUpShovelLight_SoundSet";
					id=796;
				};
				class pickUpShovel
				{
					soundSet="pickUpShovel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="shovel_drop_SoundSet";
					id=898;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
			};
		};
	};
	class Spur_FoldingShovel_Folded: Spur_FoldingShovel
	{
		scope=2;
		model="\Spur_FoldingShovel\Spur_FoldingShovel.p3d";
		itemSize[]={2,2};
		rotationFlags=8;
		class AnimationSources
		{
			class fold
			{
				source="user";
				initPhase=1;
				animPeriod=1.5;
			};
			
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBrassKnuckles";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeBrassKnuckles_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeBrassKnuckles_Heavy";
				range=2.8;
			};
		};
	};
};