@interface HoneyPaySelectCardTypeCell : MMTableViewCell
{
    UIView * _highlightView; // +0x8
    double _highlightViewCornerRadius; // +0x10
    CGRect _highlightViewFrame; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateHighlightView;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (CGRect)highlightViewFrame;
- (void)setHighlightViewFrame:(CGRect)arg1;
- (double)highlightViewCornerRadius;
- (void)setHighlightViewCornerRadius:(double)arg1;
- (void).cxx_destruct;
@end
