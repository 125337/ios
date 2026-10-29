@interface WCAgeSignalsBridgeSession : NSObject
{
    BOOL _completed; // +0x8
    JSEvent * _event; // +0x10
    WebViewJSLogicImpl * _jsLogic; // +0x18
    NSString * _contextID; // +0x20
    UIViewController * _viewController; // +0x28
    WebviewJSEventHandler_requestAgeSignals * _handler; // +0x30
    double _startedAt; // +0x38
}
- (void)completeWithResult:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (id)jsLogic;
- (void)setJsLogic:(id)arg1;
- (id)contextID;
- (void)setContextID:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (id)handler;
- (void)setHandler:(id)arg1;
- (double)startedAt;
- (void)setStartedAt:(double)arg1;
- (void).cxx_destruct;
@end
