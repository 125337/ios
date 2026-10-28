@interface PlayingController : MMObject <ISysCallCheckExt, IAudioReceiverExt>
{
    BOOL m_bPlaying; // +0x8
    unsigned int m_uiMesLocalID; // +0xc
    CMessageWrap * m_msgWrap; // +0x10
}
- (id)init;
- (void)Register;
- (void)UnRegister;
- (BOOL)isPlaying;
- (id)currentPlayingMsg;
- (void)StartPlayMessage:(id)arg1;
- (void)StartPlayMessage:(id)arg1 fromTime:(unsigned int)arg2;
- (void)SeekVoiceMsg:(id)arg1 toTime:(unsigned int)arg2;
- (void)setPlayRate:(double)arg1;
- (double)playRate;
- (void)switchToEarMode:(BOOL)arg1;
- (void)StopPlayMessage:(id)arg1;
- (void)StopPlayMessage:(id)arg1 reason:(int)arg2 subReason:(int)arg3;
- (void)onResignActive;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)reportStopVoice:(int)arg1;
- (void)reportStopVoice:(int)arg1 subReason:(int)arg2;
- (void)OnEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)OnBeginPlaying:(id)arg1 success:(BOOL)arg2;
- (void)OnEarTip;
- (void)Reset;
- (void)dealloc;
- (void).cxx_destruct;
@end
