@interface MMFinderLiveAnchorCustomizeRewardNavBar : UIView
{
    id /* block */ _leftButtonActionCallback; // +0x8
    id /* block */ _rightButtonActionCallback; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    MMUIButton * _leftButton; // +0x28
    MMUIButton * _rightButton; // +0x30
}
- (id)init;
- (void)layoutSubviews;
- (void)setTitleText:(id)arg1;
- (id)titleText;
- (void)setSubTitleText:(id)arg1;
- (id)subTitleText;
- (void)setRightButtonEnable:(BOOL)arg1;
- (BOOL)rightButtonEnable;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (id /* block */)leftButtonActionCallback;
- (void)setLeftButtonActionCallback:(id /* block */)arg1;
- (id /* block */)rightButtonActionCallback;
- (void)setRightButtonActionCallback:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (void).cxx_destruct;
@end
