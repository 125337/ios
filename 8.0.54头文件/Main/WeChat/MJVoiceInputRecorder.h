@interface MJVoiceInputRecorder : NSObject <SimpleRecordBufferDelegate, WCAudioModuleDelegate>
{
    BOOL _hasStopped; // +0x8
    unsigned int _outputPCMBufferLength; // +0xc
    id <MJVoiceInputRecorderDelegate> _delegate; // +0x10
    SimpleAudioRecorder * _recorder; // +0x18
    NSString * _identifier; // +0x20
}
+ (double)durationFromPCMBufLength:(long long)arg1 bitsPerChannel:(long long)arg2 channelCount:(long long)arg3 sampleRate:(long long)arg4;
- (id)init;
- (BOOL)isRecording;
- (long long)currentRecordingTime;
- (BOOL)startRecord;
- (void)startRecordAsyncWithCompletion:(id /* block */)arg1;
- (BOOL)stopRecord;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)outputPeakPower:(float)arg1;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (double)simpleRateForBuffer;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)handleInterruptionBy3rdApp;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasStopped;
- (void)setHasStopped:(BOOL)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (unsigned int)outputPCMBufferLength;
- (void)setOutputPCMBufferLength:(unsigned int)arg1;
- (void).cxx_destruct;
@end

