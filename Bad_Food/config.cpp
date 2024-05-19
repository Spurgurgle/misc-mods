class CfgMods 
{
	class Bad_Food
	{
		dir = "Bad_Food";
		picture = "Bad_Food\Dead_Rat\Dead_Rat.edds";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Bad_Food";
		credits = "Spurgle yoluko86";
		author = "Spurgle";
		authorID = "0";
		version = 1.0;
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};	
		class defs 
		{
			class worldScriptModule 
			{
				value = "";
				files[] = {"Bad_Food\Scripts\4_World"};
			};
		};
	};
};
class CfgPatches
{
	class Bad_Food 
	{
		units[]=
		{
			"Dead_Rat_Skinned",
			"Dead_Rat_Op_Skinned",
			"Dead_Rat"
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Food",
			"DZ_Gear_Drinks"
			
		};
	};
};
class BaseFoodStageTransitions;
class MeatStageTransitions;
class FruitStageTransitions;
class AnimalCorpsesStageTransitions;
class MushroomsStageTransitions;
class NotCookable;
class FoodAnimationSources;
class NutritionModifiers;
class cfgVehicles
{
	class Inventory_Base; 
	class Edible_Base; 
	class Dead_Rat: Edible_Base
	{
		scope=2;
		displayName="Dead Rat";
		descriptionShort="A dead rat";
		model="Bad_Food\Dead_Rat\Dead_Rat.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={3,1};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]=
		{
			
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"cs_raw"			
		};
		hiddenSelectionsTextures[]=
		{
			"Bad_Food\Dead_Rat\data\fur_raw.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"Bad_Food\Dead_Rat\data\rat_raw.rvmat",
			"",
			"",
			"",
			"",
			"Bad_Food\Dead_Rat\data\rat_rotten.rvmat"
		};
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
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};	
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="Dead_Rat_Skinned";
				count=1;
				quantityMinMaxCoef[]={0.5,1};
			};
		};
	};
	class Dead_Rat_OP: Edible_Base
	{
		scope=2;
		displayName="Dead Rat";
		descriptionShort="A dead rat";
		model="Bad_Food\Dead_Rat\Dead_Rat_Op.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={4,1};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]=
		{
			
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"cs_raw"			
		};
		hiddenSelectionsTextures[]=
		{
			"Bad_Food\Dead_Rat\data\fur_raw.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"Bad_Food\Dead_Rat\data\rat_raw.rvmat",
			"",
			"",
			"",
			"",
			"Bad_Food\Dead_Rat\data\rat_rotten.rvmat"
		};
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
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,800,360,184,1,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						1,
						200,
						360,
						30,
						1,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,600,222,129,1};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,560,160,150,1};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,390,130,180,1};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,180,40,50,1,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="Dead_Rat_Op_Skinned";
				count=1;
				quantityMinMaxCoef[]={0.5,1};
			};
		};
	};
	class Dead_Frog: Edible_Base
	{
		scope=2;
		displayName="Dead Frog";
		descriptionShort="A dead frog";
		model="Bad_Food\Dead_Frog\Dead_Frog.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={3,1};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]=
		{

		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"cs_raw"			
		};
		hiddenSelectionsTextures[]=
		{
			"Bad_Food\Dead_Frog\data\frog.paa",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"Bad_Food\Dead_Frog\data\dead_frog_gloss.rvmat",
			"",
			"",
			"",
			"",
			"DZ\gear\food\data\zucchini_rotten.rvmat"		
		};
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
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};	
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="Dead_Frog_Skinned";
				count=1;
				quantityMinMaxCoef[]={0.5,1};
			};
		};
	};  	
	class Dead_Rat_Skinned: Edible_Base
	{
		scope=2;
		displayName="Dead Rat";
		descriptionShort="A dead rat";
		model="Bad_Food\Dead_Rat\Dead_Rat_Skinned.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={3,1};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"cs_raw"			
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_leg_raw_CO.paa",
			"dz\gear\food\data\meat_leg_baked_CO.paa",
			"dz\gear\food\data\meat_leg_baked_CO.paa",
			"dz\gear\food\data\meat_leg_dried_CO.paa",
			"dz\gear\food\data\meat_leg_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_leg_raw.rvmat",
			"dz\gear\food\data\meat_leg_baked.rvmat",
			"dz\gear\food\data\meat_leg_boiled.rvmat",
			"dz\gear\food\data\meat_leg_dried.rvmat",
			"dz\gear\food\data\meat_leg_burnt.rvmat",
			"dz\gear\food\data\meat_leg_rotten.rvmat"		
		};
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
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};	
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Dead_Rat_OP_Skinned: Edible_Base
	{
		scope=2;
		displayName="Dead Rat";
		descriptionShort="A dead rat";
		model="Bad_Food\Dead_Rat\Dead_Rat_Op_Skinned.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={4,1};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"cs_raw"			
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_leg_raw_CO.paa",
			"dz\gear\food\data\meat_leg_baked_CO.paa",
			"dz\gear\food\data\meat_leg_baked_CO.paa",
			"dz\gear\food\data\meat_leg_dried_CO.paa",
			"dz\gear\food\data\meat_leg_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_leg_raw.rvmat",
			"dz\gear\food\data\meat_leg_baked.rvmat",
			"dz\gear\food\data\meat_leg_boiled.rvmat",
			"dz\gear\food\data\meat_leg_dried.rvmat",
			"dz\gear\food\data\meat_leg_burnt.rvmat",
			"dz\gear\food\data\meat_leg_rotten.rvmat"		
		};
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
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,800,360,184,1,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						1,
						200,
						360,
						30,
						1,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,600,222,129,1};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,560,160,150,1};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,390,130,180,1};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,180,40,50,1,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Dead_Frog_Skinned: Edible_Base
	{
		scope=2;
		displayName="Dead Frog";
		descriptionShort="A dead frog";
		model="Bad_Food\Dead_Frog\Dead_Frog_Skinned.p3d";
		rotationFlags=0;
		weight=1000;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={3,1};
		absorbency=0.30000001;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFist";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFist_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFist_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"cs_raw"			
		};
		hiddenSelectionsTextures[]=
		{
			"Bad_Food\Dead_Frog\data\frog_skinned.paa",
			"Bad_Food\Dead_Frog\data\frog_boiled.paa",
			"Bad_Food\Dead_Frog\data\frog_cooked.paa",
			"Bad_Food\Dead_Frog\data\frog_dried_CO.paa",
			"Bad_Food\Dead_Frog\data\frog_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Bad_Food\Dead_Frog\data\dead_frog_gloss.rvmat",
			"Bad_Food\Dead_Frog\data\dead_frog_gloss.rvmat",
			"Bad_Food\Dead_Frog\data\dead_frog_gloss.rvmat",
			"Bad_Food\Dead_Frog\data\dead_frog_gloss.rvmat",
			"Bad_Food\Dead_Frog\data\dead_frog_gloss.rvmat",
			"DZ\gear\food\data\lard_damage.rvmat"		
		};
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
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,110,75,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						2,
						82.5,
						37.5,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,192.5,56.25,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,137.5,75,1,0};
					cooking_properties[]={70,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,110,7.5,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,82.5,18.75,1,0,16};
					cooking_properties[]={100,30};
				};	
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class BoxCerealCrunchin;
	class Dog_Biscuits: BoxCerealCrunchin
	{
		scope=2;
		displayName="Badigree Dog Biscuits";
		descriptionShort="Dry meaty biscuits. Any food will do if you hungry enough";
		model="\dz\gear\food\BoxCereal.p3d";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bad_Food\Data\dog_Biscuits_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=399;
			water=1;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class BakedBeansCan;
	class HerringCan: BakedBeansCan
	{
		scope=2;
		displayName="Canned Herring";
		descriptionShort="hmm tasty canned fish....";
		model="\dz\gear\food\food_can.p3d";
		rotationFlags=63;
		itemSize[]={2,2};
		weight=465;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bad_Food\Data\canned_Herring_co.paa"
		};
	};
	class BakedBeansCan_Opened;
	class HerringCan_Opened: BakedBeansCan_Opened
	{
		scope=2;
		displayName="Canned Herring";
		descriptionShort="hmm tasty canned fish....";
		model="\dz\gear\food\food_can_open.p3d";
		itemSize[]={2,2};
		weight=40;
		varQuantityInit=425;
		varQuantityMin=0;
		varQuantityMax=425;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bad_Food\Data\canned_Herring_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=74;
			water=80;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class TripeCan: BakedBeansCan
	{
		scope=2;
		displayName="Can of Dog food";
		descriptionShort="hmm tasty canned Tripe mix...";
		model="\dz\gear\food\food_can.p3d";
		rotationFlags=63;
		itemSize[]={2,2};
		weight=465;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bad_Food\Data\canned_Tripe_co.paa"
		};
	};
	class TripeCan_Opened: BakedBeansCan_Opened
	{
		scope=2;
		displayName="Can of Dog food";
		descriptionShort="hmm tasty canned Tripe mix...";
		model="\dz\gear\food\food_can_open.p3d";
		itemSize[]={2,2};
		weight=40;
		varQuantityInit=425;
		varQuantityMin=0;
		varQuantityMax=425;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bad_Food\Data\canned_Tripe_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=1.5;
			energy=74;
			water=80;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyDead_Rat_Skinned: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		model="\Bad_Food\Dead_Rat\Dead_Rat_Skinned.p3d";
		class AnimationSources
		{
			class CS_Raw
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Rotten
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Baked
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Boiled
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Dried
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Burned
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};
	class ProxyDead_Rat_OP_Skinned: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		model="\Bad_Food\Dead_Rat\Dead_Rat_Skinned.p3d";
		class AnimationSources
		{
			class CS_Raw
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Rotten
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Baked
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Boiled
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Dried
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Burned
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};
	class ProxyDead_Frog_Skinned: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		model="\Bad_Food\Dead_Frog\Dead_Frog_Skinned.p3d";
		class AnimationSources
		{
			class CS_Raw
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Rotten
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Baked
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Boiled
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Dried
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Burned
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};
	
	class ProxyDead_Rat: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			
		};
		model="\Bad_Food\Dead_Rat\Dead_Rat.p3d";
		class AnimationSources
		{
			class CS_Raw
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Rotten
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Baked
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Boiled
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Dried
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Burned
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};
	class ProxyDead_Rat_OP: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			
		};
		model="\Bad_Food\Dead_Rat\Dead_Rat.p3d";
		class AnimationSources
		{
			class CS_Raw
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Rotten
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Baked
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Boiled
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Dried
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Burned
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};
	class ProxyDead_Frog: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			
		};
		model="\Bad_Food\Dead_Frog\Dead_Frog.p3d";
		class AnimationSources
		{
			class CS_Raw
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Rotten
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Baked
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Boiled
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Dried
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class CS_Burned
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};
	
};