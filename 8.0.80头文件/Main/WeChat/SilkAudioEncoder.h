@interface SilkAudioEncoder : NSObject
{
    unsigned int _sampleRate; // +0x8
    AudioCoder * _silkEncoder; // +0x10
    NSMutableData * _pcmBuffer; // +0x18
}
- (id)initWithSampleRate:(unsigned int)arg1 bitRate:(unsigned int)arg2 cpuType:(unsigned int)arg3;
- (void)dealloc;
- (id)encodePcmBuffer:(id)arg1;
- (id)_encodePcmBuffer;
- (AudioCoder *)silkEncoder;
- (void)setSilkEncoder:(AudioCoder *)arg1;
- (unsigned int)sampleRate;
- (void)setSampleRate:(unsigned int)arg1;
- (id)pcmBuffer;
- (void)setPcmBuffer:(id)arg1;
- (void).cxx_destruct;
@end
