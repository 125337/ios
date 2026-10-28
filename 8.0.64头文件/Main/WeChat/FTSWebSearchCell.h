@interface FTSWebSearchCell : MMTableViewCell
{
    MMUILabel * _keyLabel; // +0x8
    MMWebImageView * _searchIcon; // +0x10
    UIStackView * _labelContentView; // +0x18
    MMUILabel * _labelLeft; // +0x20
    MMUILabel * _subTitleLabel; // +0x28
    UIImageView * _indicatorView; // +0x30
    UIView * _bottomView; // +0x38
}
+ (double)getCellHeight;
+ (double)GetCellHeightForSublabelText:(id)arg1 width:(double)arg2;
+ (double)IconViewWidth;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)canShowLocalPageResult:(BOOL)arg1;
- (void)initView;
- (void)initViewOfKeywordStyle;
- (void)updateWord:(id)arg1 subTips:(id)arg2;
- (void)layoutSubviews;
- (void)layoutSubviewsOfKeywordStyle;
- (id)indicatorView;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIndicatorView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void).cxx_destruct;
@end
