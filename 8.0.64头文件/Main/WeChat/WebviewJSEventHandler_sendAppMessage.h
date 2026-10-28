@interface WebviewJSEventHandler_sendAppMessage : WebviewJSEventHandlerBase
{
    SendAppMessageBaseImpl * _sendMessageImpl; // +0x8
}
- (id)sendMessageImpl;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)setSendMessageImpl:(id)arg1;
- (void).cxx_destruct;
@end
