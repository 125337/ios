@interface WCFinderProfileEventView : UIView
{
    BOOL _showCoveredStyle; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _detailLabel; // +0x20
    UIImageView * _rightArrowView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setShowCoveredStyle:(BOOL)arg1;
- (void)updateWithEventInfo:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)iconView;
- (id)titleLabel;
- (id)detailLabel;
- (id)rightArrowView;
- (void)onTap;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)showCoveredStyle;
- (void)setIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setRightArrowView:(id)arg1;
- (void).cxx_destruct;
@end
