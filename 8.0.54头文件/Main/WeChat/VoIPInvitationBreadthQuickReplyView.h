@interface VoIPInvitationBreadthQuickReplyView : UIView
{
    BOOL _lookLikeInviteView; // +0x8
    BOOL _isCaptureImageVisable; // +0x9
    id <VoIPInvitationBreadthQuickReplyViewDelegate> _delegate; // +0x10
    double _lookLikeInviteViewTitleCenterY; // +0x18
    UIImageView * _backgroundView; // +0x20
    UIVisualEffectView * _visualEffectView; // +0x28
    UIImageView * _phoneIconImageView; // +0x30
    UILabel * _titleLabel; // +0x38
    UILabel * _actionLabel; // +0x40
    UIImageView * _jumpIconImageView; // +0x48
    XImageViewRenderer * _renderer; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 contact:(id)arg2;
- (void)setupCaptureImage:(id)arg1;
- (void)layoutSubviews;
- (void)onMyselfClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)lookLikeInviteView;
- (void)setLookLikeInviteView:(BOOL)arg1;
- (double)lookLikeInviteViewTitleCenterY;
- (void)setLookLikeInviteViewTitleCenterY:(double)arg1;
- (BOOL)isCaptureImageVisable;
- (void)setIsCaptureImageVisable:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)visualEffectView;
- (void)setVisualEffectView:(id)arg1;
- (id)phoneIconImageView;
- (void)setPhoneIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)actionLabel;
- (void)setActionLabel:(id)arg1;
- (id)jumpIconImageView;
- (void)setJumpIconImageView:(id)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (void).cxx_destruct;
@end

