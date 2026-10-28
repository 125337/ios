@interface MMWebOptimJSContextTask : MMObject <PBMessageObserverDelegate>
{
    NSString * _taskId; // +0x8
    JSContext * _publicContext; // +0x10
    JSContext * _devContext; // +0x18
    JSVirtualMachine * _jsVirtualMachine; // +0x20
    MMWebOptimJSContextTaskConfig * _config; // +0x28
}
- (id)initWithConfig:(id)arg1 jvm:(id)arg2;
- (void)dealloc;
- (id)taskId;
- (BOOL)isSupportPrefetchForUrl:(id)arg1 extInfo:(id)arg2;
- (id)identiferForUrl:(id)arg1;
- (id)prefetchResArrForUrl:(id)arg1;
- (void)internalInit;
- (void)setupPublicContext;
- (void)setupDevContext;
- (id)jsContextBridge;
- (void)setupJSErrorHandler:(id)arg1;
- (void)setupReportApiBlock:(id)arg1;
- (void)setupLogApiBlock:(id)arg1;
- (void)setupCommCgiApiBlock:(id)arg1;
- (void)setupAddCachesApiBlock:(id)arg1;
- (BOOL)injectPublicLib;
- (void)injectMainifestJS;
- (id)contextEvaluateScript:(id)arg1;
- (void)requestCommonCgi:(id)arg1 requestString:(id)arg2;
- (void)onResponseCommCgi:(id)arg1;
- (void)callCommCgiErrorEvent:(id)arg1 errorType:(int)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)callCommCgiResponseResult:(id)arg1 responseStr:(id)arg2;
- (void)callBackInvokeApiResult:(id)arg1 params:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)setTaskId:(id)arg1;
- (id)publicContext;
- (void)setPublicContext:(id)arg1;
- (id)devContext;
- (void)setDevContext:(id)arg1;
- (id)jsVirtualMachine;
- (void)setJsVirtualMachine:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
