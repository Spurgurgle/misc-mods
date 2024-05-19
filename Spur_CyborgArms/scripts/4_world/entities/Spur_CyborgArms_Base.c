class Spur_CyborgArms_Base : Clothing 
{
	ref array<typename> m_ExceptionsShortSleeves =
	{
		TShirt_ColorBase,
		//#ifdef WINDSTRIDECLOTHING
		Medium_Sleeves_Shirt
		//#endif
	}
	
	override void OnWasAttached( EntityAI parent, int slot_id )
    {
        super.OnWasAttached(parent, slot_id);
		PlayerBase player = PlayerBase.Cast(parent);
        if( player )
        {
            player.HideLimbs(true);
            player.SetIsWearingArms(true);
        }
    }
	
	void ToggleSimpleSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selectionNames);
        int selectionId = selectionNames.Find(selectionName);  
        SetSimpleHiddenSelectionState(selectionId, hide);
    }
};

class Spur_CyborgArms_Pair : Spur_CyborgArms_Base 
{
	
	override void OnWasAttached( EntityAI parent, int slot_id )
    {
        super.OnWasAttached(parent, slot_id);

		PlayerBase player;
		if (PlayerBase.CastTo(player, parent) && GetGame().IsDedicatedServer() && player.IsPlayerSelected())
        {
			player.SetHealth("","Shock",-100);
			player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("LeftForeArmRoll");
			player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("RightForeArmRoll");	
			ItemBase flesh = ItemBase.Cast( GetGame().CreateObjectEx("HumanSteakMeat", player.GetPosition(), ECE_PLACE_ON_SURFACE) );
			ItemBase flesh2 = ItemBase.Cast( GetGame().CreateObjectEx("HumanSteakMeat", player.GetPosition(), ECE_PLACE_ON_SURFACE) );
	 	}
	} 
};
class Spur_CyborgArms_Left : Spur_CyborgArms_Base 
{
	
	override void OnWasAttached( EntityAI parent, int slot_id )
    {
        super.OnWasAttached(parent, slot_id);

		PlayerBase player;
		if (PlayerBase.CastTo(player, parent) && GetGame().IsDedicatedServer() && player.IsPlayerSelected())
        {
			player.SetHealth("","Shock",-100);
			player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("LeftForeArmRoll");
			ItemBase flesh = ItemBase.Cast( GetGame().CreateObjectEx("HumanSteakMeat", player.GetPosition(), ECE_PLACE_ON_SURFACE) );			
		}
    }
};
class Spur_CyborgArms_Right : Spur_CyborgArms_Base 
{
	
	override void OnWasAttached( EntityAI parent, int slot_id )
    {
        super.OnWasAttached(parent, slot_id);

		PlayerBase player;
	if (PlayerBase.CastTo(player, parent) && GetGame().IsDedicatedServer() && player.IsPlayerSelected())
        {
			player.SetHealth("","Shock",-100);
			player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("RightForeArmRoll");	
			ItemBase flesh = ItemBase.Cast( GetGame().CreateObjectEx("HumanSteakMeat", player.GetPosition(), ECE_PLACE_ON_SURFACE) );
		}	
    }	
};

