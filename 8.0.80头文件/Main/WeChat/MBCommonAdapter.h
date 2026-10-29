@interface MBCommonAdapter : NSObject <WCMainWindowExt, IMMLanguageMgrExt, IMBProfilerDelegate, wxAudioFileLoaderDelegate, IMBJsApiDelegate, WAJSEventHandlerContextDelegate, IMBStorage, IMBNetwork, IMBLifecycle, WAJSServicePluginContextProtocol>
{
    BOOL _isDebug; // +0x8
    NSString * _mainScriptName; // +0x10
    id <MBCommonAdapterDelegate> _delegate; // +0x18
    id <IMBExtraInfoDelegate> _extraInfoDelegate; // +0x20
    id <IMBFileSystem> _fs; // +0x28
    MagicBrushBiz * _biz; // +0x30
    MBBuildConfig * _config; // +0x38
    NSString * _packagePath; // +0x40
    NSMutableDictionary * _handlerDict; // +0x48
    NSMutableDictionary * _weAppPluginName2InstanceDic; // +0x50
}
- (id)init;
- (id)initWithBiz:(id)arg1;
- (void)dealloc;
- (id)createBuildConfig;
- (void)onPause;
- (void)onDestroy:(int)arg1;
- (id)getLocalData:(id)arg1 otherBizName:(id)arg2 key:(id)arg3;
- (id)setLocalData:(id)arg1 otherBizName:(id)arg2 key:(id)arg3 data:(id)arg4 dataType:(id)arg5;
- (id)getLocalDataSize:(id)arg1;
- (id)clearLocalData:(id)arg1 otherBizName:(id)arg2;
- (id)getLocalDataAllKeys:(id)arg1 otherBizName:(id)arg2;
- (id)removeLocalData:(id)arg1 otherBizName:(id)arg2 key:(id)arg3;
- (id)genTaskId:(id)arg1;
- (void)doNetWork:(id)arg1 taskID:(id)arg2 funcName:(id)arg3 url:(id)arg4 httpHeaders:(id)arg5 context:(id)arg6 completionHandler:(id /* block */)arg7 headerHandler:(id /* block */)arg8 progressHandler:(id /* block */)arg9;
- (BOOL)abortTask:(id)arg1 taskID:(id)arg2 funcName:(id)arg3 error:(id *)arg4;
- (id)transformJsApiName:(id)arg1;
- (void)invoke:(id)arg1 param:(id)arg2 callbackId:(unsigned long long)arg3 privateArgs:(id)arg4;
- (void)onExtJsApiAdded:(id)arg1 name:(id)arg2 isSync:(BOOL)arg3;
- (id)getAppId;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getWAContact;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (unsigned int)getDebugModeType;
- (unsigned int)getAppType;
- (unsigned long long)getAppVersion;
- (unsigned long long)getEnvironmentType;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)createPluginInstanceIfNotExsist:(id)arg1;
- (id)sourceOpenSDKAppID;
- (id)getEventHandler:(id)arg1;
- (id)fixNoErrorCode:(id)arg1;
- (void)alterWillStop;
- (id)context;
- (id)currentWebView;
- (id)getAudioNative;
- (id)getCurPubResLogic;
- (id)getWeMediaApi;
- (void)initGameEngine;
- (void)initWASM:(id)arg1;
- (id)instanceId;
- (void)invokeOnServiceThread:(id /* block */)arg1;
- (BOOL)performOnService:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (id)pluginScheduler;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 webViewId:(unsigned int)arg3;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)onLanguageChange;
- (id)getAudioFilePath:(id)arg1;
- (void)sendViaAirDrop:(id)arg1;
- (id)findTopVC;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (id)getArrayBuffer:(unsigned int)arg1;
- (id)insertNativeArrayBufferWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (void)removeNativeArrayBuffer:(int)arg1;
- (id)mainScriptName;
- (void)setMainScriptName:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)extraInfoDelegate;
- (void)setExtraInfoDelegate:(id)arg1;
- (id)fs;
- (void)setFs:(id)arg1;
- (id)biz;
- (void)setBiz:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)isDebug;
- (void)setIsDebug:(BOOL)arg1;
- (id)packagePath;
- (void)setPackagePath:(id)arg1;
- (id)handlerDict;
- (void)setHandlerDict:(id)arg1;
- (id)weAppPluginName2InstanceDic;
- (void)setWeAppPluginName2InstanceDic:(id)arg1;
- (void).cxx_destruct;
@end
