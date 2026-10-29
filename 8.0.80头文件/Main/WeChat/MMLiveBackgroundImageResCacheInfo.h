@interface MMLiveBackgroundImageResCacheInfo : NSObject
{
    BOOL _usageFlag; // +0x8
    __CVBuffer * _pixelBuffer; // +0x10
}
- (void)dealloc;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)usageFlag;
- (void)setUsageFlag:(BOOL)arg1;
@end
