@interface OMCAudioWaveformGenerator : NSObject
{
    SharedPtr<XMFAudioWaveformGenF32> _backingGen; // +0x8
}
- (id)initWithInputSampleCountPerOutputSample:(unsigned long long)arg1;
- (id)initWithInputSampleCountPerOutputSample:(unsigned long long)arg1 bufferScale:(unsigned long long)arg2;
- (void)updateWithPCMData:(const float *)arg1 length:(unsigned long long)arg2;
- (void)reset;
- (const void *)outputSamples;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
