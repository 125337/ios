@interface _TtC6WeChat25WCFinderSimpleProgressBar : UIView
{
    _TtC6WeChat31WCFinderSimpleProgressBarConfig * config; // +0x8
     highlightBar; // +0x10
     value; // +0x18
}
- (id)config;
- (void)setConfig:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithValue:(double)arg1;
- (void)updateWithValue:(double)arg1 animation:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
