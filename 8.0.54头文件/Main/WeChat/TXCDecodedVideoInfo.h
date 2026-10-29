@interface TXCDecodedVideoInfo : NSObject
{
    unsigned int _pts; // +0x8
    unsigned int _dts; // +0xc
    int _nalType; // +0x10
    unsigned int _orientation; // +0x14
    __CVBuffer * _pixelBuffer; // +0x18
    double _decodeCost; // +0x20
    shared_ptr<liteav::video::PixelFrameMetaData> _metaData; // +0x28
}
- (void)dealloc;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (__CVBuffer *)pixelBuffer;
- (unsigned int)pts;
- (void)setPts:(unsigned int)arg1;
- (unsigned int)dts;
- (void)setDts:(unsigned int)arg1;
- (int)nalType;
- (void)setNalType:(int)arg1;
- (double)decodeCost;
- (void)setDecodeCost:(double)arg1;
- (unsigned int)orientation;
- (void)setOrientation:(unsigned int)arg1;
- (shared_ptr<liteav::video::PixelFrameMetaData>)metaData;
- (void)setMetaData:(shared_ptr<liteav::video::PixelFrameMetaData>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

