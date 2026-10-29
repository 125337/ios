@interface CommonVoiceRecordAudioService : NSObject <VoiceTransLogicObserver, VoiceRecordAudioService>
{
    BOOL _fileUseOpus; // +0x8
    unsigned int _inputId; // +0xc
    id <CommonVoiceRecordAudioServiceDelegate> _delegate; // +0x10
    NSString * _recordFilePath; // +0x18
    VoiceTransLogic * _voiceTransLogic; // +0x20
    AudioRecorderUserData * _userData; // +0x28
    id <VoiceRecordAudioInterruptionObserver> _interruptionObserver; // +0x30
    OpusAudioCodec * _opusFileEncoder; // +0x38
    SilkAudioEncoder * _silkFileEncoder; // +0x40
    CBaseFile * _recordFile; // +0x48
}
- (id)initWithScene:(long long)arg1 voiceFormat:(long long)arg2;
- (BOOL)startRecording;
- (void)stopRecording;
- (id)translateResult;
- (long long)recordDuration;
- (void)setupRecordFile;
- (void)appendPcmToRecordFile:(id)arg1;
- (void)finishRecordFile;
- (BOOL)isSupportVoiceTranslate;
- (id)startTranslateWithVoiceRecording:(unsigned int)arg1;
- (void)pauseVoiceTranslating;
- (void)resumeVoiceTranslating;
- (void)stopVoiceTransWithInputId:(unsigned int)arg1;
- (void)setForInterrupt;
- (BOOL)newBehaviourForCallInterrupt;
- (void)addInterruptionObserver:(id)arg1;
- (void)removeInterruptionObserver:(id)arg1;
- (void)onVoiceTransOutputPcmData:(id)arg1;
- (void)onVoiceTransBegan:(id)arg1;
- (void)onVoiceTransLevelMeter:(float)arg1;
- (void)onVoiceTransResultChange;
- (void)onVoiceTransDidEnd:(int)arg1;
- (void)onVoiceTransFail:(long long)arg1;
- (void)onVoiceTransInterrupted;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recordFilePath;
- (void)setRecordFilePath:(id)arg1;
- (id)voiceTransLogic;
- (void)setVoiceTransLogic:(id)arg1;
- (unsigned int)inputId;
- (void)setInputId:(unsigned int)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)interruptionObserver;
- (void)setInterruptionObserver:(id)arg1;
- (BOOL)fileUseOpus;
- (void)setFileUseOpus:(BOOL)arg1;
- (id)opusFileEncoder;
- (void)setOpusFileEncoder:(id)arg1;
- (id)silkFileEncoder;
- (void)setSilkFileEncoder:(id)arg1;
- (id)recordFile;
- (void)setRecordFile:(id)arg1;
- (void).cxx_destruct;
@end
