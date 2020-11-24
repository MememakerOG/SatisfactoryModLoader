// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWallAttachmentHologram.h"
#include "FGBuildableWall.h"
#include "FGBuildableRoad.h"
#include "FGBuildableRailroadTrack.h"
#include "FGBuildableFoundation.h"

AFGWallAttachmentHologram::AFGWallAttachmentHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass()); this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->bHidden = true;
	this->bReplicates = true;
}
bool AFGWallAttachmentHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGWallAttachmentHologram::CheckValidFloor(){ }
void AFGWallAttachmentHologram::CheckClearance(){ }
int32 AFGWallAttachmentHologram::GetRotationStep() const{ return int32(); }
