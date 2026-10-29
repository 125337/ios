@interface MMDictationTaskV2 : MMDictationTask <SimpleRecordBufferDelegate, MMTranscriptionCoreDelegate, WCAudioModuleDelegate, AudioRecordCheckerExt, ISysCallCheckExt>
{
    BOOL _didEndCallbackCalled; // +0x8
    BOOL _enableOfflineMode; // +0x9
    NSString * _resultText; // +0x10
    SimpleAudioRecorder * _recorder; // +0x18
    MMTranscriptionCore * _transcriptionCore; // +0x20
    id <MMTranscriptionReporter> _transcriptionReporter; // +0x28
    long long _scene; // +0x30
    NSString * _sessionId; // +0x38
    NSData * _dictationExtraData; // +0x40
    NSMutableArray * _peakPowerArray; // +0x48
    unsigned long long _peakPowerHitCount; // +0x50
    NSDate * _currentStartTime; // +0x58
    NSDate * _currentEndTime; // +0x60
    long long _endFlag; // +0x68
    long long _defaultStopMode; // +0x70
    long long _stopMode; // +0x78
}
- (id)description;
- (id)initWithScene:(long long)arg1 sessionId:(id)arg2;
- (void)dealloc;
- (void)didReceiveWillResignActiveNotification:(id)arg1;
- (id)voiceId;
- (void)setDictationExtraData:(id)arg1;
- (BOOL)isRecording;
- (BOOL)isWaitingForEndFlag;
- (void)startRecord;
- (void)stopRecord:(unsigned long long)arg1;
- (void)stopRecord:(unsigned long long)arg1 stopMode:(long long)arg2;
- (void)_notifyTaskDidEnd;
- (id)peakPowerTraceLog;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)outputPeakPower:(float)arg1;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (float)playPerTimes;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)handleInterruptionBy3rdApp;
- (void)transcriptionCore:(id)arg1 didUpdateResult:(id)arg2;
- (void)transcriptionCore:(id)arg1 didFinishResult:(id)arg2 endFlag:(unsigned int)arg3;
- (void)transcriptionCore:(id)arg1 didFailWithError:(long long)arg2;
- (void)InputIsAvailableChanged:(BOOL)arg1;
- (void)BeginInterruption;
- (void)onDetectMicriphoneMuted;
- (id)resultText;
- (void)setResultText:(id)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (id)transcriptionCore;
- (void)setTranscriptionCore:(id)arg1;
- (id)transcriptionReporter;
- (void)setTranscriptionReporter:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)dictationExtraData;
- (id)peakPowerArray;
- (void)setPeakPowerArray:(id)arg1;
- (unsigned long long)peakPowerHitCount;
- (void)setPeakPowerHitCount:(unsigned long long)arg1;
- (id)currentStartTime;
- (void)setCurrentStartTime:(id)arg1;
- (id)currentEndTime;
- (void)setCurrentEndTime:(id)arg1;
- (long long)endFlag;
- (void)setEndFlag:(long long)arg1;
- (long long)defaultStopMode;
- (void)setDefaultStopMode:(long long)arg1;
- (long long)stopMode;
- (void)setStopMode:(long long)arg1;
- (BOOL)didEndCallbackCalled;
- (void)setDidEndCallbackCalled:(BOOL)arg1;
- (BOOL)enableOfflineMode;
- (void)setEnableOfflineMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
