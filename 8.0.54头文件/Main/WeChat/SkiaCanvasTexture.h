@interface SkiaCanvasTexture : NSObject
+ (id)shareInstance;
- (id)init;
- (void)setDelegate:(id)arg1 andAppTag:(id)arg2;
- (__CVBuffer *)copyPixelBufferByViewId:(unsigned int)arg1 andAppTag:(id)arg2;
@end

