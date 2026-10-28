@interface HearingAidRecorder : NSObject
{
    BOOL _isRecording; // +0x8
    id <HearingAidRecorderDelegate> _delegate; // +0x10
    NSMutableData * _audioBuffer; // +0x18
    double _startTime; // +0x20
    double _recordingDuration; // +0x28
    struct _recordState; // +0x30
}
- (id)initWithDuration:(double)arg1;
- (id)init;
- (void)setupAudioFormat;
- (void)processAudioBuffer;
- (BOOL)startRecording;
- (void)stopRecording;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (struct)recordState;
- (void)setRecordState:(struct)arg1;
- (id)audioBuffer;
- (void)setAudioBuffer:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)recordingDuration;
- (void)setRecordingDuration:(double)arg1;
- (void).cxx_destruct;
@end
