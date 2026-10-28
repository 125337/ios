@interface WAOpenALAudioDecodeInfo : NSObject
{
    int _format; // +0x8
    int _size; // +0xc
    int _sampleRate; // +0x10
    float _duration; // +0x14
    void * _audioData; // +0x18
}
- (BOOL)isVaild;
- (void)dealloc;
- (id)description;
- (int)format;
- (void)setFormat:(int)arg1;
- (int)size;
- (void)setSize:(int)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (void *)audioData;
- (void)setAudioData:(void *)arg1;
- (float)duration;
- (void)setDuration:(float)arg1;
@end
