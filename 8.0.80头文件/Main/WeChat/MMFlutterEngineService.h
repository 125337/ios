@interface MMFlutterEngineService : MMRootService <MMServiceProtocol>
{
    BOOL _receivePerfWarning; // +0x8
    MMFlutterEngineGroup * _sharedEngineGroup; // +0x10
    MMFlutterAutoReleaseEngineGroupHelper * _autoReleaseHelper; // +0x18
    DartServiceCallerApi * _dartServiceCaller; // +0x20
    NSMutableDictionary * _flutterApi; // +0x28
}
+ (BOOL)reportEngineInfo;
- (void)onServiceInit;
- (void)initQosControl;
- (void)onServiceTerminate;
- (id)getSharedEngineGroup;
- (id)getDartServiceCaller;
- (id)getFlutterApi:(Class)arg1;
- (id)getRootBinaryMessenger;
- (void)registerDartService:(id)arg1;
- (void)unregisterDartService:(id)arg1;
- (int)liveEngineCount;
- (int)foregroundType;
- (void)updateFlutterUIContext;
- (void)onAccountLogout;
- (void)createSharedEngineGroup;
- (void)tryReleaseEngineGroup;
- (void)tryReleaseEngineGroup:(long long)arg1;
- (void)_tryReleaseEngineGroup:(long long)arg1;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceEnterForeground;
- (BOOL)enableNewPreRender;
- (BOOL)enableOffscreenFramePreRender;
- (void)handlePerfWarningNotification:(id)arg1;
- (void)processPowerModeChange;
- (void)delayResumeEngineQos;
- (void)reportQosChanged:(long long)arg1 isReceiveLowPowerModeChanged:(BOOL)arg2 isReceiveMatrixPerfWarning:(BOOL)arg3 matrixPerfWarningType:(int)arg4;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)swapMemToFile:(BOOL)arg1;
- (void)swapMemFromFile:(BOOL)arg1;
- (id)sharedEngineGroup;
- (void)setSharedEngineGroup:(id)arg1;
- (id)autoReleaseHelper;
- (void)setAutoReleaseHelper:(id)arg1;
- (id)dartServiceCaller;
- (void)setDartServiceCaller:(id)arg1;
- (BOOL)receivePerfWarning;
- (void)setReceivePerfWarning:(BOOL)arg1;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (void).cxx_destruct;
@end
