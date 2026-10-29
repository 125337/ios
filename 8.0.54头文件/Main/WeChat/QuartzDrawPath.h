@interface QuartzDrawPath : QuartzObject
{
    BOOL _fill; // +0x8
    BOOL _clip; // +0x9
    NSArray * _path; // +0x10
}
- (id)initWithPath:(id)arg1 fill:(BOOL)arg2;
- (id)initWithPath:(id)arg1 clip:(BOOL)arg2;
- (void)Execute:(CGContext *)arg1;
- (CGPath *)newPath;
- (void)setLinearGradient:(id)arg1 context:(CGContext *)arg2;
- (void)setRadialGradient:(id)arg1 context:(CGContext *)arg2;
- (void)moveTo:(CGPath *)arg1 data:(id)arg2;
- (void)lineTo:(CGPath *)arg1 data:(id)arg2;
- (void)closePath:(CGPath *)arg1 data:(id)arg2;
- (void)rect:(CGPath *)arg1 data:(id)arg2;
- (void)quadraticCurveTo:(CGPath *)arg1 data:(id)arg2;
- (void)bezierCurveTo:(CGPath *)arg1 data:(id)arg2;
- (void)arc:(CGPath *)arg1 data:(id)arg2;
- (void)arcTo:(CGPath *)arg1 data:(id)arg2;
- (void)setHasClip:(BOOL)arg1;
- (BOOL)getHasClip;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end

