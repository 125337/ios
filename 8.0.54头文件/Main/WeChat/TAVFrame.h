@interface TAVFrame : NSObject
{
    __CVBuffer * _pixelBuffer; // +0x8
}
- (id)initWithPixelBuffer:(__CVBuffer *)arg1;
- (void)dealloc;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (__CVBuffer *)copyPixelBuffer;
- (__CVBuffer *)pixelBuffer;
@end

