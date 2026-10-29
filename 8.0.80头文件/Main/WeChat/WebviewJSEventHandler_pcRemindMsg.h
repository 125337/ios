@interface WebviewJSEventHandler_pcRemindMsg : WebviewJSEventHandlerBase <BypSendPCRemindMessageProtocol>
{
    BypSendPCRemindMessageMgr * _sendMgr; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)onSuccess;
- (BOOL)onFailed:(int)arg1 msg:(id)arg2;
- (id)sendMgr;
- (void)setSendMgr:(id)arg1;
- (void).cxx_destruct;
@end
