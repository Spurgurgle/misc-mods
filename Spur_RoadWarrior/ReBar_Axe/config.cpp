class CfgPatches
{
	class ReBar_Axe
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
	class ReBar_Axe: Inventory_Base
	{
		scope=2;
		displayName="ReBar_Axe";
		descriptionShort="A make shift axe";
		model="\Spur_RoadWarrior\ReBar_Axe\ReBar_Axe.p3d";
		repairableWithKits[]={4};
		repairCosts[]={20};
		rotationFlags=12;
		weight=2000;
		itemSize[]={2,6};
		itemBehaviour=2;
		fragility=0.0099999998;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		lootCategory="Tools";
		lootTag[]=
		{
			"Work",
			"Forester",
			"Camping"
		};
		dismantle_action_type=74;
		openItemSpillRange[]={20,40};
		itemInfo[]=
		{
			"Axe"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe_co.paa"
		};
		isMeleeWeapon=1;
		suicideAnim="woodaxe";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeAxe";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeAxe_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeAxe_Heavy";
				range=3.7;
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
							1.0,
							
							{
								"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe_destruct.rvmat"
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
	class ReBar_Hatchet: Inventory_Base
	{
		scope=2;
		displayName="ReBar_Hatchet";
		descriptionShort="A make shift hatchet";
		model="\Spur_RoadWarrior\ReBar_Axe\ReBar_Hatchet.p3d";
		build_action_type=10;
		dismantle_action_type=74;
		repairableWithKits[]={4};
		repairCosts[]={18};
		rotationFlags=17;
		weight=1133;
		itemSize[]={2,4};
		fragility=0.0099999998;
		inventorySlot[]=
		{
			""
		};
		lootCategory="Tools";
		lootTag[]=
		{
			"Work",
			"Forester",
			"Camping"
		};
		itemInfo[]=
		{
			"Axe"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe_co.paa"
		};
		openItemSpillRange[]={20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"Spur_RoadWarrior\ReBar_Axe\data\ReBar_Axe_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="woodaxe";
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
				class WoodHammer_SoundSet
				{
					soundSet="WoodHammer_SoundSet";
					id=11161;
				};
			};
		};
	};
};