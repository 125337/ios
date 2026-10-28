@interface WAFloatObject : NSObject
{
    BOOL _enterScreen; // +0x8
    NSString * _content; // +0x10
    double _initOffset; // +0x18
    UIColor * _color; // +0x20
    double _speed; // +0x28
    double _textWidth; // +0x30
    double _time; // +0x38
    CGPoint _position; // +0x40
}
- (id)content;
- (void)setContent:(id)arg1;
- (CGPoint)position;
- (void)setPosition:(CGPoint)arg1;
- (double)initOffset;
- (void)setInitOffset:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (double)speed;
- (void)setSpeed:(double)arg1;
- (double)textWidth;
- (void)setTextWidth:(double)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (void).cxx_destruct;
@end
