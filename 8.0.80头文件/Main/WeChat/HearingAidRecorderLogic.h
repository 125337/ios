@interface HearingAidRecorderLogic : NSObject <SimpleRecordBufferDelegate>
{
    BOOL m_bStop; // +0x8
    id <HearingAidRecorderDelegate> _delegate; // +0x10
    SimpleAudioRecorder * _recorder; // +0x18
    NSString * _currentVoiceId; // +0x20
}
- (id)init;
- (void)dealloc;
- (BOOL)startRecording;
- (BOOL)stopRecording;
- (BOOL)restartRecording;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)outputPeakPower:(float)arg1;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (float)playPerTimes;
- (void)onAudioBufferRecordEnd;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (id)currentVoiceId;
- (void)setCurrentVoiceId:(id)arg1;
- (void).cxx_destruct;
@end
