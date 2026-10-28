@interface WAProfileServiceHeaderView : UIView
{
    GetProfileInfoResponse_RelievedBuyInfo * _buyInfo; // +0x8
    id /* block */ _buttonClickAction; // +0x10
    WAProfileEasyBuyIconView * _iconView; // +0x18
    UILabel * _titleLabel; // +0x20
    YYLabel * _descLabel; // +0x28
}
+ (double)viewHeightByBuyInfo:(id)arg1;
- (id)initWithButtonClickAction:(id /* block */)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setBuyInfo:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)buyInfo;
- (id /* block */)buttonClickAction;
- (void)setButtonClickAction:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
