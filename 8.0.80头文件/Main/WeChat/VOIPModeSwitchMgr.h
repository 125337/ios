@interface VOIPModeSwitchMgr : MMUserService <IVOIPSyncExt, MMServiceProtocol>
{
    BOOL mIsWeakSessionActive; // +0x8
    BOOL mIsSessionActive; // +0x9
    BOOL mIsLocalVideoClosed; // +0xa
    BOOL mIsRemoteVideoClosed; // +0xb
    BOOL mIsMicClosed; // +0xc
    BOOL mIsVoiceMode; // +0xd
    BOOL mIsTalkingWithOldVersion; // +0xe
    unsigned long long mRoomId; // +0x10
    long long mRoomKey; // +0x18
    BOOL m_isActiveByCaller; // +0x20
    BOOL _m_isInitialVoiceMode; // +0x21
    VOIPModeSwitchStateMachine * mStateMachine; // +0x28
}
- (void)OnGotRemoteControlStatus:(unsigned int)arg1;
- (void)PushControlStatusToRemote:(unsigned int)arg1;
- (void)SetAudioSpeakerPhone:(BOOL)arg1;
- (void)CallBackForModeStatus:(unsigned long long)arg1;
- (void)SetLocalVideoEnable:(BOOL)arg1 shouldSendRUDP:(BOOL)arg2;
- (void)SetRemoteVideoEnable:(BOOL)arg1;
- (id)init;
- (void)StartWeakSessionWithRoomId:(unsigned long long)arg1 andRoomKey:(long long)arg2;
- (void)StartSessionWithRoomId:(unsigned long long)arg1 andRoomKey:(long long)arg2;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (void)VideoSwitchToVoiceMode;
- (void)VideoStatusChange:(BOOL)arg1 update:(BOOL)arg2 notify:(BOOL)arg3;
- (void)OpenLocalEarModeNotPush;
- (void)OpenLocalEarMode;
- (void)StopSession;
- (BOOL)isLocalVideoClosed;
- (BOOL)isRemoteVideoClosed;
- (unsigned long long)CurrentStatus;
- (BOOL)isTalkingWithOldVersion;
- (BOOL)isVoiceMode;
- (void)ChangeToAudioMode;
- (BOOL)m_isActiveByCaller;
- (void)setM_isActiveByCaller:(BOOL)arg1;
- (id)mStateMachine;
- (void)setMStateMachine:(id)arg1;
- (BOOL)m_isInitialVoiceMode;
- (void)setM_isInitialVoiceMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
