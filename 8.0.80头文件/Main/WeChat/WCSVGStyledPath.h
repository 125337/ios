@interface WCSVGStyledPath : NSObject
{
    UIBezierPath * _path; // +0x8
    UIColor * _fillColor; // +0x10
    WCSVGGradient * _fillGradient; // +0x18
    UIColor * _strokeColor; // +0x20
    double _strokeWidth; // +0x28
    NSArray * _affineTransforms; // +0x30
    double _opacity; // +0x38
}
- (id)initWithPath:(id)arg1;
- (void)drawStyledPathInContext:(CGContext *)arg1 tintColor:(id)arg2;
- (id)description;
- (id)path;
- (void)setPath:(id)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (id)fillGradient;
- (void)setFillGradient:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (id)affineTransforms;
- (void)setAffineTransforms:(id)arg1;
- (double)opacity;
- (void)setOpacity:(double)arg1;
- (void).cxx_destruct;
@end
