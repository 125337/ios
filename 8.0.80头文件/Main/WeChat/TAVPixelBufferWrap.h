@interface TAVPixelBufferWrap : NSObject
{
    __CVBuffer * _pixelBuf; // +0x8
}
+ (id)wrapWithPixelBuf:(__CVBuffer *)arg1;
- (id)initWithPixelBuf:(__CVBuffer *)arg1;
- (void)dealloc;
- (__CVBuffer *)pixelBuf;
- (void)setPixelBuf:(__CVBuffer *)arg1;
@end
