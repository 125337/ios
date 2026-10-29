@interface _TtC6WeChat26MMLiveAIGCGiftProgressRing : UIView
{
    double progress; // +0x8
     _progress; // +0x10
     trackLayer; // +0x18
     progressLayer; // +0x20
     trackColor; // +0x28
     progressColor; // +0x30
    double lineWidth; // +0x38
}
- (double)progress;
- (void)setProgress:(double)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)showProgressLayer;
- (void)hideProgressLayer;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
