@interface WAOGGOpusMuxer : NSObject
{
    unsigned int _serialNumber; // +0x8
    unsigned int _pageNumber; // +0xc
    int _sampleRate; // +0x10
    int _channels; // +0x14
    NSData * _cachedHeader; // +0x18
}
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2;
- (int)sampleRate;
- (int)channels;
- (unsigned int)pageNumber;
- (void)reset;
- (id)buildOggPageWithPackets:(id)arg1 granulePosition:(unsigned long long)arg2 headerType:(unsigned char)arg3;
- (id)buildOpusHeadPacket;
- (id)buildOpusTagsPacket;
- (id)oggFileHeader;
- (id)muxOpusFrame:(id)arg1 granulePosition:(unsigned long long)arg2 isLastPage:(BOOL)arg3;
- (id)muxOpusFrames:(id)arg1 granulePosition:(unsigned long long)arg2 isLastPage:(BOOL)arg3;
- (void).cxx_destruct;
@end
