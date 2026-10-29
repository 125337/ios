@interface MMFinderLiveOlyBarragePubbleMgr : NSObject <MMFinderLiveOlyBarrageDataItemTransferExt>
{
    BOOL _isLayoutCalculating; // +0x8
    BOOL _isEnableDisplayBarrage; // +0x9
    BOOL _hasNotifyDisplay; // +0xa
    int _currExposeIndex; // +0xc
    MMFinderLiveActivityTaskId * _taskId; // +0x10
    NSMutableArray * _pendingBarrageDataItemList; // +0x18
    NSMutableArray * _friendBarragePubbleCellFrameList; // +0x20
    NSMutableArray * _strangerBarragePubbleCellFrameList; // +0x28
    NSMutableArray * _tempFriendBarragePubbleCellFrameList; // +0x30
    long long _tempFriendBarrageLastIndex; // +0x38
    NSMutableArray * _tempStrangerBarragePubbleCellFrameList; // +0x40
    long long _tempStrangerBarrageLastIndex; // +0x48
    NSMutableOrderedSet * _lastExposeFriendBarragePubbleCellFrameSet; // +0x50
    NSMutableOrderedSet * _lastExposeStrangerBarragePubbleCellFrameSet; // +0x58
    NSMutableOrderedSet * _reusedBarragePubbleCellSet; // +0x60
    NSMutableSet * _barrageIdSet; // +0x68
    NSMutableSet * _barrageUniqueIdSet; // +0x70
    unsigned long long _maxPendingBarrageItemCnt; // +0x78
    unsigned long long _barrageLayoutCalculatePerCnt; // +0x80
    double _barrageLayoutCalculateFrequence; // +0x88
    unsigned long long _maxCacheBarrageCellFrameCnt; // +0x90
    unsigned long long _maxTempCacheBarrageCellFrameCnt; // +0x98
    unsigned long long _maxReuseBarragePubbleCellCacheCnt; // +0xa0
    unsigned long long _notifyBarrageDisplayMinCnt; // +0xa8
    double _friendBarragePubbleCellPercent; // +0xb0
    double _strangerBarragePubbleCellPercent; // +0xb8
    unsigned long long _friendBarragePubbleExposeContinueTimes; // +0xc0
    unsigned long long _strangerBarragePubbleExposeContinueTimes; // +0xc8
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultData;
- (void)registerExtensions;
- (id)getNextBarragePubbleListWithTravelCount:(unsigned long long)arg1;
- (void)unableDisplayBarrage;
- (void)enableDisplayBarrage;
- (void)addDataItemList:(id)arg1;
- (void)logForValidDataItemList:(id)arg1;
- (void)filterBarrages:(id)arg1 forBarrages:(id)arg2;
- (void)deleteBarrages:(id)arg1;
- (void)deleteBarragesInPendingBarrageWithDeleteNotifyMsg:(id)arg1;
- (void)deleteBarragesInBarrageCellFrameList:(id)arg1 withDeleteNotifyMsg:(id)arg2;
- (void)deleteBarragesInBarrageCellFrameSet:(id)arg1 withDeleteNotifyMsg:(id)arg2;
- (void)deleteBarragesInBarrageUniqueIdSetWithDeleteNotifyMsg:(id)arg1;
- (id)getBarrageDataItemListFilterRepeatBarrages:(id)arg1;
- (void)limitPendingBarrageDataItemList;
- (void)startBarragePubbleLayoutCalculating;
- (void)invokeBarragePubbleLayoutCalculating;
- (void)cacheBarrageCellFrame:(id)arg1;
- (void)limitBarragePubbleCellFrameFriendCache;
- (void)limitBarragePubbleCellFrameStrangerCache;
- (void)synchronizePubbleCellFrameToTempFromFriendCache:(id)arg1;
- (void)synchronizePubbleCellFrameToTempFromStrangerCache:(id)arg1;
- (void)limitBarragePubbleCellFrameTempCache:(id)arg1;
- (void)notifyBarrageDisplay;
- (id)innerGetNextPubbleCellFrameListWithTravelCount:(unsigned long long)arg1;
- (void)addExposeIndex;
- (id)randSortPubbleCellFrameList:(id)arg1;
- (unsigned long long)getNextTempBarragePubbleDisplayIndex:(unsigned long long)arg1 tempCacheList:(id)arg2;
- (void)clearExposedBarragePubbleCellFrame;
- (void)clearExposedFriendPubbleCellFrame;
- (void)clearExposedStrangerPubbleCellFrame;
- (id)prepareFriendPubbleCellFrameForExpose:(unsigned long long)arg1 toExposeCellFrameList:(id)arg2;
- (unsigned long long)supplyFriendPubbleCellFrameFromTempForExpose:(unsigned long long)arg1 toExposeCellFrameList:(id)arg2;
- (id)prepareStrangerPubbleCellFrameForExpose:(unsigned long long)arg1 toExposeCellFrameList:(id)arg2;
- (unsigned long long)supplyStrangerPubbleCellFrameFromTempForExpose:(unsigned long long)arg1 toExposeCellFrameList:(id)arg2;
- (id)innerGetNextPubbleCellListWithCellFrameList:(id)arg1;
- (id)getNextReusedOlyBarragePubbleCell;
- (void)configReuseCallbackForBarragePubbleCell:(id)arg1;
- (void)cacheBarragePubbleCellForReuse:(id)arg1;
- (id)pendingBarrageDataItemList;
- (id)friendBarragePubbleCellFrameList;
- (id)strangerBarragePubbleCellFrameList;
- (id)tempFriendBarragePubbleCellFrameList;
- (id)tempStrangerBarragePubbleCellFrameList;
- (id)lastExposeFriendBarragePubbleCellFrameSet;
- (id)lastExposeStrangerBarragePubbleCellFrameSet;
- (id)barrageIdSet;
- (id)barrageUniqueIdSet;
- (id)reusedBarragePubbleCellSet;
- (id)activityTask;
- (void)onFinderLiveOlyBarrageDataItemsUpdate:(id)arg1 taskId:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setPendingBarrageDataItemList:(id)arg1;
- (void)setFriendBarragePubbleCellFrameList:(id)arg1;
- (void)setStrangerBarragePubbleCellFrameList:(id)arg1;
- (void)setTempFriendBarragePubbleCellFrameList:(id)arg1;
- (long long)tempFriendBarrageLastIndex;
- (void)setTempFriendBarrageLastIndex:(long long)arg1;
- (void)setTempStrangerBarragePubbleCellFrameList:(id)arg1;
- (long long)tempStrangerBarrageLastIndex;
- (void)setTempStrangerBarrageLastIndex:(long long)arg1;
- (void)setLastExposeFriendBarragePubbleCellFrameSet:(id)arg1;
- (void)setLastExposeStrangerBarragePubbleCellFrameSet:(id)arg1;
- (void)setReusedBarragePubbleCellSet:(id)arg1;
- (void)setBarrageIdSet:(id)arg1;
- (void)setBarrageUniqueIdSet:(id)arg1;
- (unsigned long long)maxPendingBarrageItemCnt;
- (void)setMaxPendingBarrageItemCnt:(unsigned long long)arg1;
- (unsigned long long)barrageLayoutCalculatePerCnt;
- (void)setBarrageLayoutCalculatePerCnt:(unsigned long long)arg1;
- (double)barrageLayoutCalculateFrequence;
- (void)setBarrageLayoutCalculateFrequence:(double)arg1;
- (unsigned long long)maxCacheBarrageCellFrameCnt;
- (void)setMaxCacheBarrageCellFrameCnt:(unsigned long long)arg1;
- (unsigned long long)maxTempCacheBarrageCellFrameCnt;
- (void)setMaxTempCacheBarrageCellFrameCnt:(unsigned long long)arg1;
- (unsigned long long)maxReuseBarragePubbleCellCacheCnt;
- (void)setMaxReuseBarragePubbleCellCacheCnt:(unsigned long long)arg1;
- (unsigned long long)notifyBarrageDisplayMinCnt;
- (void)setNotifyBarrageDisplayMinCnt:(unsigned long long)arg1;
- (double)friendBarragePubbleCellPercent;
- (void)setFriendBarragePubbleCellPercent:(double)arg1;
- (double)strangerBarragePubbleCellPercent;
- (void)setStrangerBarragePubbleCellPercent:(double)arg1;
- (unsigned long long)friendBarragePubbleExposeContinueTimes;
- (void)setFriendBarragePubbleExposeContinueTimes:(unsigned long long)arg1;
- (unsigned long long)strangerBarragePubbleExposeContinueTimes;
- (void)setStrangerBarragePubbleExposeContinueTimes:(unsigned long long)arg1;
- (BOOL)isLayoutCalculating;
- (void)setIsLayoutCalculating:(BOOL)arg1;
- (BOOL)isEnableDisplayBarrage;
- (void)setIsEnableDisplayBarrage:(BOOL)arg1;
- (BOOL)hasNotifyDisplay;
- (void)setHasNotifyDisplay:(BOOL)arg1;
- (int)currExposeIndex;
- (void)setCurrExposeIndex:(int)arg1;
- (void).cxx_destruct;
@end

