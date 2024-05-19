class CfgPatches
{
	class Spur_Relics_Cube
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
	class Relic_Rubiks_Cube: Inventory_Base
	{
		scope=2;
		displayName="Rubik's Cube";
		descriptionShort="A mysterious cube puzzle";
		model="\Spur_Relics\Rubiks_Cube\Rubiks_Cube.p3d";
		weight=200;
		itemSize[]={1,1};
		absorbency=0;
		rotationFlags=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Spur_Relics\Rubiks_Cube\data\Rubiks_Cube_co.paa"
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
								"Spur_Relics\Rubiks_Cube\data\Rubiks_Cube.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_Relics\Rubiks_Cube\data\Rubiks_Cube.rvmat"
							}
						},
						
						{
							0.501,
							
							{
								"Spur_Relics\Rubiks_Cube\data\Rubiks_Cube_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_Relics\Rubiks_Cube\data\Rubiks_Cube_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"Spur_Relics\Rubiks_Cube\data\Rubiks_Cube_destruct.rvmat"
							}
						}
					};
				};
			};
		};	
	};
};