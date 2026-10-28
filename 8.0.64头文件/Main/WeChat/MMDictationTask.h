@interface MMDictationTask : NSObject <SimpleRecordBufferDelegate, MMDictationUploaderDelegate, WCAudioModuleDelegate, AudioRecordCheckerExt, ISysCallCheckExt>
{
    id <MMDictationTaskDelegate> _delegate; // +0x8
    NSString * _resultText; // +0x10
    long long _endFlag; // +0x18
    SimpleAudioRecorder * _recorder; // +0x20
    AudioCoder * _silkEncoder; // +0x28
    MMDictationUploader * _uploader; // +0x30
    NSMutableArray * _peakPowerArray; // +0x38
    unsigned long long _peakPowerHitCount; // +0x40
    NSDate * _currentStartTime; // +0x48
    NSDate * _currentEndTime; // +0x50
}
- (id)description;
- (id)initWithScene:(long long)arg1 sessionId:(id)arg2;
- (void)dealloc;
- (void)didReceiveWillResignActiveNotification:(id)arg1;
- (id)voiceId;
- (void)setDictationExtraData:(id)arg1;
- (BOOL)isRecording;
- (void)startRecord;
- (void)stopRecord:(unsigned long long)arg1;
- (id)peakPowerTraceLog;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)outputPeakPower:(float)arg1;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)handleInterruptionBy3rdApp;
- (void)MMDictationUploader:(id)arg1 didGetText:(id)arg2;
- (void)MMDictationUploader:(id)arg1 didEndedByServer:(unsigned int)arg2;
- (void)MMDictationUploader:(id)arg1 onNetError:(long long)arg2 responseRet:(long long)arg3 isResposeEmpty:(BOOL)arg4;
- (void)MMDictationUploaderDidEnd:(id)arg1;
- (void)MMDictationUploader:(id)arg1 cgiWillStart:(int)arg2;
- (void)MMDictationUploader:(id)arg1 cgiDidEnd:(int)arg2 resultTextLen:(long long)arg3;
- (void)InputIsAvailableChanged:(BOOL)arg1;
- (void)BeginInterruption;
- (void)onDetectMicriphoneMuted;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)resultText;
- (void)setResultText:(id)arg1;
- (long long)endFlag;
- (void)setEndFlag:(long long)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (AudioCoder *)silkEncoder;
- (void)setSilkEncoder:(AudioCoder *)arg1;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (id)peakPowerArray;
- (void)setPeakPowerArray:(id)arg1;
- (unsigned long long)peakPowerHitCount;
- (void)setPeakPowerHitCount:(unsigned long long)arg1;
- (id)currentStartTime;
- (void)setCurrentStartTime:(id)arg1;
- (id)currentEndTime;
- (void)setCurrentEndTime:(id)arg1;
- (void).cxx_destruct;
@end
