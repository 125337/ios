@interface MMProgressViewExLayer : CAShapeLayer
{
    double angle; // +0x8
}
+ (BOOL)needsDisplayForKey:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)drawInContext:(CGContext *)arg1;
- (double)angle;
- (void)setAngle:(double)arg1;
@end

