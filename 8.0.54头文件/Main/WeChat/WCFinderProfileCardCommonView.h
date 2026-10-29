@interface WCFinderProfileCardCommonView : UIView
{
    UIImageView * _iconView; // +0x8
    UIView * _outIconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _summaryLabel; // +0x20
    UIImageView * _tailIconView; // +0x28
    id /* block */ _onClick; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)update:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onTap;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)outIconView;
- (void)setOutIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)summaryLabel;
- (void)setSummaryLabel:(id)arg1;
- (id)tailIconView;
- (void)setTailIconView:(id)arg1;
- (id /* block */)onClick;
- (void)setOnClick:(id /* block */)arg1;
- (void).cxx_destruct;
@end

