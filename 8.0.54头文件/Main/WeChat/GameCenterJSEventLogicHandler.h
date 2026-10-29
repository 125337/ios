@interface GameCenterJSEventLogicHandler : NSObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate>
{
    GameCenterJsApiFacade * _jsapiFacade; // +0x8
    id <GameCenterJSEventLogicHandlerDelegate> _callDelegate; // +0x10
    NSMutableSet * _jsEventSet; // +0x18
}
- (id)init;
- (void)jsapiCallFromJSService:(id)arg1 params:(id)arg2 callbackId:(id)arg3;
- (id)jsEventWithFunction:(id)arg1 params:(id)arg2 callBackID:(id)arg3 eventInvokeContext:(id)arg4;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)GetCurrentWebviewViewController;
- (id)webviewController;
- (id)callDelegate;
- (void)setCallDelegate:(id)arg1;
- (id)jsEventSet;
- (void)setJsEventSet:(id)arg1;
- (void).cxx_destruct;
@end

