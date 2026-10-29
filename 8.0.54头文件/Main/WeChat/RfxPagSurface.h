@interface RfxPagSurface : NSObject
{
    RfxPagSurfaceImpl * _surface; // +0x8
}
+ (id)FromView:(id)arg1;
- (id)impl;
- (void)dealloc;
- (int)width;
- (int)height;
- (void)updateSize;
- (id)surface;
- (void)setSurface:(id)arg1;
@end

