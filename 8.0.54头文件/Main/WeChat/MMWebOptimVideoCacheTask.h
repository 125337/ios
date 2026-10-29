@interface MMWebOptimVideoCacheTask : MMObject <PBMessageObserverDelegate, WCPlayerDownloaderExt>
{
    BOOL _isInitSuccess; // +0x8
    NSString * _taskId; // +0x10
    JSContext * _publicContext; // +0x18
    JSContext * _devContext; // +0x20
    JSVirtualMachine * _jsVirtualMachine; // +0x28
    VideoPreloadReporter * _reporter; // +0x30
    NSMutableDictionary * _getVUrlDict; // +0x38
}
- (id)initWithId:(id)arg1 jvm:(id)arg2;
- (void)dealloc;
- (id)identiferForUrl:(id)arg1;
- (void)startPrefetchWithUrl:(id)arg1 itemShowType:(unsigned int)arg2 withScene:(unsigned int)arg3;
- (BOOL)startGetVideoUrlFromPageUrl:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)internalInit;
- (void)setupPublicContext;
- (void)setupDevContext;
- (id)jsContextBridge;
- (void)setupJSErrorHandler:(id)arg1;
- (void)setupReportApiBlock:(id)arg1;
- (void)setupLogApiBlock:(id)arg1;
- (void)setupCommCgiApiBlock:(id)arg1;
- (void)setupUserAgent:(id)arg1;
- (void)setupCacheVideoBlock:(id)arg1;
- (void)setupGetVideoUrlFromMpUrlBlock:(id)arg1;
- (void)setupuseSameLayerForVideoBlock:(id)arg1;
- (void)setupGetNetworkTypeBlock:(id)arg1;
- (void)setupSetLocalDataBlock:(id)arg1;
- (void)setupGetLocalDataBlock:(id)arg1;
- (BOOL)injectPublicLib;
- (BOOL)injectManifestJS;
- (id)contextEvaluateScript:(id)arg1;
- (void)requestCommonCgi:(id)arg1 requestString:(id)arg2;
- (void)onResponseCommCgi:(id)arg1;
- (void)callCommCgiErrorEvent:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)callCommCgiResponseResult:(id)arg1 responseStr:(id)arg2 errMsg:(id)arg3;
- (void)callBackInvokeApiResult:(id)arg1 params:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (BOOL)isInitSuccess;
- (void)setIsInitSuccess:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)publicContext;
- (void)setPublicContext:(id)arg1;
- (id)devContext;
- (void)setDevContext:(id)arg1;
- (id)jsVirtualMachine;
- (void)setJsVirtualMachine:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)getVUrlDict;
- (void)setGetVUrlDict:(id)arg1;
- (void).cxx_destruct;
@end

