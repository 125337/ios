@interface MMLivePixelBuffer : NSObject <NSCopying>
{
    __CVBuffer * _pixelBuffer; // +0x8
}
+ (id)bufferWithPixel:(__CVBuffer *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)pixelBufferWidth;
- (unsigned long long)pixelBufferHeight;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
@end

