class CfgPatches
{
	class Spur_Walkman
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
	class Relic_Walkman: Inventory_Base
	{
		scope=2;
		displayName="Fony Walkman";
		descriptionShort="A Classic portable audio cassete player";
		model="\Spur_Relics\Walkman\Walkman.p3d";
		weight=200;
		itemSize[]={3,2};
		absorbency=0;
		rotationFlags=16;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Spur_Relics\Walkman\data\Walkman_co.paa"
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
								"Spur_Relics\Walkman\data\Walkman.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_Relics\Walkman\data\Walkman.rvmat"
							}
						},
						
						{
							0.501,
							
							{
								"Spur_Relics\Walkman\data\Walkman_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_Relics\Walkman\data\Walkman_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"Spur_Relics\Walkman\data\Walkman_destruct.rvmat"
							}
						}
					};
				};
			};
		};	
	};
};