@interface WAJSContextPluginBase : MMObject <IWAJSContextPluginProtocol>
{
    BOOL _usingLocation; // +0x8
    BOOL _usingLocationBackground; // +0x9
    BOOL _isRecording; // +0xa
    BOOL _usingBluetoothBackground; // +0xb
    id <WAJSServicePluginContextProtocol> _serviceContext; // +0x10
    id <WAJSServicePluginContextProtocol> _context; // +0x18
    unsigned long long _runningState; // +0x20
    unsigned long long _taskRunningState; // +0x28
    WAJSContextPluginDelegateCenter * _delegateCenter; // +0x30
    NSString * _boundEnvVersion; // +0x38
    NSString * _boundAppId; // +0x40
}
- (id)init;
- (void)setUsingLocation:(BOOL)arg1;
- (void)setUsingLocationBackground:(BOOL)arg1;
- (void)setIsRecording:(BOOL)arg1;
- (void)setDelegateCenterProtocol:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)setJSContextOwner:(id)arg1;
- (void)setBoundAppId:(id)arg1;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)getAppID;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (void)pluginDidCreated;
- (id)serviceContext;
- (void)setServiceContext:(id)arg1;
- (id)context;
- (unsigned long long)runningState;
- (void)setRunningState:(unsigned long long)arg1;
- (unsigned long long)taskRunningState;
- (void)setTaskRunningState:(unsigned long long)arg1;
- (id)delegateCenter;
- (void)setDelegateCenter:(id)arg1;
- (BOOL)usingLocation;
- (BOOL)usingLocationBackground;
- (BOOL)isRecording;
- (BOOL)usingBluetoothBackground;
- (void)setUsingBluetoothBackground:(BOOL)arg1;
- (id)boundEnvVersion;
- (void)setBoundEnvVersion:(id)arg1;
- (id)boundAppId;
- (void).cxx_destruct;
@end
