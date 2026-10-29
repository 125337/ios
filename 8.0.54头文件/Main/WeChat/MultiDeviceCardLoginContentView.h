@interface MultiDeviceCardLoginContentView : UIView
{
    BOOL _agreementSelected; // +0x8
    MultiDeviceLoginInfo * _deviceLoginInfo; // +0x10
    id <MultiDeviceCardViewDelegate> _delegate; // +0x18
    UIImageView * _iconImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _deviceNameLabel; // +0x30
    MMUILabel * _tipsLabel; // +0x38
    UIScrollView * _tipsContainerView; // +0x40
    WCAgreementCheckBox * _syncChatCheckbox; // +0x48
    WCAgreementCheckBox * _autoLoginCheckbox; // +0x50
    UIButton * _confirmButton; // +0x58
    UIButton * _cancelButton; // +0x60
    WCAgreementCheckBox * _agreementCheckBox; // +0x68
    long long _errorType; // +0x70
    MMTimer * _timeoutTimer; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setDeviceLoginInfo:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)updateContent;
- (void)updateLayout;
- (BOOL)enableRescanQRCode;
- (id)tips;
- (id)getLoginConfirmInfo;
- (void)onLoginConfirmFailed;
- (void)onTapAutoLoginCheckbox:(id)arg1;
- (void)onTapConfirmButton;
- (void)onTapCancelButton;
- (void)onTimeout;
- (id)tipsLabel;
- (id)deviceLoginInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)deviceNameLabel;
- (void)setDeviceNameLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (id)tipsContainerView;
- (void)setTipsContainerView:(id)arg1;
- (id)syncChatCheckbox;
- (void)setSyncChatCheckbox:(id)arg1;
- (id)autoLoginCheckbox;
- (void)setAutoLoginCheckbox:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)agreementCheckBox;
- (void)setAgreementCheckBox:(id)arg1;
- (BOOL)agreementSelected;
- (void)setAgreementSelected:(BOOL)arg1;
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (void).cxx_destruct;
@end

