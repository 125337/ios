@interface VoicePrintRecorder : NSObject <WCAudioModuleDelegate, IVoicePrintMgrExt>
{
    BOOL _recording; // +0x8
    BOOL _active; // +0x9
    BOOL _recordingTooShort; // +0xa
    unsigned int _resourceId; // +0xc
    unsigned int _voiceId; // +0x10
    unsigned int _retryCount; // +0x14
    id <VoicePrintRecorderDelegate> _delegate; // +0x18
    VoicePrintMgr * _voicePrintManager; // +0x20
    double _recordingBeginTime; // +0x28
    MMTimer * _timeoutTimer; // +0x30
}
- (id)initWithManger:(id)arg1;
- (void)deactiveAudio;
- (void)setResourceId:(unsigned int)arg1;
- (void)startRecordForResourceId:(unsigned int)arg1 isFirstStep:(BOOL)arg2;
- (void)stopRecord;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)OnStartRecord;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnUploadError:(int)arg1 withVoiceId:(unsigned int)arg2 andMessage:(id)arg3;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)resourceId;
- (BOOL)isRecording;
- (void)setRecording:(BOOL)arg1;
- (unsigned int)voiceId;
- (void)setVoiceId:(unsigned int)arg1;
- (BOOL)isActive;
- (void)setActive:(BOOL)arg1;
- (id)voicePrintManager;
- (void)setVoicePrintManager:(id)arg1;
- (double)recordingBeginTime;
- (void)setRecordingBeginTime:(double)arg1;
- (BOOL)isRecordingTooShort;
- (void)setRecordingTooShort:(BOOL)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

