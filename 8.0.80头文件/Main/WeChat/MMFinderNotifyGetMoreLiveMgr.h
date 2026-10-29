@interface MMFinderNotifyGetMoreLiveMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _getMoreLiveCacheRespDict; // +0x8
    NSMutableSet * _requestingGetMoreLiveKeys; // +0x10
    NSArray * _liveIDArray; // +0x18
    NSMutableDictionary * _getLiveInfoRespCacheDict; // +0x20
    unsigned long long _maxRequestCount; // +0x28
    unsigned long long _currentRequestCount; // +0x30
    WCFinderLiveHomePageViewController * _homePageVC; // +0x38
    unsigned long long _homePageVCRelatedRequestId; // +0x40
    unsigned long long _homePageVCLastLeaveTs; // +0x48
    MMTimer * _homePageVCCacheTimer; // +0x50
}
+ (id)uniqueKeyWithObjectId:(id)arg1 tipsId:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)requestMoreLiveWithObjectID:(id)arg1 cacheKey:(id)arg2 reportExtInfo:(id)arg3 noticeType:(unsigned int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)clearExipredCacheWithKey:(id)arg1;
- (BOOL)isCacheStillValid:(id)arg1;
- (void)recordEnterServiceMsgPageWithLiveIdArray:(id)arg1;
- (void)recordGetLiveInfoResp:(id)arg1;
- (void)markGetLiveInfoRespFailedWithLiveId:(unsigned long long)arg1;
- (void)removeGetLiveInfoRespCacheWithLiveId:(unsigned long long)arg1;
- (void)clearAllGetLiveInfoRespCache;
- (id)getMoreLiveResponseWithUniqueKey:(id)arg1;
- (void)liveHomePageVCDidLeave:(id)arg1;
- (void)jumpWithMoreLiveInfo:(id)arg1 key:(id)arg2 liveId:(id)arg3 chnlExtra:(id)arg4;
- (void)scheduleHomePageVCCacheTimerIfNeeded;
- (void)invalidateHomePageVCCacheTimer;
- (void)createHomePageVCIfNeededWithMoreLiveInfo:(id)arg1 liveId:(id)arg2;
- (void)releaseHomePageVCCacheOnTimeout;
- (BOOL)releaseHomePageVCCache;
- (void)setupRequestLimitWithResp:(id)arg1;
- (void)getMoreLiveIfNeeded;
- (void)preloadHomePageVCIfNeededWithMoreLiveResp:(id)arg1 liveId:(id)arg2;
- (id)getMoreLiveCacheRespDict;
- (void)setGetMoreLiveCacheRespDict:(id)arg1;
- (id)requestingGetMoreLiveKeys;
- (void)setRequestingGetMoreLiveKeys:(id)arg1;
- (id)liveIDArray;
- (void)setLiveIDArray:(id)arg1;
- (id)getLiveInfoRespCacheDict;
- (void)setGetLiveInfoRespCacheDict:(id)arg1;
- (unsigned long long)maxRequestCount;
- (void)setMaxRequestCount:(unsigned long long)arg1;
- (unsigned long long)currentRequestCount;
- (void)setCurrentRequestCount:(unsigned long long)arg1;
- (id)homePageVC;
- (void)setHomePageVC:(id)arg1;
- (unsigned long long)homePageVCRelatedRequestId;
- (void)setHomePageVCRelatedRequestId:(unsigned long long)arg1;
- (unsigned long long)homePageVCLastLeaveTs;
- (void)setHomePageVCLastLeaveTs:(unsigned long long)arg1;
- (id)homePageVCCacheTimer;
- (void)setHomePageVCCacheTimer:(id)arg1;
- (void).cxx_destruct;
@end
