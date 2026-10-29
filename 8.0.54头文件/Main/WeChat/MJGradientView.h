@interface MJGradientView : MMUIView
+ (Class)layerClass;
- (id)gradientLayer;
- (void)configure:(id)arg1;
- (void)setColors:(id)arg1;
- (id)colors;
- (void)setLocations:(id)arg1;
- (id)locations;
- (void)setStartPoint:(CGPoint)arg1;
- (CGPoint)startPoint;
- (void)setEndPoint:(CGPoint)arg1;
- (CGPoint)endPoint;
@end

