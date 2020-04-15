// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResearchTree.h"

#if WITH_EDITOR
void UFGResearchTree::PreSave(const  ITargetPlatform* targetPlatform){ }
#endif 
#if WITH_EDITOR
void UFGResearchTree::UpdateAssetBundleData(){ }
#endif 
void UFGResearchTree::PostLoad(){ Super::PostLoad();}
FPrimaryAssetId UFGResearchTree::GetPrimaryAssetId() const{ return FPrimaryAssetId(); }
FText UFGResearchTree::GetPreUnlockDisplayName(TSubclassOf< UFGResearchTree > inClass){ 
	return inClass.GetDefaultObject()->mPreUnlockDisplayName;
}
FText UFGResearchTree::GetDisplayName(TSubclassOf< UFGResearchTree > inClass){ 
	return inClass.GetDefaultObject()->mDisplayName;
}
FText UFGResearchTree::GetPreUnlockDescription(TSubclassOf< UFGResearchTree > inClass){ 
	return inClass.GetDefaultObject()->mPreUnlockDescription;
}
FText UFGResearchTree::GetPostUnlockDescription(TSubclassOf< UFGResearchTree > inClass){ 
	return inClass.GetDefaultObject()->mPostUnlockDescription;
}
FSlateBrush UFGResearchTree::GetResearchTreeIcon(TSubclassOf< UFGResearchTree > inClass){ 
	return inClass.GetDefaultObject()->mResearchTreeIcon;
}
void UFGResearchTree::SetNodes(TSubclassOf <UFGResearchTree> inClass, TArray<  UFGResearchTreeNode* > nodes){ 
	inClass.GetDefaultObject()->mNodes = nodes;
}
TArray< class UFGResearchTreeNode* > UFGResearchTree::GetNodes(TSubclassOf <UFGResearchTree> inClass){ 
	return inClass.GetDefaultObject()->mNodes;
}
TArray<class UFGAvailabilityDependency *> UFGResearchTree::GetUnlockDependencies(TSubclassOf <UFGResearchTree> inClass){ 
	return inClass.GetDefaultObject()->mUnlockDependencies;
}
