class CfgPatches
{
	class Spur_CyborgArms
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Tops",
			//"Windstrideclothing",
			"Medium_Sleeves_Shirt"
		};
	};
};
class CfgMods
{
	class Spur_CyborgArms
	{
		dir="Spur_CyborgArms";
		name="Spur_CyborgArms";
		credits="Spurgle";
		author="Spurgle";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Spur_CyborgArms/scripts/4_world"
				};
			};
		};
	};
};
class cfgVehicles
{
	class Clothing;
	class Spur_CyborgArms_Base: Clothing
	{
		displayName="";
		descriptionShort="";
		model="Spur_CyborgArms\Spur_CyborgArms_g.p3d";
		class ClothingTypes
		{
			male="Spur_CyborgArms\Spur_CyborgArms_m.p3d";
			female="Spur_CyborgArms\Spur_CyborgArms_f.p3d";
		};
		inventorySlot[]=
		{
			"Gloves"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body",
			"Gloves"
		};
		rotationFlags=12;
		weight=3800;
		itemSize[]={4,2};
		itemsCargoSize[]={0,0};
		quickBarBonus=1;
		varWetMax=0.1;
		heatIsolation=0.2;
		repairableWithKits[]={8};
		repairCosts[]={33};
		simpleHiddenSelections[] = 
		{
			"CamoTorso",
			"CyborgLeftTorso",
			"FleshLeftTorso",
			"CyborgRightTorso",
			"FleshRightTorso",
			"CyborgLeftHand",
			"CyborgRightHand",
			"FleshLeftHand",
			"FleshRightHand",
			"CyborgLeftArm",
			"CyborgRightArm",
			"FleshLeftArm",
			"FleshRightArm"
		};
		hiddenSelections[]=
		{
			"camoArms",
			"camoHands",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_CyborgArms\data\Spur_CyborgArms_co.paa",
			"Spur_CyborgArms\data\Spur_CyborgHands_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Spur_CyborgArms\data\Spur_CyborgArms.rvmat",
								"Spur_CyborgArms\data\Spur_CyborgHands.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"Spur_CyborgArms\data\Spur_CyborgArms.rvmat",
								"Spur_CyborgArms\data\Spur_CyborgHands.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Spur_CyborgArms\data\Spur_CyborgArms_damage.rvmat",
								"Spur_CyborgArms\data\Spur_CyborgHands_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"Spur_CyborgArms\data\Spur_CyborgArms_damage.rvmat",
								"Spur_CyborgArms\data\Spur_CyborgHands_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Spur_CyborgArms\data\Spur_CyborgArms_destruct.rvmat",
								"Spur_CyborgArms\data\Spur_CyborgHands_destruct.rvmat"
								
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.7;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.7;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.7;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.7;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.7;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.7;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.8;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class Spur_CyborgArms_Pair : Spur_CyborgArms_Base 
	{
		scope=2;
		displayName="A Pair of Cyborg arms";
		descriptionShort="Body mods for the 2070 fun time feel";
	};
	
	class Spur_CyborgArms_Left : Spur_CyborgArms_Base 
	{
		scope=2;
		displayName="A left Cyborg arms";
		descriptionShort="Body mods for the 2070 fun time feel";
	};
	
	class Spur_CyborgArms_Right : Spur_CyborgArms_Base 
	{
		scope=2;
		displayName="A right Cyborg arms";
		descriptionShort="Body mods for the 2070 fun time feel";
	};
	class TShirt_ColorBase: Clothing
	{
		simpleHiddenSelections[] = {"personality"};
	};
	
	//for windstrides top
	class Medium_Sleeves_Shirt: Clothing
	{
		simpleHiddenSelections[] = {"personality"};
	};
};