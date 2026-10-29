@interface WxpayKitFeatureService : MMUserService <MMKernelExt, MMServiceProtocol, IWxpayKitFeatureService>
{
    BOOL _deferredTimerArmed; // +0x8
    NSObject<OS_dispatch_queue> * _stateQueue; // +0x10
    unsigned long long _readyState; // +0x18
    NSString * _lastReadyDetail; // +0x20
    unsigned long long _generation; // +0x28
    unsigned long long _deferredPreparationEpoch; // +0x30
    NSMutableArray * _readyWaiters; // +0x38
    WxpayLiteAppConfigEnvelopeQueue * _pendingConfigEnvelopes; // +0x40
    NSString * _kitRoot; // +0x48
    NSString * _engineRoot; // +0x50
    NSString * _payDebugDirectory; // +0x58
    WxpayLFSNetworkCapability * _networkCapability; // +0x60
    WxpayLFSSecureInputCapability * _secureInputCapability; // +0x68
    WxpayLFSPlatformCapability * _platformCapability; // +0x70
    NSMutableSet * _importedSideloads; // +0x78
    NSArray * _dynamicModuleCapabilities; // +0x80
    WxpayKitPresentationCoordinator * _presentationCoordinator; // +0x88
    id <WxpayRegistration> _eventRegistration; // +0x90
}
- (void)onServiceInit;
- (void)armDeferredPreparation;
- (void)onServiceAfterInit;
- (void)onAuthOK;
- (void)ensureReadyAllowRetry:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)registerAndPrepareGeneration:(unsigned long long)arg1;
- (void)finishReady:(id)arg1;
- (void)postConfigEnvelope:(id)arg1;
- (BOOL)configEnvelopeBelongsToCurrentAccount:(id)arg1;
- (void)flushPendingConfigEnvelope;
- (void)openPayDebugWithCompletion:(id /* block */)arg1;
- (void)importSideloadedPackagesWithCompletion:(id /* block */)arg1;
- (BOOL)hasActiveScene;
- (BOOL)isKitRuntimeAvailableForGate;
- (void)preloadScene:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)relayLegacyGlobalEvent:(id)arg1 appId:(id)arg2 params:(id)arg3;
- (id /* block */)kitCallEventRelayForJsApiCallback:(id)arg1;
- (void)fanOutGlobalEvent:(id)arg1 appId:(id)arg2 params:(id)arg3;
- (void)publishGlobalEventToKitScenes:(id)arg1 params:(id)arg2;
- (void)notifyKitScenesOccluded:(BOOL)arg1;
- (void)warmPayScene;
- (void)openScene:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)openScene:(id)arg1 params:(id)arg2 onCreated:(id /* block */)arg3 onKeepAlive:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)openScene:(id)arg1 params:(id)arg2 parentCallId:(long long)arg3 onCreated:(id /* block */)arg4 onKeepAlive:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)cancelKitCallId:(long long)arg1;
- (void)cancelKitCallIdAndAbove:(long long)arg1;
- (BOOL)isKitRuntimeReady;
- (void)attachScene:(id)arg1 params:(id)arg2 toView:(id)arg3 parentViewController:(id)arg4 onCreated:(id /* block */)arg5 onKeepAlive:(id /* block */)arg6 completion:(id /* block */)arg7;
- (id)getModuleInfo;
- (void)onServiceClearData;
- (id)stateQueue;
- (void)setStateQueue:(id)arg1;
- (unsigned long long)readyState;
- (void)setReadyState:(unsigned long long)arg1;
- (id)lastReadyDetail;
- (void)setLastReadyDetail:(id)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (BOOL)deferredTimerArmed;
- (void)setDeferredTimerArmed:(BOOL)arg1;
- (unsigned long long)deferredPreparationEpoch;
- (void)setDeferredPreparationEpoch:(unsigned long long)arg1;
- (id)readyWaiters;
- (void)setReadyWaiters:(id)arg1;
- (id)pendingConfigEnvelopes;
- (void)setPendingConfigEnvelopes:(id)arg1;
- (id)kitRoot;
- (void)setKitRoot:(id)arg1;
- (id)engineRoot;
- (void)setEngineRoot:(id)arg1;
- (id)payDebugDirectory;
- (void)setPayDebugDirectory:(id)arg1;
- (id)networkCapability;
- (void)setNetworkCapability:(id)arg1;
- (id)secureInputCapability;
- (void)setSecureInputCapability:(id)arg1;
- (id)platformCapability;
- (void)setPlatformCapability:(id)arg1;
- (id)importedSideloads;
- (void)setImportedSideloads:(id)arg1;
- (id)dynamicModuleCapabilities;
- (void)setDynamicModuleCapabilities:(id)arg1;
- (id)presentationCoordinator;
- (void)setPresentationCoordinator:(id)arg1;
- (id)eventRegistration;
- (void)setEventRegistration:(id)arg1;
- (void).cxx_destruct;
@end
