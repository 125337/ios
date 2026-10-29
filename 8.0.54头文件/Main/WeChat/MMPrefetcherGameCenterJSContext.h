@interface MMPrefetcherGameCenterJSContext : MMObject <GameCenterJSEventLogicHandlerDelegate, WCMainWindowExt>
{
    JSContext * _jsContext; // +0x8
    JSVirtualMachine * _jsVirtualMachine; // +0x10
    NSMutableDictionary * _timerObjs; // +0x18
    NSThread * _thread; // +0x20
    GameCenterJSEventLogicHandler * _jsEventHandler; // +0x28
}
- (id)initWithJSVM:(id)arg1;
- (void)startServerThread;
- (void)runThread:(id)arg1;
- (void)setupJSErrorHandler;
- (void)initJsApi;
- (void)attachNativeMethod;
- (void)setupJsApiInvoke:(id)arg1;
- (void)setupTimerHandler:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(BOOL)arg3;
- (void)onTimer:(id)arg1;
- (void)injectSystemInfo;
- (void)injectJsbridge;
- (void)injectPublicLib;
- (void)evaluateScript:(id)arg1;
- (void)evaluate:(id)arg1;
- (void)changeState:(id)arg1;
- (id)getNetType;
- (void)destroy;
- (void)stopThread;
- (void)releaseJsContext;
- (void)processCallbackFromNative:(id)arg1 callbackId:(id)arg2;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (id)jsContext;
- (void)setJsContext:(id)arg1;
- (id)jsVirtualMachine;
- (void)setJsVirtualMachine:(id)arg1;
- (id)timerObjs;
- (void)setTimerObjs:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (id)jsEventHandler;
- (void)setJsEventHandler:(id)arg1;
- (void).cxx_destruct;
@end

