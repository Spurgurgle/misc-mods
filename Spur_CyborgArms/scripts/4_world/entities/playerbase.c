modded class PlayerBase extends ManBase
{	
//for zeds super punch	
	bool z_iswearingarms;
    
    bool IsWearingArms()
    {
        return z_iswearingarms;
    }
    void SetIsWearingArms(bool state)
    {
        z_iswearingarms = state;
    }
	
	override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
		if(!source.IsZombie() || !source.IsAnimal()) //had to add for some reason.. 
		{
			//Print("[BorgAmrs-EEHitBy-PlayerBase] damageResult=<" +damageResult.GetDamage("","")+ ">] ammo=<" +ammo+">]");
			PlayerBase z_SourcePlayer = PlayerBase.Cast(source);
			ammo.ToLower();
			if ( z_SourcePlayer && z_SourcePlayer.IsWearingArms() && ammo.Contains("fist"))
			{
				//Print("[BorgAmrs-EEHitBy-PlayerBase] " + z_SourcePlayer.GetIdentity().GetName() + " is wearing CyborgArms");
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
			
				//Print("[BorgAmrs-EEHitBy-PlayerBase] Source dir=<" +z_Sdir+">");
				dBodyApplyImpulse( this, z_Sdir * dBodyGetMass(this) * 3.79); //keep?
			}
		}
	}
	///Zeds Yeet
	
	void HideLimbs(bool state)
    {    
        EntityAI bodypart;
        int slot_id;
       // array<string> bodyparts = {"Gloves","Body","Legs","Feet","Head","Hips","pelvis","leftleg","rightleg"};
		array<string> bodyparts = {"Body"};
                
        for ( int i = 0; i < bodyparts.Count(); i++ )
        {
            
            slot_id = InventorySlots.GetSlotIdFromString(bodyparts.Get(i));
            bodypart = GetInventory().FindPlaceholderForSlot( slot_id );
            if ( bodypart )
            {
                bodypart.SetInvisible( state );
                            
                //Print("work??? or not??");
            }
        }            
    }
	//^^^ Zedmags Script for hiding player body parts ^^^
	
	override bool CanReleaseAttachment(EntityAI attachment)
	{
		if (!super.CanReleaseAttachment(attachment)) 
		{
			return false;
		}
    
		return (!attachment.IsKindOf("Spur_CyborgArms_Base"));    
	}
	///^^^ help from Dab commented out for testing stage.. prevent arms from being removed.

	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);
		RunCyborgChecks(slot_name, item);
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);
		RunCyborgChecks(slot_name, item);
	}

	void RunCyborgChecks(string slot_name, EntityAI item)
	{
		if (!slot_name || slot_name.Length() == 0 || !item) return;

		ChangeArmsPair(slot_name, item);
		ChangeArmsLeft(slot_name, item);
		ChangeArmsRight(slot_name, item);
	}

	void ChangeArmsPair (string slot_name, EntityAI item)
	{
	// Check for relevent slot
		if (slot_name != "Gloves" && slot_name != "Body") return;
		
	//not wearing arms the do nothing	
		Spur_CyborgArms_Pair BorgArmsPair;
		if (!Class.CastTo(BorgArmsPair, FindAttachmentBySlotName("Gloves"))) return;
		
	// default selection for arms 
		BorgArmsPair.ToggleSimpleSelection("CamoTorso", 1);
		BorgArmsPair.ToggleSimpleSelection("CyborgLeftTorso", 1);
		BorgArmsPair.ToggleSimpleSelection("FleshLeftTorso", 0);
		BorgArmsPair.ToggleSimpleSelection("CyborgRightTorso", 1);
		BorgArmsPair.ToggleSimpleSelection("FleshRightTorso", 0);
		BorgArmsPair.ToggleSimpleSelection("CyborgLeftHand", 1);
		BorgArmsPair.ToggleSimpleSelection("CyborgRightHand", 1);
		BorgArmsPair.ToggleSimpleSelection("FleshLeftHand", 0);
		BorgArmsPair.ToggleSimpleSelection("FleshRightHand", 0);
		BorgArmsPair.ToggleSimpleSelection("CyborgLeftArm", 1);
		BorgArmsPair.ToggleSimpleSelection("CyborgRightArm", 1);
		BorgArmsPair.ToggleSimpleSelection("FleshLeftArm", 0);
		BorgArmsPair.ToggleSimpleSelection("FleshRightArm", 0);
		
	//not wearing top then use default above	
		Clothing top = Clothing.Cast(FindAttachmentBySlotName("Body"));
		if (!Class.CastTo(top, FindAttachmentBySlotName("Body")))return;
		
	//for short sleeve shirts, as i find new shirts they need adding to m_exception in arms_base.c
		if (top.IsAnyInherited(BorgArmsPair. m_ExceptionsShortSleeves))
		{
			BorgArmsPair.ToggleSimpleSelection("CamoTorso", 0);
			BorgArmsPair.ToggleSimpleSelection("CyborgLeftTorso", 0);
			BorgArmsPair.ToggleSimpleSelection("FleshLeftTorso", 0);
			BorgArmsPair.ToggleSimpleSelection("CyborgRightTorso", 0);
			BorgArmsPair.ToggleSimpleSelection("FleshRightTorso", 0);
			BorgArmsPair.ToggleSimpleSelection("CyborgLeftHand", 1);
			BorgArmsPair.ToggleSimpleSelection("CyborgRightHand", 1);
			BorgArmsPair.ToggleSimpleSelection("FleshLeftHand", 0);
			BorgArmsPair.ToggleSimpleSelection("FleshRightHand", 0);
			BorgArmsPair.ToggleSimpleSelection("CyborgLeftArm", 1);
			BorgArmsPair.ToggleSimpleSelection("CyborgRightArm", 1);
			BorgArmsPair.ToggleSimpleSelection("FleshLeftArm", 0);
			BorgArmsPair.ToggleSimpleSelection("FleshRightArm", 0);
			
			top.SetSimpleHiddenSelectionState(0,0); //hide personality in tshirt
			return;
		}
	
	//for any other tops.
		if (Class.CastTo(top, FindAttachmentBySlotName("Body")));
		{
			BorgArmsPair.ToggleSimpleSelection("CamoTorso", 0);
			BorgArmsPair.ToggleSimpleSelection("CyborgLeftTorso", 0);
			BorgArmsPair.ToggleSimpleSelection("FleshLeftTorso", 0);
			BorgArmsPair.ToggleSimpleSelection("CyborgRightTorso", 0);
			BorgArmsPair.ToggleSimpleSelection("FleshRightTorso", 0);
			BorgArmsPair.ToggleSimpleSelection("CyborgLeftHand", 1);
			BorgArmsPair.ToggleSimpleSelection("CyborgRightHand", 1);
			BorgArmsPair.ToggleSimpleSelection("FleshLeftHand", 0);
			BorgArmsPair.ToggleSimpleSelection("FleshRightHand", 0);
			BorgArmsPair.ToggleSimpleSelection("CyborgLeftArm", 0);
			BorgArmsPair.ToggleSimpleSelection("CyborgRightArm", 0);
			BorgArmsPair.ToggleSimpleSelection("FleshLeftArm", 0);
			BorgArmsPair.ToggleSimpleSelection("FleshRightArm", 0);
			return;
		}	
	};

	void ChangeArmsLeft (string slot_name, EntityAI item)
	{
	// Check for relevent slot
		if (slot_name != "Gloves" && slot_name != "Body") return;
	
	//not wearing arms the do nothing	
		Spur_CyborgArms_Left BorgArmsLeft;
		if (!Class.CastTo(BorgArmsLeft, FindAttachmentBySlotName("Gloves"))) return;
	
	// default selection for arms 	
		BorgArmsLeft.ToggleSimpleSelection("CamoTorso", 1);
		BorgArmsLeft.ToggleSimpleSelection("CyborgLeftTorso", 1);
		BorgArmsLeft.ToggleSimpleSelection("FleshLeftTorso", );
		BorgArmsLeft.ToggleSimpleSelection("CyborgRightTorso", 0);
		BorgArmsLeft.ToggleSimpleSelection("FleshRightTorso", 1);
		BorgArmsLeft.ToggleSimpleSelection("CyborgLeftHand", 1);
		BorgArmsLeft.ToggleSimpleSelection("CyborgRightHand", 0);
		BorgArmsLeft.ToggleSimpleSelection("FleshLeftHand", 0);
		BorgArmsLeft.ToggleSimpleSelection("FleshRightHand", 1);
		BorgArmsLeft.ToggleSimpleSelection("CyborgLeftArm", 1);
		BorgArmsLeft.ToggleSimpleSelection("CyborgRightArm", 0);
		BorgArmsLeft.ToggleSimpleSelection("FleshLeftArm", 0);
		BorgArmsLeft.ToggleSimpleSelection("FleshRightArm", 1);
		
	//not wearing top then use default above	
		Clothing top = Clothing.Cast(FindAttachmentBySlotName("Body"));
		if (!Class.CastTo(top, FindAttachmentBySlotName("Body")))return;

	//for short sleeve shirts, as i find new shirts they need adding to m_exception in arms_base.c
		if (top.IsAnyInherited(BorgArmsLeft. m_ExceptionsShortSleeves))
		{
			BorgArmsLeft.ToggleSimpleSelection("CamoTorso", 0);
			BorgArmsLeft.ToggleSimpleSelection("CyborgLeftTorso", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshLeftTorso", 0);
			BorgArmsLeft.ToggleSimpleSelection("CyborgRightTorso", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshRightTorso", 0);
			BorgArmsLeft.ToggleSimpleSelection("CyborgLeftHand", 1);
			BorgArmsLeft.ToggleSimpleSelection("CyborgRightHand", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshLeftHand", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshRightHand", 1);
			BorgArmsLeft.ToggleSimpleSelection("CyborgLeftArm", 1);
			BorgArmsLeft.ToggleSimpleSelection("CyborgRightArm", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshLeftArm", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshRightArm", 1);
			
			top.SetSimpleHiddenSelectionState(0,0);
			return;
		}
		
	//for any other tops.
		if (Class.CastTo(top, FindAttachmentBySlotName("Body")));
		{
			BorgArmsLeft.ToggleSimpleSelection("CamoTorso", 0);
			BorgArmsLeft.ToggleSimpleSelection("CyborgLeftTorso", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshLeftTorso", 0);
			BorgArmsLeft.ToggleSimpleSelection("CyborgRightTorso", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshRightTorso", 0);
			BorgArmsLeft.ToggleSimpleSelection("CyborgLeftHand", 1);
			BorgArmsLeft.ToggleSimpleSelection("CyborgRightHand", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshLeftHand", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshRightHand", 1);
			BorgArmsLeft.ToggleSimpleSelection("CyborgLeftArm", 0);
			BorgArmsLeft.ToggleSimpleSelection("CyborgRightArm", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshLeftArm", 0);
			BorgArmsLeft.ToggleSimpleSelection("FleshRightArm", 0);
			return;
		}
	};
	
	void ChangeArmsRight (string slot_name, EntityAI item)
	{
	// Check for relevent slot
		if (slot_name != "Gloves" && slot_name != "Body") return;
	
	//not wearing arms the do nothing	
		Spur_CyborgArms_Right BorgArmsRight;
		if (!Class.CastTo(BorgArmsRight, FindAttachmentBySlotName("Gloves"))) return;
		
	// default selection for arms 
		BorgArmsRight.ToggleSimpleSelection("CamoTorso", 1);
		BorgArmsRight.ToggleSimpleSelection("CyborgLeftTorso", 0);
		BorgArmsRight.ToggleSimpleSelection("FleshLeftTorso", 1);
		BorgArmsRight.ToggleSimpleSelection("CyborgRightTorso", 1);
		BorgArmsRight.ToggleSimpleSelection("FleshRightTorso", 0);
		BorgArmsRight.ToggleSimpleSelection("CyborgLeftHand", 0);
		BorgArmsRight.ToggleSimpleSelection("CyborgRightHand", 1);
		BorgArmsRight.ToggleSimpleSelection("FleshLeftHand", 1);
		BorgArmsRight.ToggleSimpleSelection("FleshRightHand", 0);
		BorgArmsRight.ToggleSimpleSelection("CyborgLeftArm", 0);
		BorgArmsRight.ToggleSimpleSelection("CyborgRightArm", 1);
		BorgArmsRight.ToggleSimpleSelection("FleshLeftArm", 1);
		BorgArmsRight.ToggleSimpleSelection("FleshRightArm", 0);
		
	//not wearing top then use default above
		Clothing top = Clothing.Cast(FindAttachmentBySlotName("Body"));
		if (!Class.CastTo(top, FindAttachmentBySlotName("Body")))return;

	//for short sleeve shirts, as i find new shirts they need adding to m_exception in arms_base.c
		if (top.IsAnyInherited(BorgArmsRight. m_ExceptionsShortSleeves))
		{
			BorgArmsRight.ToggleSimpleSelection("CamoTorso", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgLeftTorso", 0);
			BorgArmsRight.ToggleSimpleSelection("FleshLeftTorso", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgRightTorso", 0);
			BorgArmsRight.ToggleSimpleSelection("FleshRightTorso", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgLeftHand", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgRightHand", 1);
			BorgArmsRight.ToggleSimpleSelection("FleshLeftHand", 1);
			BorgArmsRight.ToggleSimpleSelection("FleshRightHand", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgLeftArm", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgRightArm", 1);
			BorgArmsRight.ToggleSimpleSelection("FleshLeftArm", 1);
			BorgArmsRight.ToggleSimpleSelection("FleshRightArm", 0);
			top.SetSimpleHiddenSelectionState(0,0);
			return;
		}
		
	//for any other tops.
		if (Class.CastTo(top, FindAttachmentBySlotName("Body")));
		{
			BorgArmsRight.ToggleSimpleSelection("CamoTorso", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgLeftTorso", 0);
			BorgArmsRight.ToggleSimpleSelection("FleshLeftTorso", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgRightTorso", 0);
			BorgArmsRight.ToggleSimpleSelection("FleshRightTorso", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgLeftHand", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgRightHand", 1);
			BorgArmsRight.ToggleSimpleSelection("FleshLeftHand", 1);
			BorgArmsRight.ToggleSimpleSelection("FleshRightHand", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgLeftArm", 0);
			BorgArmsRight.ToggleSimpleSelection("CyborgRightArm", 0);
			BorgArmsRight.ToggleSimpleSelection("FleshLeftArm", 0);
			BorgArmsRight.ToggleSimpleSelection("FleshRightArm", 0);
			return;
		}
	};
};
