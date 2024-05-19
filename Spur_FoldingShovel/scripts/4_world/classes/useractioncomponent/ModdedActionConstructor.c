modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions)
		actions.Insert(ActionFold_FoldingShovel);
		actions.Insert(ActionUnFold_FoldingShovel);
	};
};