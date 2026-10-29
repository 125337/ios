@interface GameCenterJsService : MMObject <CNetworkStatusExt, WCMainWindowExt>
{
    GameCenterJSEventLogicHandler * _jsEventHandler; // +0x8
    NSString * _state; // +0x10
    JSContext * _jsContext; // +0x18
    JSVirtualMachine * _jsVirtualMachine; // +0x20
    NSMutableDictionary * _timerObjs; // +0x28
    NSThread * _thread; // +0x30
}
- (id)init;
- (void)startServerThread;
- (void)runThread:(id)arg1;
- (void)dealloc;
- (id)jsVirtualMachine;
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
- (void)evaluateScript:(id)arg1 scriptName:(id)arg2;
- (void)executeBlock:(id /* block */)arg1;
- (void)changeState:(id)arg1;
- (id)getNetType;
- (void)destroy;
- (void)stopThread;
- (void)releaseJsContext;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onSimCardNetTypeChange;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)jsContext;
- (void)setJsContext:(id)arg1;
- (void)setJsVirtualMachine:(id)arg1;
- (id)timerObjs;
- (void)setTimerObjs:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (void).cxx_destruct;
@end

