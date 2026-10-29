@interface MMLiveResourceFetcherLegacyApiAdapter : NSObject
{
    MMLiveResourceFetcherRootFlowAction * _rootAction; // +0x8
}
- (id)init;
- (unsigned long long)pendingTaskCount;
- (void)start:(id)arg1 fileMD5:(id)arg2 enforceIntegrityCheck:(BOOL)arg3 pathManager:(id)arg4 completion:(id /* block */)arg5;
- (id)rootAction;
- (void)setRootAction:(id)arg1;
- (void).cxx_destruct;
@end
