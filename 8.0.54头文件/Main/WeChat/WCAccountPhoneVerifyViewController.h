@interface WCAccountPhoneVerifyViewController : WCAccountBaseViewController <IAutoVerifySMSExt, WCBaseInfoItemDelegate>
{
    id <WCAccountPhoneVerifyViewControllerDelegate> _delegate; // +0x78
    MMUILabel * _titleLabel; // +0x80
    WCRedesignButtonItem * _phoneNumberButtonItem; // +0x88
    WCRedesignVerifyCodeTextItem * _verifyCodeTextItem; // +0x90
    UIButton * _submitButton; // +0x98
}
- (id)init;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initView;
- (void)onNext;
- (void)onPhoneVerifyBack;
- (void)onPhoneVerifyAgain;
- (void)onTapVoiceVerifyCodeButton;
- (void)checkNext;
- (void)startTimer;
- (void)reportTime:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)OnHandleOpenAutoVerifySMS:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)phoneNumberButtonItem;
- (void)setPhoneNumberButtonItem:(id)arg1;
- (id)verifyCodeTextItem;
- (void)setVerifyCodeTextItem:(id)arg1;
- (id)submitButton;
- (void)setSubmitButton:(id)arg1;
- (void).cxx_destruct;
@end

