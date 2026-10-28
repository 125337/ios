@interface WCSVGGradient : NSObject
{
    NSString * _gradientId; // +0x8
    long long _type; // +0x10
    double _radius; // +0x18
    NSMutableArray * _stops; // +0x20
    CGPoint _startPoint; // +0x28
    CGPoint _endPoint; // +0x38
    CGAffineTransform _gradientTransform; // +0x48
}
- (id)initWithType:(long long)arg1 attributes:(id)arg2;
- (void)addStopWithAttributes:(id)arg1;
- (CGGradient *)gradientFromTintColor:(id)arg1;
- (void)applyGradientToStyledPath:(id)arg1 tintColor:(id)arg2 inContext:(CGContext *)arg3;
- (id)gradientId;
- (void)setGradientId:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (CGAffineTransform)gradientTransform;
- (void)setGradientTransform:(CGAffineTransform)arg1;
- (CGPoint)startPoint;
- (void)setStartPoint:(CGPoint)arg1;
- (CGPoint)endPoint;
- (void)setEndPoint:(CGPoint)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (id)stops;
- (void)setStops:(id)arg1;
- (void).cxx_destruct;
@end
