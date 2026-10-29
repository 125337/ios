@interface VoIPTerminationService : MMUserService <VoipUIManagerExt, PBMessageObserverDelegate, VoIPAudioServiceExtension, MMServiceProtocol>
{
    BOOL _isWorking; // +0x8
    BOOL _isCaller; // +0x9
    unsigned int _mTalkingTime; // +0xc
    MMTimer * _mVoipTimer; // +0x10
}
+ (void)launchIfNeed;
- (void)storeRoomInfoWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2 inviteID:(unsigned int)arg3;
- (void)storeRoomInfo;
- (void)clearByReset;
- (void)handleLastTerminationIfNeed;
- (void)handleCancelInviteResponseWithProtobufCGIWrap:(id)arg1 Event:(unsigned int)arg2;
- (void)handleShutDownResponseWithProtobufCGIWrap:(id)arg1 Event:(unsigned int)arg2;
- (void)tickVoIPTimer;
- (void)TimerCheck;
- (void)invalidVoIPTimer;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)UIManagerWillOpenWindowWithContact:(id)arg1 isCaller:(BOOL)arg2 monoMsg:(id)arg3 startInApp:(BOOL)arg4 isEarMode:(BOOL)arg5 isAudioMode:(BOOL)arg6 from:(unsigned long long)arg7 isIlink:(BOOL)arg8;
- (void)UIManagerDidClose;
- (void)onSetIfIsIlink:(BOOL)arg1;
- (void)OnCall:(id)arg1 ErrNo:(int)arg2;
- (void)OnAccept:(id)arg1 ErrNo:(int)arg2;
- (void)OnBeAccepted:(id)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceQuitCompulsivelyFromInterruption;
- (BOOL)isWorking;
- (void)setIsWorking:(BOOL)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (id)mVoipTimer;
- (void)setMVoipTimer:(id)arg1;
- (unsigned int)mTalkingTime;
- (void)setMTalkingTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

