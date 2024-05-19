modded class ModItemRegisterCallbacks
{
   override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
   {
	   super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("ReBar_Hatchet", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/Hatchet.anm");
   };
  
   override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior) 
   {
	   super.RegisterTwoHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("ReBar_Axe", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_woodaxe.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/woodaxe.anm");
		pType.AddItemInHandsProfileIK("ScrapSword", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
		
   };
};
