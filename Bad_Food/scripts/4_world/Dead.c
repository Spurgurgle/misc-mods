class Dead_Rat extends Edible_Base
{
	override bool CanBeSkinned()
	{
		if ( GetFoodStage().IsFoodRotten() ) 
		return false;
		else		
		return true;
	}
	
	override bool IsAlive()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}

	override bool CanBeCooked()
	{
		return false;
	}	
	
	override bool IsMeat()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	//override bool CanPutIntoHands( EntityAI parent )
	//{
	//	return false;
	//}
	
	override void EEOnCECreate()
	{
		int rand = Math.RandomInt(0,10);

		if ( rand > 6 )
		{
			ChangeFoodStage( FoodStageType.ROTTEN );
			SetHealth( "", "", GetMaxHealth()*0.1 );
		}
	}
}
class Dead_Rat_OP extends Edible_Base
{
	override bool CanBeSkinned()
	{
		if ( GetFoodStage().IsFoodRotten() ) 
		return false;
		else		
		return true;
	}
	
	override bool IsAlive()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}

	override bool CanBeCooked()
	{
		return false;
	}	
	
	override bool IsMeat()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	//override bool CanPutIntoHands( EntityAI parent )
	//{
	//	return false;
	//}
	
	override void EEOnCECreate()
	{
		int rand = Math.RandomInt(0,10);

		if ( rand > 6 )
		{
			ChangeFoodStage( FoodStageType.ROTTEN );
			SetHealth( "", "", GetMaxHealth()*0.1 );
		}
	}
}
class Dead_Frog extends Edible_Base
{
	override bool CanBeSkinned()
	{
		if ( GetFoodStage().IsFoodRotten() ) 
		return false;
		else		
		return true;
	}
	
	override bool IsAlive()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}

	override bool CanBeCooked()
	{
		return false;
	}	
	
	override bool IsMeat()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	//override bool CanPutIntoHands( EntityAI parent )
	//{
	//	return false;
	//}
	
	override void EEOnCECreate()
	{
		int rand = Math.RandomInt(0,10);

		if ( rand > 6 )
		{
			ChangeFoodStage( FoodStageType.ROTTEN );
			SetHealth( "", "", GetMaxHealth()*0.1 );
		}
	}
}
