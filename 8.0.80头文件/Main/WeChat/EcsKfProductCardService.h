@interface EcsKfProductCardService : MMUserService <IMsgExt, BaseMsgViewControllerExt, MMServiceProtocol>
{
    EcsKfProductCardStorage * _storage; // +0x8
    EcsKfProductCardMemCache * _memCache; // +0x10
    EcsKfProductCardFetcher * _fetcher; // +0x18
    EcsKfProductCardWarmer * _warmer; // +0x20
    EcsKfProductCardRefresher * _refresher; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)cachedConvertResultForTalker:(id)arg1 msgSvrId:(long long)arg2;
- (void)refreshConvertResultWithTalker:(id)arg1 msgSvrId:(long long)arg2 msgCreateTime:(long long)arg3 initialConvertResult:(id)arg4 onUpdate:(id /* block */)arg5;
- (void)warmForTalker:(id)arg1;
- (void)cleanupDiskCacheIfNeeded;
- (void)removeCacheForTalker:(id)arg1 msgSvrId:(long long)arg2;
- (void)removeCacheByTalker:(id)arg1;
- (BOOL)isKfTalker:(id)arg1;
- (BOOL)isValidMsgWrapForCache:(id)arg1;
- (void)onWillEnterBaseMsgSession:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (id)storage;
- (void)setStorage:(id)arg1;
- (id)memCache;
- (void)setMemCache:(id)arg1;
- (id)fetcher;
- (void)setFetcher:(id)arg1;
- (id)warmer;
- (void)setWarmer:(id)arg1;
- (id)refresher;
- (void)setRefresher:(id)arg1;
- (void).cxx_destruct;
@end
