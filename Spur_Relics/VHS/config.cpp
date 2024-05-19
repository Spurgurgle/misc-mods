class CfgPatches
{
	class Spur_VHS
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
	class Relic_VHS: Inventory_Base
	{
		scope=2;
		displayName="VHS Tape";
		descriptionShort="A old magnetic tape data storage device.";
		model="\Spur_Relics\VHS\VHS.p3d";
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
			"\Spur_Relics\VHS\data\VHS_co.paa"
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
								"Spur_Relics\VHS\data\VHS.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_Relics\VHS\data\VHS.rvmat"
							}
						},
						
						{
							0.501,
							
							{
								"Spur_Relics\VHS\data\VHS_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_Relics\VHS\data\VHS_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"Spur_Relics\VHS\data\VHS_destruct.rvmat"
							}
						}
					};
				};
			};
		};	
	};
};