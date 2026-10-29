@interface WeMagicPlatformToCpp : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<wemagic::WeMagicPlatformToCppCppCover> cpp_cover; // +0x80
    weak_ptr<wemagic::WeMagicPlatformToCppDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<wemagic::WeMagicPlatformToCppDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (unsigned long long)acquireSimpleBiz:(id)arg1;
- (int)preloadBiz:(unsigned long long)arg1 preloadConfig:(id)arg2;
- (void)activate:(unsigned long long)arg1;
- (void)deactivate:(unsigned long long)arg1;
- (void)resumeBiz:(unsigned long long)arg1;
- (void)pauseBiz:(unsigned long long)arg1;
- (void)onJsApiCallback:(unsigned long long)arg1 callbackId:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4 data:(id)arg5;
- (void)testEvaluateScriptAsync:(unsigned long long)arg1 script:(id)arg2 completion:(id /* block */)arg3;
- (void)testEvaluateScriptAsync:(unsigned long long)arg1 script:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)loadDataFromUrlAsync:(unsigned long long)arg1 url:(id)arg2 completion:(id /* block */)arg3;
- (void)loadDataFromUrlAsync:(unsigned long long)arg1 url:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)saveToWxFileAsync:(unsigned long long)arg1 path:(id)arg2 data:(id)arg3 completion:(id /* block */)arg4;
- (void)saveToWxFileAsync:(unsigned long long)arg1 path:(id)arg2 data:(id)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (id)getPhysicalFilePath:(unsigned long long)arg1 path:(id)arg2;
- (id)getPkgAppVersion:(id)arg1;
- (void)updateDisplayParams:(int)arg1 windowHeightDp:(int)arg2 pixelRatio:(float)arg3 deviceOrientation:(id)arg4;
- (void)notifyFontSizeChange:(float)arg1;
- (void)notifyColorModeChange:(BOOL)arg1;
- (void)notifyFontIdChange:(id)arg1;
- (void)notifyTeenModeChange:(BOOL)arg1;
- (void)notifyAppForegroundStateChange:(BOOL)arg1;
- (void)notifyAppLanguageChange:(id)arg1;
- (void)registerGlobalInfo:(id)arg1;
- (void)registerBizInfo:(id)arg1;
- (id)getGlobalInfo;
- (void)notifyRemotePkgUpdate:(id)arg1 version:(unsigned long long)arg2 path:(id)arg3;
- (void)resetRemotePkgPkgConfigCache;
- (id)checkBizValid:(id)arg1 minUdrPkgVersion:(int)arg2 ensurePkg:(BOOL)arg3 ensurePkgCallbackId:(int)arg4;
- (void)kvReportWithStr:(int)arg1 logStr:(id)arg2 useMmdataLogId:(BOOL)arg3;
- (void)kvReportWithItems:(int)arg1 logItems:(id)arg2 useMmdataLogId:(BOOL)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
