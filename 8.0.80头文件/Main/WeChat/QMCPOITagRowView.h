@interface QMCPOITagRowView : UIView
{
    NSArray * _chips; // +0x8
    NSMutableArray * _dividers; // +0x10
    double _spacing; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)chipViews;
- (void)setChips:(id)arg1;
- (void)layoutSubviews;
- (id)_dividerAtIndex:(unsigned long long)arg1;
- (CGSize)intrinsicContentSize;
- (double)spacing;
- (void)setSpacing:(double)arg1;
- (void).cxx_destruct;
@end
