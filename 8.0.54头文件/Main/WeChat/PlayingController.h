@interface PlayingController : MMObject <ISysCallCheckExt, IAudioReceiverExt>
{
    BOOL m_bPlaying; // +0x8
    unsigned int m_uiMesLocalID; // +0xc
    CMessageWrap * m_msgWrap; // +0x10
    BOOL _shouldAsyncStartPlayer; // +0x18
}
- (id)init;
- (void)Register;
- (void)UnRegister;
- (BOOL)isPlaying;
- (id)currentPlayingMsg;
- (void)StartPlayMessage:(id)arg1 Resume:(BOOL)arg2;
- (void)SeekVoiceMsg:(id)arg1 toTime:(unsigned int)arg2;
- (void)StopPlayMessage:(id)arg1;
- (void)StopPlayMessageWithUsrName:(id)arg1;
- (void)onResignActive;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)reportStopVoice:(int)arg1;
- (void)OnEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)OnBeginPlaying:(id)arg1 success:(BOOL)arg2;
- (void)OnEarTip;
- (void)Reset;
- (void)dealloc;
- (BOOL)shouldAsyncStartPlayer;
- (void)setShouldAsyncStartPlayer:(BOOL)arg1;
- (void).cxx_destruct;
@end

