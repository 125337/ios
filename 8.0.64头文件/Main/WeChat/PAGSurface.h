@interface PAGSurface : NSObject
{
    PAGSurfaceImpl * _surface; // +0x8
}
+ (id)FromLayer:(id)arg1;
+ (id)FromCVPixelBuffer:(__CVBuffer *)arg1;
+ (id)FromCVPixelBuffer:(__CVBuffer *)arg1 context:(id)arg2;
+ (id)MakeFromGPU:(CGSize)arg1;
+ (id)MakeOffscreen:(CGSize)arg1;
- (id)impl;
- (void)dealloc;
- (void)updateSize;
- (int)width;
- (int)height;
- (BOOL)clearAll;
- (void)freeCache;
- (__CVBuffer *)getCVPixelBuffer;
- (__CVBuffer *)makeSnapshot;
- (BOOL)copyPixelsTo:(void *)arg1 rowBytes:(unsigned long long)arg2;
- (id)surface;
- (void)setSurface:(id)arg1;
@end
