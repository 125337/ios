@interface MMKindaShakeManager : NSObject <ShakeCheckerDelegate, MMIShakeCheckingManager>
{
    int _m_delayMs; // +0x8
    CShakeChecker * _shakeChecker; // +0x10
    MMVoidCallback * _onShakeCallback; // +0x18
    MMVoidCallback * _m_onDelayNotifyCallback; // +0x20
    AVAudioPlayer * _audioPlayer; // +0x28
}
- (id)init;
- (void)startCheck;
- (void)stopCheck;
- (void)setOnShakeCallBackImpl:(id)arg1;
- (void)setDelayNotifyCallBackImpl:(id)arg1 delayMs:(int)arg2;
- (void)OnShake;
- (void)playShakeSound;
- (void)playShakeMatch:(BOOL)arg1;
- (void)doDelayNotifyCallback;
- (void)playSound:(id)arg1 type:(id)arg2;
- (void)setAudioSessionConfig;
- (id)shakeChecker;
- (void)setShakeChecker:(id)arg1;
- (id)onShakeCallback;
- (void)setOnShakeCallback:(id)arg1;
- (id)m_onDelayNotifyCallback;
- (void)setM_onDelayNotifyCallback:(id)arg1;
- (int)m_delayMs;
- (void)setM_delayMs:(int)arg1;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (void).cxx_destruct;
@end
