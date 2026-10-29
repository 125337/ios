@interface MJGradientLabel : MMUILabel
{
    NSArray * _colors; // +0x8
    NSArray * _locations; // +0x10
    CGPoint _startPoint; // +0x18
    CGPoint _endPoint; // +0x28
}
- (void)drawTextInRect:(CGRect)arg1;
- (id)gradientColorInRect:(CGRect)arg1;
- (void)configure:(id)arg1;
- (id)cgColors;
- (double *)cgColorLocations;
- (CGPoint)gradientStartPointWithRect:(CGRect)arg1;
- (CGPoint)gradientEndPointWithRect:(CGRect)arg1;
- (id)colors;
- (void)setColors:(id)arg1;
- (id)locations;
- (void)setLocations:(id)arg1;
- (CGPoint)startPoint;
- (void)setStartPoint:(CGPoint)arg1;
- (CGPoint)endPoint;
- (void)setEndPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end

