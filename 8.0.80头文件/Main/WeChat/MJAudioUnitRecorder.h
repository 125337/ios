@interface MJAudioUnitRecorder : NSObject
{
    BOOL _isRunning; // +0x8
    id <SimpleRecordBufferDelegate> _delegate; // +0x10
    OpaqueAudioComponentInstance * _audioUnit; // +0x18
}
- (id)init;
- (BOOL)startRecordWithVoiceProcessingIOEnabled:(BOOL)arg1;
- (void)stopRecord;
- (BOOL)isRecording;
- (BOOL)setupAudioUnitWithVoiceProcessingIOEnabled:(BOOL)arg1;
- (void)releaseAudioUint;
- (float)calculatePowerForData:(void *)arg1 size:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (OpaqueAudioComponentInstance *)audioUnit;
- (void)setAudioUnit:(OpaqueAudioComponentInstance *)arg1;
- (void).cxx_destruct;
@end
