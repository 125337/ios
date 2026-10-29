@interface MMWebviewOAuthRemindHalfScreenView : UIView
{
    id /* block */ _authblock; // +0x8
    UIImageView * _warningIcon; // +0x10
    UILabel * _remindLabel; // +0x18
    UIButton * _authButton; // +0x20
    UIImageView * _arrowIcon; // +0x28
    UIView * _highlightView; // +0x30
}
- (id)initWithAuthBlock:(id /* block */)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (double)calceRemindLabelWidthWithWidth:(double)arg1;
- (double)calcButtonPaddingWithWidth:(double)arg1;
- (void)updateMaskLayer;
- (void)setWidth:(double)arg1;
- (id)warningIcon;
- (id)remindLabel;
- (id)authButton;
- (id)arrowIcon;
- (id)highlightView;
- (void)onAuthButtonClicked;
- (void)showHighlightAnimation;
- (id /* block */)authblock;
- (void)setAuthblock:(id /* block */)arg1;
- (void)setWarningIcon:(id)arg1;
- (void)setRemindLabel:(id)arg1;
- (void)setAuthButton:(id)arg1;
- (void)setArrowIcon:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void).cxx_destruct;
@end
