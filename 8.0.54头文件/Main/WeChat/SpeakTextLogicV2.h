@interface SpeakTextLogicV2 : NSObject <SpeakTextResourceLoaderDelegate, StreamAudioPlayerDelegate, AVSpeechSynthesizerDelegate, WCProximityStateRecognizerDelegate, WCAudioSessionExt>
{
    BOOL m_forceStop; // +0x8
    BOOL _audioPlayerBlocked; // +0x9
    BOOL _useLocalSpeaker; // +0xa
    unsigned int _playingIndex; // +0xc
    int _localEngineOffset; // +0x10
    unsigned int _currentExtInfoIndex; // +0x14
    int _systemSpeakCount; // +0x18
    int _wxSpeakCount; // +0x1c
    id <SpeakTextDelegate> _m_delegate; // +0x20
    NSString * _reportIdentifier; // +0x28
    SpeakTextResourceLoader * _resourceLoader; // +0x30
    NSString * _playingText; // +0x38
    StreamAudioQueuePlayer * _audioPlayer; // +0x40
    id /* block */ _audioPlayerBlockedHandler; // +0x48
    AVSpeechSynthesizer * _synthesizer; // +0x50
    NSMutableArray * _lines; // +0x58
    CADisplayLink * _timer; // +0x60
    SpeakTextAudioExtInfo * _currentExtInfo; // +0x68
    int * _bytesCount; // +0x70
    unsigned long long _prepareSpeakTime; // +0x78
    unsigned long long _startSpeakTime; // +0x80
    SpeakTextReporter * _reporter; // +0x88
}
+ (void)initialize;
+ (BOOL)forceUseLocalSpeak;
+ (BOOL)hasLanguageOtherThanCN:(id)arg1;
+ (id)detectLanguageFromText:(id)arg1;
+ (BOOL)checkUseLocalSpeaker:(id)arg1;
+ (id)getNextRequestStr:(id)arg1 offset:(int *)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)StartSpeakText:(id)arg1;
- (void)PauseSpeak;
- (void)ResumeSpeak;
- (void)EndSpeak;
- (BOOL)IsPlaying;
- (void)onSpeakEndWithFinished:(BOOL)arg1;
- (void)appendNextDataIfExist;
- (void)setCurrentExtInfo:(id)arg1;
- (void)calculateBytesCount;
- (void)audioPlayerBeginPlaying:(id)arg1 success:(BOOL)arg2;
- (void)audioPlayerDidBlocked:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)resourceLoader:(id)arg1 failToGetPieceAtIndex:(unsigned int)arg2;
- (void)resourceLoader:(id)arg1 didGetPieceAtIndex:(unsigned int)arg2;
- (void)timerCheckProgress;
- (unsigned int)findUtf16LengthWithUtf8BytesLength:(unsigned int)arg1;
- (void)changePlayingTextToLinesIfNeed;
- (void)switchToLocalSpeaker;
- (void)speakNextBySynthesizer;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(_NSRange)arg2 utterance:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)startAudioSession;
- (void)addProximityMonitorIfNeed;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onProximityStateChangeToCloseEar;
- (void)onProximityStateChangeToAwayFromEar;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)reportIdentifier;
- (void)setReportIdentifier:(id)arg1;
- (id)resourceLoader;
- (void)setResourceLoader:(id)arg1;
- (id)playingText;
- (void)setPlayingText:(id)arg1;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (id /* block */)audioPlayerBlockedHandler;
- (void)setAudioPlayerBlockedHandler:(id /* block */)arg1;
- (BOOL)audioPlayerBlocked;
- (void)setAudioPlayerBlocked:(BOOL)arg1;
- (unsigned int)playingIndex;
- (void)setPlayingIndex:(unsigned int)arg1;
- (BOOL)useLocalSpeaker;
- (void)setUseLocalSpeaker:(BOOL)arg1;
- (id)synthesizer;
- (void)setSynthesizer:(id)arg1;
- (int)localEngineOffset;
- (void)setLocalEngineOffset:(int)arg1;
- (id)lines;
- (void)setLines:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)currentExtInfo;
- (unsigned int)currentExtInfoIndex;
- (void)setCurrentExtInfoIndex:(unsigned int)arg1;
- (int *)bytesCount;
- (void)setBytesCount:(int *)arg1;
- (int)systemSpeakCount;
- (void)setSystemSpeakCount:(int)arg1;
- (int)wxSpeakCount;
- (void)setWxSpeakCount:(int)arg1;
- (unsigned long long)prepareSpeakTime;
- (void)setPrepareSpeakTime:(unsigned long long)arg1;
- (unsigned long long)startSpeakTime;
- (void)setStartSpeakTime:(unsigned long long)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end

