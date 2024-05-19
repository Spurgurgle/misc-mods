modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Spur_FoldingShovel", "dz/anims/workspaces/player/player_main/props/player_main_1h_handshovel.asi", pBehavior , 				"dz/anims/anm/player/ik/gear/CSLA_Field_Shovel.anm");
		pType.AddItemInHandsProfileIK("Spur_FoldingShovel_Folded", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior , 				"dz/anims/anm/player/ik/gear/brassknuckles.anm");
	
	};

};


/*

pType.AddItemInHandsProfileIK("FieldShovel", "dz/anims/workspaces/player/player_main/props/player_main_1h_handshovel.asi", toolsOneHanded,		"dz/anims/anm/player/ik/gear/CSLA_Field_Shovel.anm");
	

void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior);

pType.AddItemInHandsProfileIK("BrassKnuckles_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded,			"dz/anims/anm/player/ik/gear/brassknuckles.anm");
		
*/