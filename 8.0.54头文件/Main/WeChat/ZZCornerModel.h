@interface ZZCornerModel : NSObject
{
    CAShapeLayer * _layer; // +0x8
    long long _position; // +0x10
    double _radius; // +0x18
    UIColor * _color; // +0x20
    double _borderWidth; // +0x28
}
- (id)layer;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (void).cxx_destruct;
@end

