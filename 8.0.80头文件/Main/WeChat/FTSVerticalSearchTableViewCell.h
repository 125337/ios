@interface FTSVerticalSearchTableViewCell : MMTableViewCell
{
    AttributeLabel * _tipsLabel; // +0x8
    UIImageView * _searchIcon; // +0x10
    UIView * _lineView; // +0x18
    UIImageView * _indicatorView; // +0x20
}
+ (double)getCellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)layoutSubviews;
- (void)updateTips:(id)arg1 hightLightText:(id)arg2;
- (void)addBottomSeperateLine;
- (id)searchIcon;
- (id)tipsLabel;
- (id)indicatorView;
- (unsigned long long)accessibilityTraits;
- (void)setTipsLabel:(id)arg1;
- (void)setSearchIcon:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void)setIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
