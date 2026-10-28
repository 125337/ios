@interface ZZSeparatorModel : NSObject
{
    CAShapeLayer * _layer; // +0x8
    UIColor * _color; // +0x10
    long long _position; // +0x18
    double _borderWidth; // +0x20
    double _offset; // +0x28
    double _begin; // +0x30
    double _end; // +0x38
    double _length; // +0x40
}
- (id)init;
- (id)layer;
- (id)color;
- (void)setColor:(id)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (double)offset;
- (void)setOffset:(double)arg1;
- (double)begin;
- (void)setBegin:(double)arg1;
- (double)end;
- (void)setEnd:(double)arg1;
- (double)length;
- (void)setLength:(double)arg1;
- (void).cxx_destruct;
@end
