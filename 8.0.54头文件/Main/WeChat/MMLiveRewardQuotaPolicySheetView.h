@interface MMLiveRewardQuotaPolicySheetView : MMPageSheetBaseView <ILinkEventExt>
{
    BOOL _isAgreementChecked; // +0x8
    id <MMLiveRewardQuotaPolicySheetViewDelegate> _delegate; // +0x10
    id _userInfo; // +0x18
    UIView * _contentView; // +0x20
    UIImageView * _imageView; // +0x28
    RichTextView * _descLabel; // +0x30
    UIView * _checkBoxView; // +0x38
    MMUIButton * _agreementCheckbox; // +0x40
    RichTextView * _agreementText; // +0x48
    MMUIButton * _closeButton; // +0x50
    MMUIButton * _actionButton; // +0x58
    MMUIButton * _cancelButton; // +0x60
    unsigned long long _verifyMode; // +0x68
    NSString * _verifyUrl; // +0x70
    NSString * _secverifyId; // +0x78
}
- (id)initWithVerifyMode:(unsigned long long)arg1 verifyUrl:(id)arg2 secverifyId:(id)arg3 userInfo:(id)arg4;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)addShakeOnCheckBoxView;
- (void)updateAccessbility;
- (BOOL)isFaceVerify;
- (BOOL)isFlowSign;
- (id)warningText;
- (id)actionButtonText;
- (id)cancelButtonText;
- (id)protocalLinkText;
- (double)contentViewHeight;
- (void)onCloseAction:(id)arg1;
- (void)onCheckBoxClicked;
- (void)onActionButtonClicked;
- (void)onClickCancelButton:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)checkBoxView;
- (void)setCheckBoxView:(id)arg1;
- (id)agreementCheckbox;
- (void)setAgreementCheckbox:(id)arg1;
- (id)agreementText;
- (void)setAgreementText:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (BOOL)isAgreementChecked;
- (void)setIsAgreementChecked:(BOOL)arg1;
- (unsigned long long)verifyMode;
- (void)setVerifyMode:(unsigned long long)arg1;
- (id)verifyUrl;
- (void)setVerifyUrl:(id)arg1;
- (id)secverifyId;
- (void)setSecverifyId:(id)arg1;
- (void).cxx_destruct;
@end

