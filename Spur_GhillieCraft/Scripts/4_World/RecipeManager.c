modded class PluginRecipesManager
{
    override void RegisterRecipies()
	{
        super.RegisterRecipies();

		//Ghillie Mossy Craft
		RegisterRecipe(new CraftGhillieAttachment_Mossy);
		RegisterRecipe(new CraftGhillieBushrag_Mossy);
		RegisterRecipe(new CraftGhillieHood_Mossy);
		RegisterRecipe(new CraftGhillieSuit_Mossy);
		RegisterRecipe(new CraftGhillieTop_Mossy);
		
		//Ghillie Woodland Craft
		RegisterRecipe(new CraftGhillieAttachment_Woodland);
		RegisterRecipe(new CraftGhillieBushrag_Woodland);
		RegisterRecipe(new CraftGhillieHood_Woodland);
		RegisterRecipe(new CraftGhillieSuit_Woodland);
		RegisterRecipe(new CraftGhillieTop_Woodland);
		
		//camo net
		RegisterRecipe(new DeCraftCamoNet);
		RegisterRecipe(new CraftGhillieAttachment_CamoNet);
		RegisterRecipe(new CraftGhillieBushrag_CamoNet);
		RegisterRecipe(new CraftGhillieHood_CamoNet);
		RegisterRecipe(new CraftGhillieSuit_CamoNet);
		RegisterRecipe(new CraftGhillieTop_CamoNet);
		
		//Winter
		RegisterRecipe(new DeCraftFabric);
		RegisterRecipe(new CraftGhillieAttachment_CamoNet_Winter);
		RegisterRecipe(new CraftGhillieBushrag_CamoNet_Winter);
		RegisterRecipe(new CraftGhillieHood_CamoNet_Winter);
		RegisterRecipe(new CraftGhillieSuit_CamoNet_Winter);
		RegisterRecipe(new CraftGhillieTop_CamoNet_Winter);
    }
}