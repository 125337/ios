@interface OMJTextureHolderImpl : NSObject <OMJTextureHolder>
{
    __CVBuffer * _pixelBuffer; // +0x8
}
- (id)initWithPixelBuffer:(__CVBuffer *)arg1;
- (void)dealloc;
- (__CVBuffer *)copyPixelBuffer;
- (__CVBuffer *)pixelBuffer;
@end

