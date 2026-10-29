@interface TingAudioRecorder : MMObject <WCAudioModuleDelegate, WARecorderDelegate>
{
    id <TingAudioRecorderDelegate> _delegate; // +0x8
    WABaseRecorder * _recorder; // +0x10
    NSString * _filePath; // +0x18
    double _minTime; // +0x20
    double _maxTime; // +0x28
    unsigned long long _recordStartTime; // +0x30
    unsigned long long _recordEndTime; // +0x38
}
- (id)initWithRecordMinTime:(double)arg1 recordMaxTime:(double)arg2;
- (unsigned int)startRecord;
- (void)stopRecord;
- (double)audioTime;
- (unsigned int)p_startRecorder;
- (unsigned int)p_startInternalRecorder;
- (void)stop;
- (id)createTempPath;
- (id)getTmpAudioFileName:(unsigned int)arg1;
- (void)reset;
- (void)onRecorderDidRecordData:(id)arg1 isLastFrame:(BOOL)arg2;
- (void)onRecorderStateChange:(unsigned long long)arg1 recorder:(id)arg2 error:(id)arg3;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
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
- (void).cxx_destruct;
@end

