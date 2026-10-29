@interface _TtC6WeChat25ChatBotAsstVoIPLCKManager : MMUserService <MMServiceProtocol>
{
     conversationManager; // +0x8
     conversation; // +0x10
     update; // +0x18
     currentUUID; // +0x38
     haveAProcessingCall; // +0x48
     haveAcceptedCall; // +0x49
     isEnding; // +0x4a
     hasJoined; // +0x4b
     acceptedCalled; // +0x4c
     callId; // +0x50
     user; // +0x60
}
- (void)onServiceInit;
- (BOOL)getIfProcessingCall;
- (id)getUUID;
- (id)getCallId;
- (BOOL)haveAnsweredCall;
- (void)receiveCallWithUserName:(id)arg1 callId:(id)arg2 isPushKit:(BOOL)arg3 ring:(id)arg4 displayName:(id)arg5 completion:(id /* block */)arg6;
- (void)endCallOutsideWithCallId:(id)arg1 reportToFSM:(BOOL)arg2;
- (void)resetStatus;
- (void)resetStatusWithCallId:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
