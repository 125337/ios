@interface MMLiveHeaderButton : WCFinderMaskButton
{
    FinderShopShelfHeaderButton * _buttonInfo; // +0x8
    id /* block */ _clickBlock; // +0x10
    UIColor * _customBackgroundColor; // +0x18
    UIColor * _titleColor; // +0x20
    UIColor * _subTitleColor; // +0x28
    UILabel * _tailSubtitleLabel; // +0x30
}
- (id)initWithButtonInfo:(id)arg1;
- (void)setupLabels;
- (void)setupButtonStyle;
- (void)setupButtonAction;
- (id)normalBgColor;
- (void)buttonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg1;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (id)customBackgroundColor;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)subTitleColor;
- (void)setSubTitleColor:(id)arg1;
- (id)tailSubtitleLabel;
- (void)setTailSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
