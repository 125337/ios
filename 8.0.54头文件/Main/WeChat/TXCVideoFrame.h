@interface TXCVideoFrame : NSObject
{
    unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>> _encodedData; // +0x8
    unsigned int _pts; // +0x10
    unsigned int _dts; // +0x14
    unsigned int _orientation; // +0x18
    unsigned long long _type; // +0x20
    __CVBuffer * _pixelBuffer; // +0x28
    TXCVideoTextureFrame * _textureData; // +0x30
    TXCVideoDataFrame * _dataFrame; // +0x38
    long long _bitDepth; // +0x40
    long long _videoFullRangeFlag; // +0x48
    shared_ptr<liteav::video::PixelFrameMetaData> _metaData; // +0x50
}
+ (unsigned int)orientationFromRotation:(int)arg1;
- (void)setEncodeCost:(double)arg1;
- (double)encodeCost;
- (void)setRoiConfigArray:(id)arg1;
- (id)roiConfigArray;
- (void)setDecodeCost:(double)arg1;
- (double)decodeCost;
- (id)initWithSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (id)initWithPixelBuffer:(__CVBuffer *)arg1 pts:(unsigned int)arg2;
- (id)initWithTexture:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (id)initWithFrameBuffer:(id)arg1 pts:(unsigned int)arg2;
- (id)initWithDataFrame:(id)arg1 pts:(unsigned int)arg2;
- (id)initWithEncodedData:(unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>>)arg1;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (void *)encodedData;
- (void)setup;
- (long long)width;
- (long long)height;
- (unsigned long long)format;
- (unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>>)moveEncodedVideoFrame;
- (void)dealloc;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (__CVBuffer *)pixelBuffer;
- (id)textureData;
- (id)dataFrame;
- (unsigned int)pts;
- (void)setPts:(unsigned int)arg1;
- (unsigned int)dts;
- (void)setDts:(unsigned int)arg1;
- (unsigned int)orientation;
- (void)setOrientation:(unsigned int)arg1;
- (long long)bitDepth;
- (long long)videoFullRangeFlag;
- (shared_ptr<liteav::video::PixelFrameMetaData>)metaData;
- (void)setMetaData:(shared_ptr<liteav::video::PixelFrameMetaData>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

