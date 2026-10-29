@interface WCSnsLocalCacheMgr : MMObject
{
    BOOL m_hadLoadedCache; // +0x8
    NSMutableDictionary * m_dicLocalCache; // +0x10
}
- (void)clearDelayShowInfoCache;
- (void)setDelayShowInfoNeedDelay:(id)arg1;
- (void)setShowTime:(unsigned int)arg1 WithFeedId:(id)arg2;
- (id)getSnsOperationsWithFeedId:(id)arg1;
- (id)getSnsOperationWrapWithFeedId:(id)arg1;
- (void)updateOperationsWithFeedId:(id)arg1 createTime:(unsigned int)arg2 snsOperations:(id)arg3;
- (void)mergeSnsOperationsWithFeedId:(id)arg1 feedCreateTime:(unsigned int)arg2 snsOperationsData:(id)arg3;
- (void)saveSnsLocalCache;
- (void)callServiceInit;
- (void)callServiceEnterBackground;
- (void)callServiceTerminate;
- (void)callServiceMemoryWarning;
- (id)pathForDicLocalCache;
- (void)tryLoadDicLocalCache;
- (void)saveDicLocalCache;
- (void).cxx_destruct;
@end
