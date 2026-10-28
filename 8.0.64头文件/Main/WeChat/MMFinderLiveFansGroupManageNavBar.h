@interface MMFinderLiveFansGroupManageNavBar : UIView
{
    id /* block */ _leftButtonActionCallback; // +0x8
    id /* block */ _rightButtonActionCallback; // +0x10
    UIView * _navLeftButton; // +0x18
    UIButton * _navRightButton; // +0x20
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
- (void)updateUI;
- (id)getCurrentLeftButton;
- (id)getCurrentRightView;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (id /* block */)leftButtonActionCallback;
- (void)setLeftButtonActionCallback:(id /* block */)arg1;
- (id /* block */)rightButtonActionCallback;
- (void)setRightButtonActionCallback:(id /* block */)arg1;
- (id)navLeftButton;
- (void)setNavLeftButton:(id)arg1;
- (id)navRightButton;
- (void)setNavRightButton:(id)arg1;
- (void).cxx_destruct;
@end
