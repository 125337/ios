@interface PAGImageImpl : NSObject
{
    shared_ptr<pag::PAGImage> _pagImage; // +0x8
}
+ (id)FromPath:(id)arg1;
+ (id)FromBytes:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)FromPixelBuffer:(__CVBuffer *)arg1;
+ (id)FromCGImage:(CGImage *)arg1;
- (id)initWidthPAGImage:(shared_ptr<pag::PAGImage>)arg1;
- (long long)width;
- (long long)height;
- (int)scaleMode;
- (void)setScaleMode:(int)arg1;
- (CGAffineTransform)matrix;
- (void)setMatrix:(CGAffineTransform)arg1;
- (shared_ptr<pag::PAGImage>)pagImage;
- (void)setPagImage:(shared_ptr<pag::PAGImage>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

