@interface MagicEcsNirvanaService : MMUserService <MMServiceProtocol>
{
    BOOL _enableNirvanaH5PlusExpt; // +0x8
    NSObject<OS_dispatch_queue> * _nirQueue; // +0x10
    NSMutableDictionary * _udrCompletionHandlers; // +0x18
    NSLock * _handlerLock; // +0x20
    long long _shouldPreloadBiz; // +0x28
    long long _highFPSDisable; // +0x30
    long long _earlyOMGDisable; // +0x38
    NSMutableDictionary * _bizHolders; // +0x40
}
- (void)onServiceInit;
- (BOOL)isHighFPSEnabled;
- (BOOL)isEarlyOMGOptimizationEnabled;
- (BOOL)isNirvanaH5PlusEnabled;
- (BOOL)useSkwasmMode:(id)arg1;
- (void)onServiceClearData;
- (id)createBizHolderWithMBAppInfo:(id)arg1;
- (void)startBizWithMBAppInfo:(id)arg1;
- (id)bindBizWithMBAppInfo:(id)arg1 viewController:(id)arg2 viewDelegate:(id)arg3 vConsoleParent:(id)arg4;
- (void)deactivateBiz:(id)arg1;
- (void)removeBizHolderForBiz:(id)arg1;
- (void)attachVConsoleForHolder:(id)arg1 toParent:(id)arg2;
- (void)detachVConsoleForHolder:(id)arg1;
- (id)canvasViewForBiz:(id)arg1;
- (BOOL)isBizAlive:(id)arg1;
- (BOOL)shouldOpenWithNirvana:(id)arg1;
- (BOOL)enablePreloadBiz;
- (unsigned long long)preloadCacheTimeForMBAppInfo:(id)arg1;
- (void)removePreloadHolder:(id)arg1 forBizName:(id)arg2;
- (void)preload:(id)arg1;
- (void)preloadOnMainThread:(id)arg1;
- (void)checkBizValid:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isLatestUdrPkg:(id)arg1;
- (void)updateLatestBizUdrPkg:(id)arg1 completion:(id /* block */)arg2;
- (id)nirQueue;
- (void)setNirQueue:(id)arg1;
- (id)udrCompletionHandlers;
- (void)setUdrCompletionHandlers:(id)arg1;
- (id)handlerLock;
- (void)setHandlerLock:(id)arg1;
- (long long)shouldPreloadBiz;
- (void)setShouldPreloadBiz:(long long)arg1;
- (long long)highFPSDisable;
- (void)setHighFPSDisable:(long long)arg1;
- (long long)earlyOMGDisable;
- (void)setEarlyOMGDisable:(long long)arg1;
- (BOOL)enableNirvanaH5PlusExpt;
- (void)setEnableNirvanaH5PlusExpt:(BOOL)arg1;
- (id)bizHolders;
- (void)setBizHolders:(id)arg1;
- (void).cxx_destruct;
@end
