@interface CBTBrandLiveBadgeView : UIView
{
    UILabel * _label; // +0x8
    double _fixedHeight; // +0x10
    UIEdgeInsets _contentInsets; // +0x18
}
- (id)initWithText:(id)arg1;
- (void)setHighlightedStyle:(BOOL)arg1;
- (void)setText:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)label;
- (void)setLabel:(id)arg1;
- (UIEdgeInsets)contentInsets;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (double)fixedHeight;
- (void)setFixedHeight:(double)arg1;
- (void).cxx_destruct;
@end
