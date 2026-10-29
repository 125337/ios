@interface VoIPCallAudioPacket : NSObject
{
    unsigned int _sampleRate; // +0x8
    unsigned int _channels; // +0xc
    unsigned int _framesPerPacket; // +0x10
    NSData * _pcmData; // +0x18
    unsigned long long _ptsNs; // +0x20
}
- (id)pcmData;
- (void)setPcmData:(id)arg1;
- (unsigned long long)ptsNs;
- (void)setPtsNs:(unsigned long long)arg1;
- (unsigned int)sampleRate;
- (void)setSampleRate:(unsigned int)arg1;
- (unsigned int)channels;
- (void)setChannels:(unsigned int)arg1;
- (unsigned int)framesPerPacket;
- (void)setFramesPerPacket:(unsigned int)arg1;
- (void).cxx_destruct;
@end
