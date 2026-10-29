@interface WebviewJSEventHandler_getWechatVerifyTicket : WebviewJSEventHandlerBase <PBMessageObserverDelegate>
{
    JSEvent * _jsEvent; // +0x8
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (void).cxx_destruct;
@end

