@interface MobileOCRImage : NSObject
{
    int _width; // +0x8
    int _height; // +0xc
    char * _data; // +0x10
}
+ (id)imageWithUIImage:(id)arg1;
+ (id)imageWithCMSampleBufferRef:(opaqueCMSampleBuffer *)arg1 reuseImage:(id)arg2;
+ (id)getRGBBytesFromPixelBuffer:(__CVBuffer *)arg1 reuseImage:(id)arg2;
+ (__CVBuffer *)rotateBuffer:(__CVBuffer *)arg1 withConstant:(unsigned char)arg2;
+ (id)imageWithCMSampleBufferRefRGB:(opaqueCMSampleBuffer *)arg1 reuseImage:(id)arg2 direction:(long long)arg3;
- (id)init;
- (void)dealloc;
- (long long)pixelFormatOfUIImage:(id)arg1;
- (id)createUIImage;
- (char *)data;
- (void)setData:(char *)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
@end

