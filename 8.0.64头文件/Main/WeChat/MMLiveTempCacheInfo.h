@interface MMLiveTempCacheInfo : NSObject <WCFinderCreateCoordinatorDelegate>
{
    int _offlineScene; // +0x8
    unsigned long long _startScene; // +0x10
    unsigned long long _memberPrice; // +0x18
    WCFinderCreateCoordinator * _mountCreateCoordinator; // +0x20
    UIImage * _shoppingIconImageForNotifyMsg; // +0x28
    UIImage * _giftIconIconImageForSongList; // +0x30
    UIImage * _giftIconIconImageForGiftGoal; // +0x38
    NSMutableDictionary * _tempCacheInfoDict; // +0x40
    NSMutableDictionary * _globalImageResourceDict; // +0x48
}
- (void)cachePivotReplayFeedReqInfo:(id)arg1 forEntrcSrc:(long long)arg2;
- (void)unCachePivotReplayFeedReqInfoForEntrcSrc:(long long)arg1;
- (id)getCurrentCachePivotReplayFeedReqInfoForEntrcSrc:(long long)arg1;
- (void)cacheOlympicWinterTorchEventInfo:(id)arg1;
- (id)currentOlympicWinterTorchEventInfoCache;
- (void)removeOlympicWinterTorchEventInfoCache;
- (void)setCacheFinderBoxId:(id)arg1;
- (id)currentCacheFinderBoxId;
- (void)removeCacheFinderBoxId;
- (void)setCacheFinderBoxId:(id)arg1 forLiveId:(unsigned long long)arg2;
- (id)currentCacheFinderBoxIdForLiveId:(unsigned long long)arg1;
- (void)removeCacheFinderBoxIdForLiveId:(unsigned long long)arg1;
- (void)setSensitveWordMaxNum:(unsigned int)arg1;
- (unsigned int)sensitveWordMaxNum;
- (void)setRecommendReasonInfo:(id)arg1 forLiveId:(unsigned long long)arg2;
- (id)getRecommendReasonInfoWithLiveId:(unsigned long long)arg1;
- (void)clearRecommendReasonInfos;
- (void)attachCreateCoordinator:(id)arg1;
- (void)deAttachCreateCoordinator;
- (void)updateGlobalImageResource:(id)arg1;
- (id)getGlobalImageResource:(unsigned int)arg1;
- (void)cleanGlobalImageResources;
- (id)shoppingIconImageResource;
- (id)giftIconImageResource;
- (id)shoppingIconImageForNotifyMsg;
- (id)giftIconIconImageForSongList;
- (id)giftIconIconImageForGiftGoal;
- (id)getFinderBoxIdDictCache;
- (id)getRecommendReasonCache;
- (id)tempCacheInfoDict;
- (id)globalImageResourceDict;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (unsigned long long)startScene;
- (void)setStartScene:(unsigned long long)arg1;
- (int)offlineScene;
- (void)setOfflineScene:(int)arg1;
- (unsigned long long)memberPrice;
- (void)setMemberPrice:(unsigned long long)arg1;
- (id)mountCreateCoordinator;
- (void)setMountCreateCoordinator:(id)arg1;
- (void)setShoppingIconImageForNotifyMsg:(id)arg1;
- (void)setGiftIconIconImageForSongList:(id)arg1;
- (void)setGiftIconIconImageForGiftGoal:(id)arg1;
- (void)setTempCacheInfoDict:(id)arg1;
- (void)setGlobalImageResourceDict:(id)arg1;
- (void).cxx_destruct;
@end
