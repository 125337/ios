@interface WebViewJSEventHandler_openECard : WebviewJSEventHandlerBase <WCPayOpenECardControlLogicDelegate>
{
    JSEvent * _jsEvent; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)failToOpenECard;
- (void)succToOpenECard;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (void).cxx_destruct;
@end
