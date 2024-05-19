class CfgPatches
{
	class ScrapSword
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ScrapSword: Inventory_Base
	{
		scope=2;
		displayName="Scrap Sword";
		descriptionShort="A sword made from scrap";
		model="\Spur_RoadWarrior\ScrapSword\ScrapSword.p3d";
		repairableWithKits[]={4};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		RestrainUnlockType=1;
		rotationFlags=12;
		itemSize[]={2,8};
		weight=1800;
		itemBehaviour=2;
		lootTag[]=
		{
			"Historical"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Axe"
		};
		openItemSpillRange[]={20,40};
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
								"Spur_RoadWarrior\ScrapSword\data\ScrapSword.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_RoadWarrior\ScrapSword\data\ScrapSword.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Spur_RoadWarrior\ScrapSword\data\ScrapSword.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_RoadWarrior\ScrapSword\data\ScrapSword.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Spur_RoadWarrior\ScrapSword\data\ScrapSword.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="sword";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSword";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeSword_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeSword_Heavy";
				range=3.7;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
				};
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
			};
		};
	};
};