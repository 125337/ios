@interface PAGImage : NSObject
{
    PAGImageImpl * _image; // +0x8
    __CFData * _imageData; // +0x10
}
+ (id)FromCGImage:(CGImage *)arg1;
+ (id)FromPath:(id)arg1;
+ (id)FromBytes:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)FromPixelBuffer:(__CVBuffer *)arg1;
- (id)initWidthPAGImage:(id)arg1;
- (void)dealloc;
- (long long)width;
- (long long)height;
- (int)scaleMode;
- (void)setScaleMode:(int)arg1;
- (CGAffineTransform)matrix;
- (void)setMatrix:(CGAffineTransform)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (__CFData *)imageData;
- (void)setImageData:(__CFData *)arg1;
@end

