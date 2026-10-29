@interface MagicZidlCppToPlatformCaller : NSObject <WeMagicCppToPlatformBase>
{
    MBJsApiAdapterManager * _jsapiAdapterMgr; // +0x8
    MBLifecycleListenerManager * _lifecycleListenerMgr; // +0x10
    MBViewDelegateManager * _viewDelegateMgr; // +0x18
    NSMapTable * _vConsoleMap; // +0x20
    NSObject<OS_dispatch_queue> * _vConsoleQueue; // +0x28
    WeMagicCppToPlatformCallback * _callback; // +0x30
}
+ (id)sharedInstance;
+ (void)registerLifecycleListener:(unsigned long long)arg1 listener:(id)arg2;
+ (void)registerJsApiAdapter:(unsigned long long)arg1 adapter:(id)arg2;
+ (void)unregisterJsApiAdapter:(unsigned long long)arg1;
+ (void)registerVConsoleDelegate:(unsigned long long)arg1 delegate:(id)arg2;
+ (void)unregisterVConsoleDelegate:(unsigned long long)arg1;
+ (void)registerViewDelegate:(id)arg1 delegate:(id)arg2;
+ (void)unregisterViewDelegate:(id)arg1;
- (id)init;
- (id)jsapiMgr;
- (id)lifecycleMgr;
- (id)viewMgr;
- (void)setVConsoleDelegate:(id)arg1 forEnvId:(unsigned long long)arg2;
- (id)vConsoleDelegateForEnvId:(unsigned long long)arg1;
- (void)setCallback:(id)arg1;
- (void)onBizDestroyAsync:(unsigned long long)arg1 envId:(unsigned long long)arg2;
- (void)onCanvasCreateAsync:(unsigned long long)arg1 viewId:(id)arg2 canvasId:(unsigned long long)arg3;
- (void)onCanvasLayoutAsync:(unsigned long long)arg1 viewId:(id)arg2 canvasId:(unsigned long long)arg3 left:(float)arg4 top:(float)arg5 width:(float)arg6 height:(float)arg7 zIndex:(int)arg8;
- (void)onCanvasDestroyAsync:(unsigned long long)arg1 viewId:(id)arg2 canvasId:(unsigned long long)arg3;
- (void)onCanvasFirstFrameRenderedAsync:(unsigned long long)arg1 viewId:(id)arg2 canvasId:(unsigned long long)arg3;
- (void)invokeJsApiAsync:(unsigned long long)arg1 bizId:(unsigned long long)arg2 apiName:(id)arg3 apiData:(id)arg4 callbackId:(unsigned long long)arg5;
- (void)onCheckBizValidCallbackAsync:(unsigned long long)arg1 callbackId:(int)arg2 success:(BOOL)arg3;
- (void)onVConsoleJsLogAsync:(unsigned long long)arg1 bizId:(unsigned long long)arg2 str:(id)arg3;
- (void)onVConsoleSwitchChangeAsync:(unsigned long long)arg1 bizId:(unsigned long long)arg2 enable:(BOOL)arg3;
- (id)callback;
- (void).cxx_destruct;
@end
