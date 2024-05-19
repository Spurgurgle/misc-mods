modded class ItemBase
{
	override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
		//Print("[BorgAmrs--EEHitBy--ItemBase] damageResult=<" +damageResult.GetDamage("","")+ ">] ammo=<" +ammo+">]");
		PlayerBase z_SourcePlayer = PlayerBase.Cast(source);
		CarScript z_parent = CarScript.Cast(this.GetHierarchyParent());
		ammo.ToLower();
		if ( z_parent && z_SourcePlayer && z_SourcePlayer.IsWearingArms() && ammo.Contains("fist"))
		{
			
			//Print("[BorgAmrs--EEHitBy--ItemBase] " + z_SourcePlayer.GetIdentity().GetName() + " is wearing CyborgArms");
			float z_extra = damageResult.GetDamage(dmgZone,"Shock")+10; //adding extra dmaage here..
			AddHealth("","Health", -z_extra );
			vector z_Sdir = z_SourcePlayer.GetDirection();
			z_Sdir[1] = z_Sdir[1] + 0.088;
			z_Sdir = z_Sdir * 3.79;
			
			//Print("[BorgAmrs--EEHitBy--ItemBase] Source dir=<" +z_Sdir+">");
			//Print("[BorgAmrs--EEHitBy--ItemBase] Parent =<" +z_parent.GetType()+">");
			//Print("[BorgAmrs--EEHitBy--ItemBase] Child =<" +this.GetType()+">");
			//dBodyActive( this, ActiveState.ACTIVE);
			dBodyApplyImpulse( z_parent, z_Sdir * dBodyGetMass(z_parent) * 0.89); //keep?
			//dBodyApplyImpulseAt( z_parent, z_Sdir * dBodyGetMass(z_parent) * 1.25, z_parent.GetPosition() + z_Sdir ); //keep?
		}
	}			
};