class Spur_FoldingShovel_Folded extends ItemBase
{

	void Spur_FoldingShovel_Folded()
	{

	}
	
	void autofold()
	{
		PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
		bool is_in_hands = player && player.GetItemInHands() == this;
		
		if( is_in_hands )
		{
			SetAnimationPhase("Fold", 0.0);
		}
		else 
		{
			SetAnimationPhase("Fold", 1.0);
		}
		
	}
	
	override int GetViewIndex()
    {
        if (MemoryPointExists("invView2"))
        {
			return 1;
        }
        return 0;
    }
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionUnFold_FoldingShovel);
	}
};

	
	