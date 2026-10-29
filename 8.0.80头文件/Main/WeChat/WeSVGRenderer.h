@interface WeSVGRenderer : NSObject
{
    shared_ptr<wesvg::RenderModel> _model; // +0x8
    RenderOptions _options; // +0x18
    unsigned long long _maskRenderingDepth; // +0x48
}
+ (void)drawDeviceImage:(CGImage *)arg1 context:(CGContext *)arg2;
+ (CGImage *)createImageWithSize:(CGSize)arg1 transform:(CGAffineTransform)arg2 type:(long long)arg3 actions:(id /* block */)arg4;
+ (CGPath *)createStrokePathFromPath:(CGPath *)arg1 style:(const void *)arg2;
+ (CGColor *)createColorFromRGBColor:(const RGBColor *)arg1 opacity:(double)arg2;
+ (CGGradient *)createGradientFromGradient:(const void *)arg1 context:(CGContext *)arg2 opacity:(double)arg3;
+ (void)performContainerOpacity:(double)arg1 context:(CGContext *)arg2 handler:(id /* block */)arg3;
+ (CGPath *)createPathFromShape:(const void *)arg1;
+ (CGPath *)createPathFromPath:(const void *)arg1;
- (id)initWithRenderModel:(shared_ptr<wesvg::RenderModel>)arg1 options:(void *)arg2;
- (id)renderImage;
- (CGAffineTransform)contextBaseTransform;
- (CGImage *)createImageWithActions:(id /* block */)arg1;
- (CGImage *)createMaskImageWithTransform:(CGAffineTransform)arg1 region:(CGRect)arg2 actions:(id /* block */)arg3;
- (CGContext *)createFilterContext;
- (void)handleNode:(shared_ptr<wesvg::RenderElement>)arg1 context:(CGContext *)arg2;
- (CGRect)geometryBoundsForNode:(const void *)arg1 relativeToTransform:(CGAffineTransform)arg2;
- (void)drawContainer:(const void *)arg1 context:(CGContext *)arg2;
- (void)drawGraphics:(const void *)arg1 context:(CGContext *)arg2;
- (void)performGradient:(const void *)arg1 forPath:(CGPath *)arg2 context:(CGContext *)arg3 isEvenOdd:(BOOL)arg4 opacity:(double)arg5;
- (double)paintOpacity:(double)arg1;
- (void)appendClipNode:(const void *)arg1 targetTransform:(CGAffineTransform)arg2 unitTransform:(CGAffineTransform)arg3 path:(CGPath *)arg4 evenOdd:(BOOL *)arg5;
- (void)performClip:(optional<std::string>)arg1 transform:(CGAffineTransform)arg2 targetBounds:(CGRect)arg3 context:(CGContext *)arg4 handler:(id /* block */)arg5;
- (void)performFilter:(optional<std::string>)arg1 node:(const void *)arg2 transform:(CGAffineTransform)arg3 targetBounds:(CGRect)arg4 context:(CGContext *)arg5 handler:(id /* block */)arg6;
- (void)performMask:(optional<std::string>)arg1 transform:(CGAffineTransform)arg2 targetBounds:(CGRect)arg3 context:(CGContext *)arg4 handler:(id /* block */)arg5;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
