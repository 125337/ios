@interface WCFinderGetDetailCacheMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _cache; // +0x8
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)hasCachedDataWithTid:(id)arg1;
- (BOOL)cachedDataIsExpireWithTid:(id)arg1;
- (double)getCachedTimeWithTid:(id)arg1;
- (BOOL)getCachedResultWithTid:(id)arg1;
- (id)getCachedInvalideMsgWithTid:(id)arg1;
- (id)getCachedDataWithTid:(id)arg1;
- (void)markTidGetDetailOnceWithTid:(id)arg1 result:(BOOL)arg2;
- (void)markTidGetDetailOnceWithTid:(id)arg1 result:(BOOL)arg2 invalideMsg:(id)arg3;
- (id)cache;
- (void)setCache:(id)arg1;
- (void).cxx_destruct;
@end

