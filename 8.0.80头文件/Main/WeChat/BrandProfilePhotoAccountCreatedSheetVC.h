@interface BrandProfilePhotoAccountCreatedSheetVC : UIViewController <WCBrandOverFullscreenAnimatable, UIViewControllerTransitioningDelegate>
{
    NSString * _nickname; // +0x8
    NSString * _headImgUrl; // +0x10
    UIControl * _maskView; // +0x18
    UIView * _containerView; // +0x20
    MMWebImageView * _avatarImageView; // +0x28
    UILabel * _nicknameLabel; // +0x30
    UILabel * _descLabel; // +0x38
    UIButton * _confirmButton; // +0x40
    WXMASConstraint * _topConstraint; // +0x48
    WXMASConstraint * _bottomConstraint; // +0x50
    WCBrandOverFullscreenAnimator * _customAnimator; // +0x58
}
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)setupUI;
- (void)dismiss;
- (void)updateLayoutForOverFullscreenPresentAnimationWithContainerView:(id)arg1;
- (void)playOverFullscreenPresentAnimation;
- (void)playOverFullscreenDismissAnimation;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)topConstraint;
- (void)setTopConstraint:(id)arg1;
- (id)bottomConstraint;
- (void)setBottomConstraint:(id)arg1;
- (id)customAnimator;
- (void)setCustomAnimator:(id)arg1;
- (void).cxx_destruct;
@end
