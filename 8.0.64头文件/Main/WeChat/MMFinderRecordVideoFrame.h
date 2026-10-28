@interface MMFinderRecordVideoFrame : NSObject
{
    unsigned int _pts; // +0x8
    unsigned int _dts; // +0xc
    unsigned int _width; // +0x10
    unsigned int _height; // +0x14
    int _frameType; // +0x18
    __CVBuffer * _pixelBuffer; // +0x20
    NSData * _encodedData; // +0x28
    NSData * _sps; // +0x30
    NSData * _pps; // +0x38
    long long _bitDeth; // +0x40
    long long _videoFullRangeFlag; // +0x48
    long long _videoFrameId; // +0x50
    MMFinderReplayKitVideoDecoder * _decoder; // +0x58
    struct _dtsTime; // +0x60
    struct _ptsTime; // +0x78
}
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (id)encodedData;
- (void)setEncodedData:(id)arg1;
- (struct)dtsTime;
- (void)setDtsTime:(struct)arg1;
- (struct)ptsTime;
- (void)setPtsTime:(struct)arg1;
- (unsigned int)pts;
- (void)setPts:(unsigned int)arg1;
- (unsigned int)dts;
- (void)setDts:(unsigned int)arg1;
- (id)sps;
- (void)setSps:(id)arg1;
- (id)pps;
- (void)setPps:(id)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (long long)bitDeth;
- (void)setBitDeth:(long long)arg1;
- (long long)videoFullRangeFlag;
- (void)setVideoFullRangeFlag:(long long)arg1;
- (long long)videoFrameId;
- (void)setVideoFrameId:(long long)arg1;
- (id)decoder;
- (void)setDecoder:(id)arg1;
- (int)frameType;
- (void)setFrameType:(int)arg1;
- (void).cxx_destruct;
@end
