modded class ModItemRegisterCallbacks
{
	
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
		super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Relic_Rubiks_Cube", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/HeadlightH7_Box.anm");
		pType.AddItemInHandsProfileIK("Relic_Nokia", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_CZ75.anm");
		pType.AddItemInHandsProfileIK("Relic_VHS", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/TireRepairKit.anm");
		pType.AddItemInHandsProfileIK("Relic_Walkman", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/TireRepairKit.anm");
		pType.AddItemInHandsProfileIK("Relic_Tamagotchi", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/HeadlightH7_Box.anm");
		pType.AddItemInHandsProfileIK("Relic_Gameboy", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/TireRepairKit.anm");
		pType.AddItemInHandsProfileIK("Relic_Gameboy_Cartridge", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/HeadlightH7_Box.anm");
	};
};


//pType.AddItemInHandsProfileIK("HeadlightH7_Box", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, 						"dz/anims/anm/player/ik/vehicles/HeadlightH7_Box.anm");

//pType.AddItemInHandsProfileIK("Mag_CZ75_15Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", toolsOneHanded, 		"dz/anims/anm/player/ik/attachments/magazines/magazine_CZ75.anm");
		
//pType.AddItemInHandsProfileIK("TireRepairKit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, 		 			"dz/anims/anm/player/ik/gear/TireRepairKit.anm");
		