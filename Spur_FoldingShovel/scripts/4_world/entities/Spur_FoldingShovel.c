class Spur_FoldingShovel extends ItemBase
{
	
	void Spur_FoldingShovel_Folded()
	{

	}
	
	override int GetViewIndex()
    {
        if (MemoryPointExists("invView2"))
        {
			return 0;
        }
        return 1;
    }

	override bool CanMakeGardenplot()
	{
		return true;
	}

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionBuildPartSwitch);
		AddAction(ActionClapBearTrapWithThisItem);
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDigGardenPlot);
		AddAction(ActionDismantleGardenPlot);
		AddAction(ActionDismantlePart);
		AddAction(ActionBuildPart);
		AddAction(ActionBuryBody);
		AddAction(ActionBuryAshes);
		AddAction(ActionDigOutStash);
		AddAction(ActionDigInStash);
		AddAction(ActionFillObject);
		AddAction(ActionDigWorms);
		AddAction(ActionCreateGreenhouseGardenPlot);
		//added actions
		 
		AddAction(ActionMineTree);
		AddAction(ActionMineBush);
		AddAction(ActionFold_FoldingShovel);
		
	}
};
