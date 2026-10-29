@interface MMFinderLiveInfoPollingMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _cacheItems; // +0x8
}
- (void)getLiveInfoWithParams:(id)arg1 overrideCache:(BOOL)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)onServiceInit;
- (void)getLiveInfoWithParams:(id)arg1 referenceId:(id)arg2 overrideCache:(BOOL)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)cacheItems;
- (void)setCacheItems:(id)arg1;
- (void).cxx_destruct;
@end

