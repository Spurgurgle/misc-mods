modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("CamoNetStrip", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior , 				"dz/anims/anm/player/ik/gear/brassknuckles.anm");
		pType.AddItemInHandsProfileIK("FabricStrip", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior , 				"dz/anims/anm/player/ik/gear/brassknuckles.anm");
	
	};

};


