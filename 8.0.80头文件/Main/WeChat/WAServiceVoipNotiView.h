@interface WAServiceVoipNotiView : WAVoipNotiView <MMVoipCSMainWindowDelegate>
{
    UILabel * _titleLabel; // +0x8
    UIView * _contentView; // +0x10
    UILabel * _nameLabel; // +0x18
    MMWebImageView * _iconView; // +0x20
    VoipAutoUpdateLabel * _descLabel; // +0x28
    UIButton * _rejectButton; // +0x30
    UIButton * _acceptButton; // +0x38
    MMWebImageView * _backgroundImageView; // +0x40
    UIView * _colorOverlayView; // +0x48
    UIVisualEffectView * _blurEffectView; // +0x50
}
- (void)setMsg:(id)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)handleClick;
- (void)handleAccept;
- (void)handleReject;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)rejectButton;
- (void)setRejectButton:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)colorOverlayView;
- (void)setColorOverlayView:(id)arg1;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg1;
- (void).cxx_destruct;
@end
