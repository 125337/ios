@interface LiteAppJsApiPCRemindMsg : LiteAppJsApi <BypSendPCRemindMessageProtocol>
{
    BypSendPCRemindMessageMgr * _sendMgr; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (BOOL)onSuccess;
- (BOOL)onFailed:(int)arg1 msg:(id)arg2;
- (id)sendMgr;
- (void)setSendMgr:(id)arg1;
- (void).cxx_destruct;
@end
