@interface WAJSEventHandler_sendBizRedPacket : WAJSEventHandler_BaseEvent <WCRedEnvWeAppDelegate>
{
    NSDictionary * _dicParam; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)getRedEnvParam;
- (void)onRedEnvSuccess:(id)arg1;
- (void)onRedEnvCancel;
- (void)onRedEnvFail:(id)arg1;
- (id)dicParam;
- (void)setDicParam:(id)arg1;
- (void).cxx_destruct;
@end
