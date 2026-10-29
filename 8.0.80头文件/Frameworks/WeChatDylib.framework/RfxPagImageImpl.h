@interface RfxPagImageImpl : NSObject
{
    shared_ptr<rfx::RfxPagImage> _pagImage; // +0x8
}
+ (id)FromPath:(id)arg1;
+ (id)FromBytes:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)FromCGImage:(CGImage *)arg1;
- (id)initWidthRfxPagImage:(shared_ptr<rfx::RfxPagImage>)arg1;
- (long long)width;
- (long long)height;
- (int)scaleMode;
- (void)setScaleMode:(int)arg1;
- (CGAffineTransform)matrix;
- (void)setMatrix:(CGAffineTransform)arg1;
- (shared_ptr<rfx::RfxPagImage>)pagImage;
- (void)setPagImage:(shared_ptr<rfx::RfxPagImage>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
