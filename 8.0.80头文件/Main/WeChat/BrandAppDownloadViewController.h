@interface BrandAppDownloadViewController : UIViewController <WCBrandOverFullscreenAnimatable, UIViewControllerTransitioningDelegate>
{
    NSString * _panelTitle; // +0x8
    NSString * _panelDesc; // +0x10
    double _titleTopInset; // +0x18
    NSString * _operationTitle; // +0x20
    NSString * _cancelTitle; // +0x28
    id /* block */ _onClickOperation; // +0x30
    id /* block */ _onCancelOperation; // +0x38
    UIImageView * _appIconImageView; // +0x40
    UIView * _appIconView; // +0x48
    UIStackView * _infoStackView; // +0x50
    UILabel * _appNameLabel; // +0x58
    UILabel * _appInfoLabel; // +0x60
    UIStackView * _buttonStackView; // +0x68
    UIButton * _cancelButton; // +0x70
    UIButton * _operationButton; // +0x78
    UIControl * _maskView; // +0x80
    UIView * _containerView; // +0x88
    WXMASConstraint * _topConstraint; // +0x90
    WXMASConstraint * _bottomConstraint; // +0x98
    WCBrandOverFullscreenAnimator * _customAnimator; // +0xa0
}
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (BOOL)shouldSyncBackgroundColorToExtendedContentView;
- (void)setupUI;
- (void)setupPanel;
- (void)setupAction;
- (void)didClickMask;
- (void)didClickCancelButton;
- (void)didClickOperation;
- (void)updateLayoutForOverFullscreenPresentAnimationWithContainerView:(id)arg1;
- (void)playOverFullscreenPresentAnimation;
- (void)playOverFullscreenDismissAnimation;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)panelTitle;
- (void)setPanelTitle:(id)arg1;
- (id)panelDesc;
- (void)setPanelDesc:(id)arg1;
- (double)titleTopInset;
- (void)setTitleTopInset:(double)arg1;
- (id)operationTitle;
- (void)setOperationTitle:(id)arg1;
- (id)cancelTitle;
- (void)setCancelTitle:(id)arg1;
- (id /* block */)onClickOperation;
- (void)setOnClickOperation:(id /* block */)arg1;
- (id /* block */)onCancelOperation;
- (void)setOnCancelOperation:(id /* block */)arg1;
- (id)appIconImageView;
- (void)setAppIconImageView:(id)arg1;
- (id)appIconView;
- (void)setAppIconView:(id)arg1;
- (id)infoStackView;
- (void)setInfoStackView:(id)arg1;
- (id)appNameLabel;
- (void)setAppNameLabel:(id)arg1;
- (id)appInfoLabel;
- (void)setAppInfoLabel:(id)arg1;
- (id)buttonStackView;
- (void)setButtonStackView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)operationButton;
- (void)setOperationButton:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)topConstraint;
- (void)setTopConstraint:(id)arg1;
- (id)bottomConstraint;
- (void)setBottomConstraint:(id)arg1;
- (id)customAnimator;
- (void)setCustomAnimator:(id)arg1;
- (void).cxx_destruct;
@end
