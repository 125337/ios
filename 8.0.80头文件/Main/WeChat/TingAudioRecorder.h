@interface TingAudioRecorder : MMObject <WCAudioModuleDelegate, WARecorderDelegate, TingAudioEVADProcessor>
{
    BOOL _hasDetectSpeak; // +0x8
    BOOL _isSpeaking; // +0x9
    id <TingAudioRecorderDelegate> _delegate; // +0x10
    WABaseRecorder * _recorder; // +0x18
    NSString * _filePath; // +0x20
    double _minTime; // +0x28
    double _maxTime; // +0x30
    unsigned long long _recordStartTime; // +0x38
    unsigned long long _recordEndTime; // +0x40
    TingAudioRecordConfiguration * _recordConfiguration; // +0x48
    TingAudioEVADProcessor * _evad; // +0x50
    NSMutableData * _speakingPCMBuffer; // +0x58
    double _speakingBufferDuration; // +0x60
    double _currentSegmentTotalDuration; // +0x68
    double _currentSegmentLoudDuration; // +0x70
    NSMutableArray * _speakingSegments; // +0x78
    AudioStreamBasicDescription _currentFormat; // +0x80
}
- (id)initWithRecordMinTime:(double)arg1 recordMaxTime:(double)arg2;
- (unsigned int)startRecordWithConfiguration:(id)arg1;
- (void)stopRecord;
- (double)audioTime;
- (unsigned int)p_startRecorder;
- (unsigned int)p_startInternalRecorder;
- (void)stop;
- (id)createTempPath;
- (id)getTmpAudioFileName:(unsigned int)arg1;
- (void)reset;
- (double)calcAverageLoudness:(id)arg1 channels:(int)arg2 bytesPerFrame:(int)arg3;
- (double)convertRMSTodBFS:(double)arg1;
- (void)processSpeakingPCMData:(id)arg1 format:(AudioStreamBasicDescription)arg2;
- (void)startSpeakingStatistics;
- (void)endSpeakingStatistics;
- (void)onRecorderDidRecordData:(id)arg1 isLastFrame:(BOOL)arg2;
- (void)onRecorderStateChange:(unsigned long long)arg1 recorder:(id)arg2 error:(id)arg3;
- (void)onPCMBuffer:(id)arg1 format:(AudioStreamBasicDescription)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)createEVADProcessor;
- (void)releaseEVADProcessor;
- (void)onVADDetectSpeakingToSlience:(long long)arg1;
- (void)onVADDetectFirstStart;
- (void)onVADDetectSilentTooLong;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 HasSpeak:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (double)minTime;
- (void)setMinTime:(double)arg1;
- (double)maxTime;
- (void)setMaxTime:(double)arg1;
- (unsigned long long)recordStartTime;
- (void)setRecordStartTime:(unsigned long long)arg1;
- (unsigned long long)recordEndTime;
- (void)setRecordEndTime:(unsigned long long)arg1;
- (id)recordConfiguration;
- (void)setRecordConfiguration:(id)arg1;
- (id)evad;
- (void)setEvad:(id)arg1;
- (BOOL)hasDetectSpeak;
- (void)setHasDetectSpeak:(BOOL)arg1;
- (BOOL)isSpeaking;
- (void)setIsSpeaking:(BOOL)arg1;
- (id)speakingPCMBuffer;
- (void)setSpeakingPCMBuffer:(id)arg1;
- (double)speakingBufferDuration;
- (void)setSpeakingBufferDuration:(double)arg1;
- (double)currentSegmentTotalDuration;
- (void)setCurrentSegmentTotalDuration:(double)arg1;
- (double)currentSegmentLoudDuration;
- (void)setCurrentSegmentLoudDuration:(double)arg1;
- (AudioStreamBasicDescription)currentFormat;
- (void)setCurrentFormat:(AudioStreamBasicDescription)arg1;
- (id)speakingSegments;
- (void)setSpeakingSegments:(id)arg1;
- (void).cxx_destruct;
@end
