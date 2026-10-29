@interface MMOrderCenterTableViewCellSkuListExpander : UIView
{
    long long _remainingCount; // +0x8
    UILabel * _labelView; // +0x10
    UIImageView * _downChevronView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setRemainingCount:(long long)arg1;
- (void)layoutSubviews;
- (id)accessibilityElements;
- (long long)remainingCount;
- (id)labelView;
- (void)setLabelView:(id)arg1;
- (id)downChevronView;
- (void)setDownChevronView:(id)arg1;
- (void).cxx_destruct;
@end

