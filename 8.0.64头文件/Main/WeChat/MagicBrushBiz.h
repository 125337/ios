@interface MagicBrushBiz : NSObject <IMBExtraInfoDelegate, IMMFontMgrExt, NSCopying>
{
    NSString * _bizName; // +0x8
    unsigned long long _status; // +0x10
    NSMutableDictionary * _runtimeDict; // +0x18
    NSHashTable * _lifecycleListenerHashTable; // +0x20
    NSArray * _tempListenersArray; // +0x28
    MBRuntime * _mainRuntime; // +0x30
    UIView * _mainRuntimeView; // +0x38
    MBBuildConfig * _buildConfig; // +0x40
    MagicBrushService * _service; // +0x48
    NSString * _inherentBizName; // +0x50
    NSMutableDictionary * _pluginsDict; // +0x58
    NSMutableDictionary * _publicServicesDict; // +0x60
    double _createdTime; // +0x68
    MBReporter * _reporter; // +0x70
}
- (id)init;
- (id)description;
- (void)setup:(id)arg1;
- (void)destroy;
- (void)start;
- (id)buildExperimental;
- (int)getMaxRefreshRate;
- (void)pause;
- (void)resume;
- (void)evaluate:(id)arg1 callback:(id /* block */)arg2;
- (void)dispatch:(id)arg1 data:(id)arg2;
- (void)registerLifecycleListener:(id)arg1;
- (void)unregisterLifecycleListener:(id)arg1;
- (void)setMute:(BOOL)arg1;
- (id)extractNameFromSubContextId:(unsigned int)arg1;
- (void)notifyOnCreated;
- (void)notifyOnMainScriptInjected:(id)arg1;
- (void)notifyOnResume;
- (void)notifyOnPause;
- (void)notifyOnDestroy:(int)arg1;
- (void)notifyOnJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (id)getPublicServiceInfo:(id)arg1;
- (id)getPluginInfo:(id)arg1;
- (void)checkMagicBrushJson;
- (void)onLoad;
- (void)onError:(id)arg1 extra:(id)arg2;
- (id)getFileData:(id)arg1;
- (void)onTerminated:(id)arg1;
- (void)onCanvasCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasDestroyed:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasFrameChanged:(unsigned int)arg1 view:(id)arg2 frame:(CGRect)arg3;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (id)getAudioFilePath:(id)arg1;
- (void)onVConsoleLog:(id)arg1;
- (void)onSwitchVConsole:(BOOL)arg1;
- (id)getArrayBuffer:(unsigned int)arg1;
- (id)insertNativeArrayBufferWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (void)removeNativeArrayBuffer:(int)arg1;
- (void)onThemeChanged:(id)arg1;
- (void)onLanguageChanged:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)checkStatusUnavailable:(id)arg1;
- (void)onFontSizeChange;
- (id)getMBEnv;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (unsigned long long)status;
- (id)runtimeDict;
- (void)setRuntimeDict:(id)arg1;
- (id)lifecycleListenerHashTable;
- (void)setLifecycleListenerHashTable:(id)arg1;
- (id)tempListenersArray;
- (void)setTempListenersArray:(id)arg1;
- (id)mainRuntime;
- (void)setMainRuntime:(id)arg1;
- (id)mainRuntimeView;
- (void)setMainRuntimeView:(id)arg1;
- (id)buildConfig;
- (void)setBuildConfig:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (id)inherentBizName;
- (void)setInherentBizName:(id)arg1;
- (id)pluginsDict;
- (void)setPluginsDict:(id)arg1;
- (id)publicServicesDict;
- (void)setPublicServicesDict:(id)arg1;
- (double)createdTime;
- (void)setCreatedTime:(double)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
