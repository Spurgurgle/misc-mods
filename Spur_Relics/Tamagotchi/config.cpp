class CfgPatches
{
	class Spur_Tamagotchi
	{
		units[]=
		{
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Spur_Relics"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Relic_Tamagotchi: Inventory_Base
	{
		scope=2;
		displayName="Tamagotchi";
		descriptionShort="A handheld digital pet ";
		model="\Spur_Relics\Tamagotchi\Tamagotchi.p3d";
		weight=200;
		itemSize[]={1,1};
		absorbency=0;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Chemlight"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_Relics\Tamagotchi\data\Tamagotchi_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"Spur_Relics\Tamagotchi\data\Tamagotchi.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_Relics\Tamagotchi\data\Tamagotchi.rvmat"
							}
						},
						
						{
							0.501,
							
							{
								"Spur_Relics\Tamagotchi\data\Tamagotchi_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_Relics\Tamagotchi\data\Tamagotchi_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"Spur_Relics\Tamagotchi\data\Tamagotchi_destruct.rvmat"
							}
						}
					};
				};
			};
		};	
	};
	class Relic_Tamagotchi_Black: Relic_Tamagotchi
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_Relics\Tamagotchi\data\Tamagotchi_black_co.paa"
		};	
	};
	class Relic_Tamagotchi_Green: Relic_Tamagotchi
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_Relics\Tamagotchi\data\Tamagotchi_green_co.paa"
		};	
	};
	class Relic_Tamagotchi_Pink: Relic_Tamagotchi
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_Relics\Tamagotchi\data\Tamagotchi_pink_co.paa"
		};	
	};
	class Relic_Tamagotchi_Red: Relic_Tamagotchi
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_Relics\Tamagotchi\data\Tamagotchi_red_co.paa"
		};	
	};
};