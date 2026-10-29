@interface BrandFansMsgPrivacyViewController : UIViewController <WCBrandOverFullscreenAnimatable, UIViewControllerTransitioningDelegate>
{
    int _bizType; // +0x8
    UIControl * _maskView; // +0x10
    UIView * _containerView; // +0x18
    UIStackView * _stackView; // +0x20
    UIImageView * _iconView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _descLabel; // +0x38
    UIButton * _confirmButton; // +0x40
    MMUIButton * _moreButton; // +0x48
    WXMASConstraint * _topConstraint; // +0x50
    WXMASConstraint * _bottomConstraint; // +0x58
    WCBrandOverFullscreenAnimator * _customAnimator; // +0x60
}
+ (void)showInController:(id)arg1 bizType:(int)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupUI;
- (void)setupPanel;
- (void)setupAction;
- (void)onClickMask;
- (void)onClickConfirm;
- (void)onClickLearnMore;
- (void)updateLayoutForOverFullscreenPresentAnimationWithContainerView:(id)arg1;
- (void)playOverFullscreenPresentAnimation;
- (void)playOverFullscreenDismissAnimation;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)stackView;
- (void)setStackView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)topConstraint;
- (void)setTopConstraint:(id)arg1;
- (id)bottomConstraint;
- (void)setBottomConstraint:(id)arg1;
- (id)customAnimator;
- (void)setCustomAnimator:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (void).cxx_destruct;
@end
