@interface WAJSEventHandler_openRedPacket : WAJSEventHandler_BaseEvent <WARedEnvelopesOpenLogicDelegate>
{
    WARedEnvelopesOpenLogic * m_openLogic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onWARedEnvelopesOpenLogicBack;
- (void)onWARedEnvelopesOpenLogicError:(id)arg1 errCode:(long long)arg2;
- (void)onWARedEnvelopesOpenLogicComplete;
- (void).cxx_destruct;
@end
