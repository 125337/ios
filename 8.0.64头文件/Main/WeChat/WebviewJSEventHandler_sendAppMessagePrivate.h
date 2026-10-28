@interface WebviewJSEventHandler_sendAppMessagePrivate : WebviewJSEventHandlerBase
{
    SendAppMessageBaseImpl * _sendMessageImpl; // +0x8
}
- (id)sendMessageImpl;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)setupMessageWrap:(id)arg1 forEvent:(id)arg2;
- (void)setSendMessageImpl:(id)arg1;
- (void).cxx_destruct;
@end
