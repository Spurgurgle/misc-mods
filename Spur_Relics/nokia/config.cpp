class CfgPatches
{
	class Spur_Relics_Nokia
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
	class Relic_Nokia: Inventory_Base
	{
		scope=2;
		displayName="Nokia";
		descriptionShort="A Old communictain device, still in pristine condition";
		model="\Spur_Relics\nokia\nokia.p3d";
		weight=200;
		itemSize[]={1,2};
		absorbency=0;
		rotationFlags=17;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Spur_Relics\nokia\data\nokia_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000000; //2,000,000 hit points seems about right for a old nokia
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.501,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0.01,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
};