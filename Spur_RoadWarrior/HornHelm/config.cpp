class CfgPatches
{
	class HornHelm
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Headgear",
			"DZ_Data",
			"DZ_Scripts"
		};
	};
	
};
class CfgVehicles
{	
	class Clothing_Base;
   	class HornHelm: Clothing_Base
	{	
		scope=2;
		displayName="Horned Helmet";
		descriptionShort="A Road ~Warriors hand made helmet";
		model="\Spur_RoadWarrior\HornHelm\HornHelm_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=0;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=10000;
		itemSize[]={4,3};
		absorbency=0;
		heatIsolation=0.80;
		noMask=1;
		headSelectionsToHide[]=
		{
			"Clipping_Welding_Mask"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_RoadWarrior\HornHelm\data\HornHelm_co.paa",
			"Spur_RoadWarrior\HornHelm\data\HornHelm_co.paa",
			"Spur_RoadWarrior\HornHelm\data\HornHelm_co.paa"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] = 
                    {
                        {
							1.0,
							
							{
								"Spur_RoadWarrior\HornHelm\data\HornHelm.rvmat"
							}
						},
						
                        {
							0.69999999,
							
							{
								"Spur_RoadWarrior\HornHelm\data\HornHelm.rvmat"
							}
						},
						
                        {
							0.5,
							
							{
								"Spur_RoadWarrior\HornHelm\data\HornHelm_damage.rvmat"
							}
						},
						
                        {
							0.30000001,
							
							{
								"Spur_RoadWarrior\HornHelm\data\HornHelm_damage.rvmat"
							}
						},
						
                        {
							0.0,
							
							{
								"Spur_RoadWarrior\HornHelm\data\HornHelm_destruct.rvmat"
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
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
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
				class Infected
				{
					class Health
					{
						damage=0.25;
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
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\Spur_RoadWarrior\HornHelm\HornHelm_m.p3d";
			female="\Spur_RoadWarrior\HornHelm\HornHelm_f.p3d";
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
};