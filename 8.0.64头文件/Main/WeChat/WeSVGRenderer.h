@interface WeSVGRenderer : NSObject
{
    shared_ptr<wesvg::RenderModel> _model; // +0x8
    RenderOptions _options; // +0x18
}
+ (CGImage *)createImageWithSize:(CGSize)arg1 transform:(CGAffineTransform)arg2 type:(long long)arg3 actions:(id /* block */)arg4;
+ (CGColor *)createColorFromRGBColor:(const RGBColor *)arg1 opacity:(double)arg2;
+ (CGColor *)createColorFromRGBAColor:(const RGBAColor *)arg1;
+ (CGGradient *)createGradientFromGradient:(const void *)arg1 context:(CGContext *)arg2 providedColor:(optional<wesvg::RGBColor>)arg3;
+ (void)performContainerOpacity:(double)arg1 context:(CGContext *)arg2 handler:(id /* block */)arg3;
+ (CGPath *)createPathFromShape:(const void *)arg1;
+ (CGPath *)createPathFromPath:(const void *)arg1;
- (id)initWithRenderModel:(shared_ptr<wesvg::RenderModel>)arg1 options:(void *)arg2;
- (id)renderImage;
- (CGAffineTransform)contextBaseTransform;
- (CGImage *)createImageWithActions:(id /* block */)arg1;
- (CGImage *)createMaskImageWithTransform:(CGAffineTransform)arg1 actions:(id /* block */)arg2;
- (void)handleNode:(shared_ptr<wesvg::RenderElement>)arg1 context:(CGContext *)arg2;
- (void)drawContainer:(const void *)arg1 context:(CGContext *)arg2;
- (void)drawGraphics:(const void *)arg1 context:(CGContext *)arg2;
- (void)performGradient:(const void *)arg1 forPath:(CGPath *)arg2 context:(CGContext *)arg3 isEvenOdd:(BOOL)arg4;
- (void)performMask:(optional<std::string>)arg1 transform:(CGAffineTransform)arg2 context:(CGContext *)arg3 handler:(id /* block */)arg4;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
