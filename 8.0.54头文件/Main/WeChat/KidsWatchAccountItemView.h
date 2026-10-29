@interface KidsWatchAccountItemView : UIControl
{
    double _cornerRadius; // +0x8
    KidsAcctInfo * _accountInfo; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMUILabel * _nicknameLabel; // +0x20
    MMUILabel * _deviceLabel; // +0x28
    CAShapeLayer * _dotLayer; // +0x30
    MMUILabel * _statusLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;
- (void)setAccountInfo:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (double)cornerRadius;
- (id)accountInfo;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)deviceLabel;
- (void)setDeviceLabel:(id)arg1;
- (id)dotLayer;
- (void)setDotLayer:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (void).cxx_destruct;
@end

