@interface MMFinderLiveFansGroupManageNavBar : UIView
{
    BOOL _leftButtonHidden; // +0x8
    id /* block */ _leftButtonActionCallback; // +0x10
    id /* block */ _rightButtonActionCallback; // +0x18
    UIView * _navLeftButton; // +0x20
    UIButton * _navRightButton; // +0x28
}
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutNavLeftButton;
- (void)layoutNavRightButton;
- (id)rightButtonLabel;
- (void)setRightButtonLabel:(id)arg1;
- (BOOL)rightButtonHidden;
- (void)setRightButtonHidden:(BOOL)arg1;
- (void)setLeftButtonHidden:(BOOL)arg1;
- (void)updateUI;
- (id)getCurrentLeftButton;
- (id)getCurrentRightView;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (id /* block */)leftButtonActionCallback;
- (void)setLeftButtonActionCallback:(id /* block */)arg1;
- (id /* block */)rightButtonActionCallback;
- (void)setRightButtonActionCallback:(id /* block */)arg1;
- (BOOL)leftButtonHidden;
- (id)navLeftButton;
- (void)setNavLeftButton:(id)arg1;
- (id)navRightButton;
- (void)setNavRightButton:(id)arg1;
- (void).cxx_destruct;
@end
