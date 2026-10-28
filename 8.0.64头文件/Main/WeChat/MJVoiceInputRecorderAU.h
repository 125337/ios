@interface MJVoiceInputRecorderAU : MJVoiceInputRecorder
{
    MJAudioUnitRecorder * _recorder; // +0x8
}
- (id)initWithSampleRate:(long long)arg1;
- (BOOL)isRecordingImpl;
- (BOOL)startRecordImplWithOptions:(unsigned long long)arg1;
- (void)stopRecordImpl;
- (BOOL)isBackingRecorderExist;
- (void)initBackingRecorder;
- (void)releaseBackingRecorder;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (void).cxx_destruct;
@end
