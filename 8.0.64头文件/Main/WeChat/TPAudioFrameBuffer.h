@interface TPAudioFrameBuffer : NSObject
{
    unsigned int _sampleRate; // +0x8
    int _nbSamples; // +0xc
    int _channels; // +0x10
    int _trackID; // +0x14
    int _flags; // +0x18
    char * * _data; // +0x20
    int * _size; // +0x28
    unsigned long long _channelLayout; // +0x30
    long long _format; // +0x38
    long long _ptsMs; // +0x40
}
- (char * *)data;
- (void)setData:(char * *)arg1;
- (int *)size;
- (void)setSize:(int *)arg1;
- (unsigned int)sampleRate;
- (void)setSampleRate:(unsigned int)arg1;
- (unsigned long long)channelLayout;
- (void)setChannelLayout:(unsigned long long)arg1;
- (long long)format;
- (void)setFormat:(long long)arg1;
- (long long)ptsMs;
- (void)setPtsMs:(long long)arg1;
- (int)nbSamples;
- (void)setNbSamples:(int)arg1;
- (int)channels;
- (void)setChannels:(int)arg1;
- (int)trackID;
- (void)setTrackID:(int)arg1;
- (int)flags;
- (void)setFlags:(int)arg1;
@end
