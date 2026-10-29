@interface MMMusicDirectSetStatusMarqueeLabel : MMUIView
{
    CAGradientLayer * _maskLayer; // +0x8
    MMUILabel * _labelForDefault; // +0x10
    MMUILabel * _labelForMarquee; // +0x18
    unsigned long long _mode; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)labelForDefault;
- (id)labelForMarquee;
- (void)initMaskLayer;
- (void)removeMaskLayer;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)labelSizeToFit;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (void)setLabelForDefault:(id)arg1;
- (void)setLabelForMarquee:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

