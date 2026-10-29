@interface SPXAudioRecorder : BaseAudioRecorder <CommonPlayerDelegate>
{
    NSRecursiveLock * mPrepareSentLock; // +0x20
    BOOL mIsPrepareSent; // +0x28
    int mSlientTime; // +0x2c
    BOOL mIsNeedRestartMusic; // +0x30
    BOOL mIsNeedRestartAudioTalk; // +0x31
    BOOL mIsNeedWaitForTipAudio; // +0x32
    int _silentFrameCount; // +0x34
    WavAudioPlayer * _m_wavAudioPlayer; // +0x38
}
- (void)setDataFormat;
- (void)prepareBuffers;
- (void)createAudioFile_WAVE:(id)arg1;
- (void)setMagicCookieToAudioFile;
- (void)onCommonPlayerPlay;
- (void)onCommonPlayerStop;
- (void)onCommonPlayerPlayEnd;
- (void)onCommonPlayerPause;
- (void)onCommonPlayerError:(id)arg1;
- (void)onCommonPlayerPlayAtTime:(double)arg1;
- (BOOL)shouldAutoRestartWith:(int)arg1;
- (BOOL)canAutoRestart;
- (id)init;
- (void)dealloc;
- (void)setSlientTime:(int)arg1;
- (BOOL)accumulateSilentFrameAndCheckLimit;
- (void)resetSilentFrameCount;
- (BOOL)prepareRecord;
- (BOOL)prepareRecord:(BOOL)arg1 cache:(BOOL)arg2;
- (void)createWaveFile:(id)arg1;
- (void)createSpeexFile:(id)arg1;
- (void)createFile:(id)arg1;
- (BOOL)prepareSend;
- (void)playBeginTipAudio;
- (void)playEndTipAudio;
- (void)record;
- (void)cleanResource;
- (void)stop;
- (void)autostop;
- (long long)getVoiceFormat;
- (BOOL)needRestartMusic;
- (void)setNeedRestartMusic:(BOOL)arg1;
- (BOOL)needRestartAudioTalk;
- (void)setNeedRestartAudioTalk:(BOOL)arg1;
- (BOOL)needWaitForTipAudio;
- (void)setNeedWaitForTipAudio:(BOOL)arg1;
- (id)m_wavAudioPlayer;
- (void)setM_wavAudioPlayer:(id)arg1;
- (int)silentFrameCount;
- (void)setSilentFrameCount:(int)arg1;
- (void).cxx_destruct;
@end
