@interface RfxPagSurfaceImpl : NSObject
{
    shared_ptr<rfx::RfxPagSurface> _pagSurface; // +0x8
}
+ (id)FromView:(id)arg1;
- (shared_ptr<rfx::RfxPagSurface>)pagSurface;
- (id)initWithSurface:(shared_ptr<rfx::RfxPagSurface>)arg1;
- (void)dealloc;
- (int)width;
- (int)height;
- (void)updateSize;
- (void)setPagSurface:(shared_ptr<rfx::RfxPagSurface>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
