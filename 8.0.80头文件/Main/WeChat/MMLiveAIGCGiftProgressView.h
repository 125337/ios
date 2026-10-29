@interface MMLiveAIGCGiftProgressView : UIView
{
    double _progress; // +0x8
    NSString * _text; // +0x10
    double _ringSize; // +0x18
    UIFont * _font; // +0x20
    UIColor * _textColor; // +0x28
    double _spacing; // +0x30
    _TtC6WeChat26MMLiveAIGCGiftProgressRing * _progressRing; // +0x38
    UILabel * _textLabel; // +0x40
    double _ringLineWidth; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 ringSize:(double)arg2 font:(id)arg3 ringLineWidth:(double)arg4;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateLayout;
- (CGSize)intrinsicContentSize;
- (void)showProgress;
- (void)hideProgress;
- (void)setProgress:(double)arg1;
- (void)setText:(id)arg1;
- (void)setRingSize:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setSpacing:(double)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)progress;
- (id)text;
- (double)ringSize;
- (id)font;
- (id)textColor;
- (double)spacing;
- (id)progressRing;
- (void)setProgressRing:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (double)ringLineWidth;
- (void)setRingLineWidth:(double)arg1;
- (void).cxx_destruct;
@end
