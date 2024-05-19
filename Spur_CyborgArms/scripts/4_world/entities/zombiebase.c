modded class ZombieBase
{
	override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
		//Print("[BorgAmrs--EEHitBy--ZombieBase] damageResult=<" +damageResult.GetDamage("","")+ ">] ammo=<" +ammo+">]");
		PlayerBase z_SourcePlayer = PlayerBase.Cast(source);
		ammo.ToLower();
		
		if ( z_SourcePlayer && z_SourcePlayer.IsWearingArms() && ammo.Contains("fist"))
		{
			//Print("[BorgAmrs--EEHitBy--ZombieBase] " + z_SourcePlayer.GetIdentity().GetName() + " is wearing CyborgArms");
			float z_extra = ConvertNonlethalDamage(damageResult.GetDamage(dmgZone,"Shock")+1000); //adding extra dmaage here..
			AddHealth("","Health", -z_extra );
			if (dmgZone != "Head")
			{
				float z_extra2 = damageResult.GetDamage(dmgZone,"Shock")+1000; //adding extra dmaage here..
				AddHealth(dmgZone,"Health",-z_extra2); 
			}
			vector z_Sdir = z_SourcePlayer.GetDirection();
			z_Sdir[1] = z_Sdir[1] + 0.088;
			z_Sdir = z_Sdir * 3.79;
			
			//Print("[BorgAmrs--EEHitBy--ZombieBase] Source dir=<" +z_Sdir+">");
			dBodyApplyImpulse( this, z_Sdir * dBodyGetMass(this) * 3.79); //keep?
		}
	}		
};