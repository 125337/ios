@interface WAAgentCardRecycleManager : NSObject
{
    id <WAAgentCardRecycleManagerDelegate> _delegate; // +0x8
    double _recycleDebounceInterval; // +0x10
    double _recycleHotZoneScreens; // +0x18
    double _scrollCheckInterval; // +0x20
    NSMutableDictionary * _frameSetViewCache; // +0x28
    NSMutableDictionary * _pendingRecycleBlocks; // +0x30
    NSMutableSet * _offScreenContainerIds; // +0x38
    NSMutableDictionary * _offScreenContainerIndexPaths; // +0x40
    NSMutableSet * _pendingRebuildContainerIds; // +0x48
    double _lastRecycleCheckTime; // +0x50
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)cleanupAll;
- (void)markContainerIdAsPendingRebuild:(unsigned int)arg1;
- (void)cellWillDisplayForContainerId:(unsigned int)arg1;
- (void)cellDidEndDisplayForContainerId:(unsigned int)arg1 indexPath:(id)arg2;
- (void)scrollViewDidScroll;
- (CGRect)hotZoneRectForScrollView:(id)arg1;
- (void)evaluateRecycleHotZoneWithScrollView:(id)arg1;
- (void)scheduleRecycleForContainerKey:(id)arg1;
- (void)cancelPendingRecycleBlockOnlyForContainerKey:(id)arg1;
- (void)cancelPendingRecycleForContainerKey:(id)arg1;
- (void)noteFrameSetViewCreated:(id)arg1 containerId:(unsigned int)arg2 frameId:(unsigned int)arg3;
- (void)noteFrameSetViewRemovedForContainerId:(unsigned int)arg1;
- (id)frameSetViewForContainerId:(unsigned int)arg1;
- (id)delegate;
- (double)recycleDebounceInterval;
- (void)setRecycleDebounceInterval:(double)arg1;
- (double)recycleHotZoneScreens;
- (void)setRecycleHotZoneScreens:(double)arg1;
- (double)scrollCheckInterval;
- (void)setScrollCheckInterval:(double)arg1;
- (id)frameSetViewCache;
- (void)setFrameSetViewCache:(id)arg1;
- (id)pendingRecycleBlocks;
- (void)setPendingRecycleBlocks:(id)arg1;
- (id)offScreenContainerIds;
- (void)setOffScreenContainerIds:(id)arg1;
- (id)offScreenContainerIndexPaths;
- (void)setOffScreenContainerIndexPaths:(id)arg1;
- (id)pendingRebuildContainerIds;
- (void)setPendingRebuildContainerIds:(id)arg1;
- (double)lastRecycleCheckTime;
- (void)setLastRecycleCheckTime:(double)arg1;
- (void).cxx_destruct;
@end
