@interface CircleProcessView : MMUIView
{
    double width; // +0x8
    double height; // +0x10
    UIImageView * _bgImage; // +0x18
    double _value; // +0x20
    UIColor * _progressTintColor; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (id)progressTintColor;
- (void)setProgress:(double)arg1;
- (id)bgImage;
- (void)setBgImage:(id)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (void)setProgressTintColor:(id)arg1;
- (void).cxx_destruct;
@end
