@interface KindaLiteMgr : NSObject
{
    BOOL _starting; // +0x8
    BOOL _storePreloaded; // +0x9
    NSMutableArray * _kindaLiteUseCaseCache; // +0x10
    NSString * _cachedSessionId; // +0x18
    NSMutableArray * _startQueue; // +0x20
}
- (id)kindaLiteUseCaseCache;
- (id)startQueue;
- (id)genSession;
- (id)getOrCreateSession;
- (id)lastUseCase;
- (void)compactKindaLiteUseCaseCache;
- (void)processNext;
- (void)reportAppPayQueueFunnel:(long long)arg1 url:(id)arg2 data:(id)arg3;
- (void)ensureStoreCreated;
- (id)startKindaLiteUseCase:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (void)setReportGlobalData:(id)arg1 data:(id)arg2 versions:(id)arg3;
- (void)reportNativeStartUseCaseEntry:(id)arg1 data:(id)arg2;
- (id)findDuplicatePayUseCase:(id)arg1 data:(id)arg2;
- (BOOL)shouldReplaceCashierInState:(long long)arg1 url:(id)arg2 data:(id)arg3;
- (BOOL)allowsDuplicatePayAfterPaySuccess:(id)arg1 data:(id)arg2;
- (BOOL)allowsMultiCashierCoexist:(id)arg1 data:(id)arg2;
- (BOOL)isPaying;
- (void)stopDuplicateAndContinue:(id)arg1 task:(id)arg2 onContinue:(id /* block */)arg3;
- (BOOL)kindaLiteUseCaseExist;
- (id)currentSessionId;
- (id)kitUseCaseForSessionId:(id)arg1;
- (void)preload;
- (void)preloadAtOnce;
- (void)preloadCashierWithEntry:(id)arg1;
- (void)setKindaLiteUseCaseCache:(id)arg1;
- (id)cachedSessionId;
- (void)setCachedSessionId:(id)arg1;
- (void)setStartQueue:(id)arg1;
- (BOOL)starting;
- (void)setStarting:(BOOL)arg1;
- (BOOL)storePreloaded;
- (void)setStorePreloaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
