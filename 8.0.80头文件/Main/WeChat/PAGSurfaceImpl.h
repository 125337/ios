@interface PAGSurfaceImpl : NSObject
{
    __CVBuffer * pixelBuffer; // +0x8
    shared_ptr<pag::PAGSurface> _pagSurface; // +0x10
}
+ (id)FromLayer:(id)arg1;
+ (id)FromCVPixelBuffer:(__CVBuffer *)arg1;
+ (id)FromCVPixelBuffer:(__CVBuffer *)arg1 context:(id)arg2;
+ (id)MakeOffscreen:(CGSize)arg1;
- (shared_ptr<pag::PAGSurface>)pagSurface;
- (id)initWithSurface:(shared_ptr<pag::PAGSurface>)arg1;
- (id)initWithSurface:(shared_ptr<pag::PAGSurface>)arg1 pixelBuffer:(__CVBuffer *)arg2;
- (void)updateSize;
- (int)width;
- (int)height;
- (BOOL)clearAll;
- (void)freeCache;
- (__CVBuffer *)getCVPixelBuffer;
- (__CVBuffer *)makeSnapshot;
- (BOOL)copyPixelsTo:(void *)arg1 rowBytes:(unsigned long long)arg2;
- (void)setPagSurface:(shared_ptr<pag::PAGSurface>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
