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
     isilink; // +0x80
     hasJoined; // +0x81
     isEnding; // +0x82
     isMute; // +0x83
     isMultiply; // +0x84
     acceptedCalled; // +0x85
}
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (BOOL)getIsVideo;
- (BOOL)getIsMultiTalk;
- (void)onServiceEnterBackground;
- (void)resetStatus;
- (void)resetStatus2WithRoomID:(unsigned long long)arg1;
- (id)getUUID;
- (id)getUserName;
- (void)joinCallOutside2WithRoomID:(unsigned long long)arg1;
- (void)forceEnd;
- (void)forceClose;
- (void)endCallOutsideWithRoomID:(unsigned long long)arg1 isCancel:(BOOL)arg2;
- (BOOL)getIfProcessingCall;
- (unsigned long long)getRoomID;
- (BOOL)haveAnsweredCall;
- (void)receiveCallWithUserName:(id)arg1 roomID:(unsigned long long)arg2 roomKey:(unsigned long long)arg3 isVideo:(BOOL)arg4 isPushKit:(BOOL)arg5 ring:(id)arg6 displayName:(id)arg7 isilink:(BOOL)arg8 isMultiply:(BOOL)arg9 completion:(id /* block */)arg10;
- (id)init;
- (void).cxx_destruct;
@end
