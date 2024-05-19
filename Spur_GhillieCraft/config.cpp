class CfgPatches
{
	class Spur_GhillieCraft
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			#ifdef WRDG_DOGTAGS
			"Dogtags_Characters",
			#endif 
			"DZ_Gear_Consumables",
			"DZ_Characters",
			"DZ_Characters_Backpacks"			
		};
	};
};
class CfgMods
{
	class GhillieCraft
	{
		dir = "Spur_GhillieCraft";
		picture = "Spur_GhillieCraft/GhillieCraft.edds";
		name = "Spur_GhillieCraft";
		author = "Spurgle";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class imageSets
            {
                files[]=
                {
                    "WRDG/Dogtags/Defines",
					"Spur_GhillieCraft/gui/imagesets/Spur_Ghillie_slot.imageset"
                };
            };
			class worldScriptModule
			{
				value = "";
				files[]=
				{
					"WRDG/Dogtags/Defines",
					"Spur_GhillieCraft/scripts/4_world"
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_Ghillie
	{
		name="Ghillie";
		displayName="Ghillie";
		ghostIcon="set:Spur_Ghillie_slot image:Ghillie";
	};
};
class CfgVehicles
{
	class Man;
	class Clothing;
	class Inventory_Base;
	class SurvivorBase: Man
	{
		attachments[]=
		{
			 
			"Head",
			"Shoulder",
			"Melee",
			"Headgear",
			"Mask",
			"Eyewear",
			"Hands",
			"LeftHand",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet",
			"Splint_Right",
			"Ghillie"
			#ifdef WRDG_DOGTAGS
			,"Dogtag"
			#endif
		};
		class InventoryEquipment
		{
			
			playerSlots[]=
			{
				
				"Slot_Shoulder",
				"Slot_Melee",
				"Slot_Vest",
				"Slot_Body",
				"Slot_Hips",
				"Slot_Legs",
				"Slot_Back",
				"Slot_Headgear",
				"Slot_Mask",
				"Slot_Eyewear",
				"Slot_Gloves",
				"Slot_Feet",
				"Slot_Armband",
				"Slot_Ghillie"
				#ifdef WRDG_DOGTAGS
				,"Slot_Dogtag"
				#endif 
			};
		};
	};
	class GhillieHood_ColorBase;
	class GhillieTop_ColorBase: Clothing
	{
		inventorySlot[]=
		{
			"Ghillie"
		};
	};
	class GhillieBushrag_ColorBase: Clothing
	{
		inventorySlot[]=
		{
			"Ghillie"
		};
	};
	class GhillieSuit_ColorBase: Clothing
	{
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Ghillie"
		};
	};
	class GhillieAtt_ColorBase: Inventory_Base
	{
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
	};
	class CamoNetStrip: Inventory_Base
	{
		scope=2;
		displayName="CamoNet strips";
		descriptionShort="Strips of camo netting for making ghillie suits";
		model="\DZ\gear\crafting\sackcloth_rag.p3d";
		weight=50;
		itemSize[]={1,3};
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		rotationFlags=17;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camonet_strips_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\camonet_east_nowind.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\weaponcamo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\weaponcamo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\weaponcamo_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\weaponcamo_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\weaponcamo_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class GhillieAtt_CamoNet: GhillieAtt_ColorBase
	{
		scope=2;
		displayName="Camo net gun wrap";
		descriptionShort="A simple gun wrap made from a camo net";
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camo_gunwrap_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\camonet_east_nowind.rvmat"
		};
	};
	class GhillieBushrag_CamoNet: GhillieBushrag_ColorBase
	{
		scope=2;
		displayName="Camo net Ghillie bushrag";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\camonet_east_nowind.rvmat",
			"dz\gear\camping\data\camonet_east_nowind.rvmat",
			"dz\gear\camping\data\camonet_east_nowind.rvmat"
		};
	};
	class GhillieTop_CamoNet: GhillieTop_ColorBase
	{
		scope=2;
		displayName="Camo net Ghillie top";
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\camonet_east_nowind.rvmat",
			"dz\gear\camping\data\camonet_east_nowind.rvmat",
			"dz\gear\camping\data\camonet_east_nowind.rvmat"
		};
	};
	class GhillieSuit_CamoNet: GhillieSuit_ColorBase
	{
		scope=2;
		displayName="Camo net Ghillie Suit";
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\camonet_east_nowind.rvmat",
			"dz\gear\camping\data\camonet_east_nowind.rvmat",
			"dz\gear\camping\data\camonet_east_nowind.rvmat"
		};
	};
	class GhillieHood_CamoNet: GhillieHood_ColorBase
	{
		scope=2;
		displayName="Camo net Ghillie hood";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_ghillie_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\camonet_east_nowind.rvmat",
			"dz\gear\camping\data\camonet_east_nowind.rvmat",
			"dz\gear\camping\data\camonet_east_nowind.rvmat"
		};
	};
	//winter
	class FabricStrip: Inventory_Base
	{
		scope=2;
		displayName="Fabric strips";
		descriptionShort="Strips of camo netting for making ghillie suits";
		model="\DZ\gear\crafting\sackcloth_rag.p3d";
		weight=50;
		itemSize[]={1,3};
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		rotationFlags=17;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\fabric_strips_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\attachments\data\weaponcamo.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\weaponcamo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\weaponcamo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\weaponcamo_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\weaponcamo_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\weaponcamo_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class GhillieAtt_CamoNet_Winter: GhillieAtt_ColorBase
	{
		scope=2;
		displayName="Winter Camo gun wrap";
		descriptionShort="A simple gun wrap made from a camo net";
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camo_winter_gunwrap_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat"
		};
	};
	class GhillieBushrag_CamoNet_Winter: GhillieBushrag_ColorBase
	{
		scope=2;
		displayName="Winter Camo Ghillie bushrag";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat",
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat",
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat"
		};
	};
	class GhillieTop_CamoNet_Winter: GhillieTop_ColorBase
	{
		scope=2;
		displayName="Winter Camo Ghillie top";
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat",
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat",
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat"
		};
	};
	class GhillieSuit_CamoNet_Winter: GhillieSuit_ColorBase
	{
		scope=2;
		displayName="Winter Camo Ghillie Suit";
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat",
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat",
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat"
		};
	};
	class GhillieHood_CamoNet_Winter: GhillieHood_ColorBase
	{
		scope=2;
		displayName="Winter Camo Ghillie hood";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa",
			"Spur_GhillieCraft\data\camonet_winter_ghillie_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat",
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat",
			"Spur_GhillieCraft\data\GhillieNetWinter.rvmat"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyBow;
	class ProxyBow_DZ: ProxyBow
	{
		model="\dz\Characters\Proxies\bow_DZ.p3d";
		inventorySlot="Ghillie";
	};	
};

