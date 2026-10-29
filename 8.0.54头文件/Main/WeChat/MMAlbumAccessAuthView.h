@interface MMAlbumAccessAuthView : UIView
{
    BOOL _isWechatAuthorized; // +0x8
    BOOL _showWechatAuthStyle; // +0x9
    id <MMAlbumAccessAuthViewDelegate> _delegate; // +0x10
    double _topPadding; // +0x18
    unsigned long long _authScene; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _descLabel; // +0x30
    UIButton * _openSettingButton; // +0x38
    MMUIButton * _showLimitPhotoButton; // +0x40
    UIImageView * _iconImageView; // +0x48
    MMUIButton * _wechatAuthButton; // +0x50
}
- (void)updateContent;
- (void)initViewForWechatNotAuth;
- (void)initViewForSystemNotAuth;
- (void)layoutSubviews;
- (void)onOpenSetting:(id)arg1;
- (void)onShowLimitedPhoto:(id)arg1;
- (void)onRequestWechatAuth:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)topPadding;
- (void)setTopPadding:(double)arg1;
- (BOOL)isWechatAuthorized;
- (void)setIsWechatAuthorized:(BOOL)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)openSettingButton;
- (void)setOpenSettingButton:(id)arg1;
- (id)showLimitPhotoButton;
- (void)setShowLimitPhotoButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)wechatAuthButton;
- (void)setWechatAuthButton:(id)arg1;
- (BOOL)showWechatAuthStyle;
- (void)setShowWechatAuthStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end

