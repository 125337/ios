@interface _TtC6WeChat14VoIPLCKManager : MMUserService <MMServiceProtocol>
{
     conversationManager; // +0x8
     haveAProcessingCall; // +0x10
     currentUUID; // +0x18
     haveAcceptedCall; // +0x28
     isBackground; // +0x29
     conversation; // +0x30
     update; // +0x38
     roomID; // +0x58
     roomKey; // +0x60
     isVideo; // +0x68
     hasActiveAudio; // +0x69
     noActionAfterEnteringForeground; // +0x6a
     needEndCallByFailure; // +0x6b
     user; // +0x70
}
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)resetStatus;
- (BOOL)handleVoIPPushInfoWithInfo:(id)arg1;
- (id)getUUID;
- (void)joinCallOutside;
- (void)endCallOutsideWithRoomID:(unsigned long long)arg1 isCancel:(BOOL)arg2;
- (BOOL)getIfProcessingCall;
- (BOOL)haveAnsweredCall;
- (void)receiveCallWithContact:(id)arg1 roomID:(unsigned long long)arg2 roomKey:(unsigned long long)arg3 isVideo:(BOOL)arg4 isPushKit:(BOOL)arg5 ring:(id)arg6;
- (id)init;
- (void).cxx_destruct;
@end

