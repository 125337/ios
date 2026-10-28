@interface WABrandTitleBar : UIView
{
    BOOL _avatarAlignLeft; // +0x8
    BOOL _enableAvatarButton; // +0x9
    BOOL _shouldShowShare; // +0xa
    BOOL _shouldShowClose; // +0xb
    BOOL _enableDarkMode; // +0xc
    BOOL _needGradientMaskView; // +0xd
    BOOL _hideAvatar; // +0xe
    BOOL _isCloseButtonShown; // +0xf
    id <WABrandTitleBarDelegate> _delegate; // +0x10
    NSString * _avatarUrl; // +0x18
    NSString * _nickName; // +0x20
    NSString * _subtitle; // +0x28
    UIButton * _shareButton; // +0x30
    UIColor * _foreColor; // +0x38
    WAAppTaskCapsuleMenu * _menuView; // +0x40
    NSString * _tipsText; // +0x48
    id /* block */ _tipsDidShowBlock; // +0x50
    id /* block */ _tipsDidClickCloseBlock; // +0x58
    UIView * _containerView; // +0x60
    MMWebImageView * _avatarImageView; // +0x68
    UIView * _nickNameContainerView; // +0x70
    UILabel * _nickNameLabel; // +0x78
    UIView * _titleContainerView; // +0x80
    UIView * _subtitleContainerView; // +0x88
    UILabel * _subtitleLabel; // +0x90
    UILabel * _supportByLabel; // +0x98
    UIImageView * _arrowImageView; // +0xa0
    UIButton * _closeButton; // +0xa8
    WASheetHeaderTipsView * _tipsView; // +0xb0
    UIView * _gradientMaskView; // +0xb8
    UILabel * _tipsLabel; // +0xc0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubViews;
- (void)initTipsView;
- (void)onClickTipsClose;
- (void)onPressHeader:(id)arg1;
- (void)showCloseButtonAnimated:(BOOL)arg1;
- (void)hideCloseButton;
- (void)setHeaderHighlighted:(BOOL)arg1;
- (void)setAvatarUrl:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setShouldShowShare:(BOOL)arg1;
- (void)setEnableAvatarButton:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutTitleContainerView;
- (void)layoutSubtitleContainerView;
- (BOOL)needShowSubtitle;
- (void)setSubtitle:(id)arg1;
- (void)updateAvatarFrame;
- (void)setNeedGradientMaskView:(BOOL)arg1;
- (void)onShare;
- (void)onClose;
- (id)snapShotImageView;
- (void)setEnableDarkMode:(BOOL)arg1;
- (void)setForeColor:(id)arg1;
- (void)updateShareButtonHidden;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)avatarUrl;
- (id)nickName;
- (id)subtitle;
- (id)shareButton;
- (void)setShareButton:(id)arg1;
- (BOOL)avatarAlignLeft;
- (void)setAvatarAlignLeft:(BOOL)arg1;
- (BOOL)enableAvatarButton;
- (BOOL)shouldShowShare;
- (BOOL)shouldShowClose;
- (void)setShouldShowClose:(BOOL)arg1;
- (BOOL)enableDarkMode;
- (BOOL)needGradientMaskView;
- (BOOL)hideAvatar;
- (void)setHideAvatar:(BOOL)arg1;
- (id)foreColor;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)tipsText;
- (void)setTipsText:(id)arg1;
- (id /* block */)tipsDidShowBlock;
- (void)setTipsDidShowBlock:(id /* block */)arg1;
- (id /* block */)tipsDidClickCloseBlock;
- (void)setTipsDidClickCloseBlock:(id /* block */)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameContainerView;
- (void)setNickNameContainerView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)titleContainerView;
- (void)setTitleContainerView:(id)arg1;
- (id)subtitleContainerView;
- (void)setSubtitleContainerView:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)supportByLabel;
- (void)setSupportByLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (BOOL)isCloseButtonShown;
- (void)setIsCloseButtonShown:(BOOL)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)gradientMaskView;
- (void)setGradientMaskView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
