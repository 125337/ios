@interface MultiTalkScreenSharingAudienceBackgroundView : UIView
{
    BOOL _isOperationViewsHidden; // +0x8
    BOOL _canShowUserAvatarView; // +0x9
    BOOL _isLandscapeSupport; // +0xa
    UIView * _topBar; // +0x10
    UIButton * _closeButton; // +0x18
    UIButton * _orientationButton; // +0x20
    UILabel * _titleLabel; // +0x28
    id /* block */ _closeCallback; // +0x30
    id /* block */ _userTapToChangeOperationViewsAppearanceCallback; // +0x38
    NSString * _sharingScreenUserName; // +0x40
    NSString * _currentTalkingUserName; // +0x48
    MultiTalkHDHeadView * _userAvatarView; // +0x50
    UIImageView * _talkingIcon; // +0x58
    id /* block */ _orientationButtonCallback; // +0x60
    CAGradientLayer * _topBarGradientLayer; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 shouldSupportTapGesture:(BOOL)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutTopBar;
- (void)layoutCloseButton;
- (void)layoutOrientationButton;
- (void)layoutTitleLabel;
- (void)layoutUserAvatarView;
- (void)updateUserAvatar;
- (void)checkAndAnimateToHideUserAvatarView;
- (void)onCloseButtonClick;
- (void)onOrientationButtonClick:(id)arg1;
- (void)onTapView;
- (void)clearData;
- (void)updateSharingScreenUserName:(id)arg1;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)rotationDetectorRoationDidChange:(id)arg1;
- (id)topBar;
- (void)setTopBar:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)orientationButton;
- (void)setOrientationButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id /* block */)closeCallback;
- (void)setCloseCallback:(id /* block */)arg1;
- (id /* block */)userTapToChangeOperationViewsAppearanceCallback;
- (void)setUserTapToChangeOperationViewsAppearanceCallback:(id /* block */)arg1;
- (BOOL)isOperationViewsHidden;
- (void)setIsOperationViewsHidden:(BOOL)arg1;
- (id)sharingScreenUserName;
- (void)setSharingScreenUserName:(id)arg1;
- (id)currentTalkingUserName;
- (void)setCurrentTalkingUserName:(id)arg1;
- (id)userAvatarView;
- (void)setUserAvatarView:(id)arg1;
- (id)talkingIcon;
- (void)setTalkingIcon:(id)arg1;
- (BOOL)canShowUserAvatarView;
- (void)setCanShowUserAvatarView:(BOOL)arg1;
- (BOOL)isLandscapeSupport;
- (void)setIsLandscapeSupport:(BOOL)arg1;
- (id /* block */)orientationButtonCallback;
- (void)setOrientationButtonCallback:(id /* block */)arg1;
- (id)topBarGradientLayer;
- (void)setTopBarGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
