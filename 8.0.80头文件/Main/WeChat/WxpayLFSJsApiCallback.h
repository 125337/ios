@interface WxpayLFSJsApiCallback : LiteAppJsApiCallback
{
    unsigned int _sessionLocalId; // +0x8
    id /* block */ _reply; // +0x10
    unsigned long long _kitCallId; // +0x18
    NSString * _kitScene; // +0x20
}
- (void)fail:(id)arg1 data:(id)arg2 keepAlive:(BOOL)arg3;
- (void)fail:(id)arg1 keepAlive:(BOOL)arg2;
- (void)fail:(id)arg1;
- (void)fail:(id)arg1 data:(id)arg2;
- (void)succes:(id)arg1 keepAlive:(BOOL)arg2;
- (void)succes:(id)arg1;
- (id /* block */)reply;
- (void)setReply:(id /* block */)arg1;
- (unsigned int)sessionLocalId;
- (void)setSessionLocalId:(unsigned int)arg1;
- (unsigned long long)kitCallId;
- (void)setKitCallId:(unsigned long long)arg1;
- (id)kitScene;
- (void)setKitScene:(id)arg1;
- (void).cxx_destruct;
@end
