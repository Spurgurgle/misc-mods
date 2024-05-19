modded class CarScript
{
	override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
		//Print("[BorgAmrs--EEHitBy--CarScript] damageResult=<" +damageResult.GetDamage("","")+ ">] ammo=<" +ammo+">]");
		PlayerBase z_SourcePlayer = PlayerBase.Cast(source);
		ammo.ToLower();
		
		if ( z_SourcePlayer && z_SourcePlayer.IsWearingArms() && ammo.Contains("fist"))
		{
			//Print("[BorgAmrs--EEHitBy--CarScript] " + z_SourcePlayer.GetIdentity().GetName() + " is wearing CyborgArms");
			float z_extra = damageResult.GetDamage(dmgZone,"Shock")+10; //adding extra dmaage here..
			AddHealth("","Health", -z_extra );
			vector z_Sdir = z_SourcePlayer.GetDirection();
			z_Sdir[1] = z_Sdir[1] + 0.088;
			z_Sdir = z_Sdir * 3.79;
			
			//Print("[BorgAmrs--EEHitBy--CarScript] Source dir=<" +z_Sdir+">");
			//dBodyActive( this, ActiveState.ACTIVE);
			//dBodyApplyImpulse( this, z_Sdir * dBodyGetMass(this) * 4.79); //keep?
			dBodyApplyImpulseAt( this, z_Sdir * dBodyGetMass(this) * 0.89, this.GetPosition() + z_Sdir); //keep?
		}
	}			
};