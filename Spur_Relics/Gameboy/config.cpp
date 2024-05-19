class CfgPatches
{
	class Spur_Gameboy
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
class CfgSlots
{
	class Slot_Game
	{
		name="Game";
		displayName="Game";
		ghostIcon="";
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Relic_Gameboy: Inventory_Base
	{
		scope=2;
		displayName="Gameboy";
		descriptionShort="A Classic portable Game";
		model="\Spur_Relics\Gameboy\Gameboy.p3d";
		weight=200;
		itemSize[]={1,2};
		absorbency=0;
		rotationFlags=16;
		attachments[]=
		{
			"Game"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Spur_Relics\Gameboy\data\Gameboy_co.paa"
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
								"Spur_Relics\Gameboy\data\Gameboy.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_Relics\Gameboy\data\Gameboy.rvmat"
							}
						},
						
						{
							0.501,
							
							{
								"Spur_Relics\Gameboy\data\Gameboy_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_Relics\Gameboy\data\Gameboy_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"Spur_Relics\Gameboy\data\Gameboy_destruct.rvmat"
							}
						}
					};
				};
			};
		};	
	};
	class Relic_Gameboy_Game: Inventory_Base
	{
		scope=2;
		displayName="Gameboy Game ";
		descriptionShort="A Classic portable game cartridge";
		model="\Spur_Relics\Gameboy\Gameboy_Cartridge.p3d";
		weight=200;
		itemSize[]={1,1};
		absorbency=0;
		rotationFlags=0;
		inventorySlot[]=
		{
			"Game"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Spur_Relics\Gameboy\data\Gameboy_Game_co.paa"
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
								"Spur_Relics\Gameboy\data\Gameboy_Game.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_Relics\Gameboy\data\Gameboy_Game.rvmat"
							}
						},
						
						{
							0.501,
							
							{
								"Spur_Relics\Gameboy\data\Gameboy_Game_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_Relics\Gameboy\data\Gameboy_Game_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"Spur_Relics\Gameboy\data\Gameboy_Game_destruct.rvmat" 
							}
						}
					};
				};
			};
		};	
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyGameboy_Cartridge: ProxyAttachment
	{
		scope=2;
		inventorySlot="Game";
		model="\Spur_Relics\Gameboy\Gameboy_Cartridge.p3d";
    };
};