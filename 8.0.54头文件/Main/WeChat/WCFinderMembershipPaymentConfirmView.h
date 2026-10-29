@interface WCFinderMembershipPaymentConfirmView : MMPageSheetBaseView
{
    id <WCFinderMembershipPaymentConfirmViewDelegate> _delegate; // +0x8
    WCFinderMaskButton * _confirmButton; // +0x10
    MMUIView * _contentView; // +0x18
    MMHeadImageView * _avatarImageView; // +0x20
    UILabel * _titleLabel; // +0x28
    MMUIButton * _closeButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 nickname:(id)arg2;
- (double)contentViewHeight;
- (void)onCloseButtonClicked;
- (void)onConfirmButtonClicked;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end

