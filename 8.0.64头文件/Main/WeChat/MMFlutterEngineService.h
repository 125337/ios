@interface MMFlutterEngineService : MMRootService <MMServiceProtocol>
{
    BOOL _recreateEngineGroup; // +0x8
    BOOL _receivePerfWarning; // +0x9
    BOOL _swapMemOnStart; // +0xa
    BOOL _syncToFileInBackground; // +0xb
    BOOL _swapMemInBackground; // +0xc
    MMFlutterEngineGroup * _sharedEngineGroup; // +0x10
    MMFlutterAutoReleaseEngineGroupHelper * _autoReleaseHelper; // +0x18
    DartServiceCallerApi * _dartServiceCaller; // +0x20
}
+ (BOOL)reportEngineInfo;
- (void)onServiceInit;
- (void)initQosControl;
- (void)onServiceTerminate;
- (id)getSharedEngineGroup;
- (id)getDartServiceCaller;
- (int)liveEngineCount;
- (int)foregroundType;
- (void)updateFlutterUIContext;
- (void)onAccountLogout;
- (void)createSharedEngineGroup;
- (void)checkRecreate;
- (void)tryReleaseEngineGroup;
- (void)tryReleaseEngineGroup:(long long)arg1;
- (void)_tryReleaseEngineGroup:(long long)arg1 destroy:(BOOL)arg2;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceEnterForeground;
- (BOOL)enableNewPreRender;
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
- (BOOL)recreateEngineGroup;
- (void)setRecreateEngineGroup:(BOOL)arg1;
- (BOOL)receivePerfWarning;
- (void)setReceivePerfWarning:(BOOL)arg1;
- (BOOL)swapMemOnStart;
- (void)setSwapMemOnStart:(BOOL)arg1;
- (BOOL)syncToFileInBackground;
- (void)setSyncToFileInBackground:(BOOL)arg1;
- (BOOL)swapMemInBackground;
- (void)setSwapMemInBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end
