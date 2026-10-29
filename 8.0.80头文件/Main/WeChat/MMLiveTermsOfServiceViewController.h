@interface MMLiveTermsOfServiceViewController : MMUIViewController <ILinkEventExt>
{
    BOOL _hasIdVerificationFollowup; // +0x70
    id <MMLiveTermsOfServiceViewControllerDelegate> _delegate; // +0x78
    FinderLiveAgreementInfo * _agreementInfo; // +0x80
    UILabel * _titleLabel; // +0x88
    MMUILabel * _descriptionLabel; // +0x90
    MMUIButton * _termsAcceptanceCheckbox; // +0x98
    RichTextView * _termsLabel; // +0xa0
    UIButton * _continueButton; // +0xa8
}
- (id)initWithAgreementInfo:(id)arg1 hasIdVerificationFollowup:(BOOL)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)onCheckboxTapped;
- (void)onContinueButtonTapped;
- (void)onCloseTapped;
- (void)initializeComponents;
- (id)termsLabelContent;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)agreementInfo;
- (void)setAgreementInfo:(id)arg1;
- (BOOL)hasIdVerificationFollowup;
- (void)setHasIdVerificationFollowup:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)termsAcceptanceCheckbox;
- (void)setTermsAcceptanceCheckbox:(id)arg1;
- (id)termsLabel;
- (void)setTermsLabel:(id)arg1;
- (id)continueButton;
- (void)setContinueButton:(id)arg1;
- (void).cxx_destruct;
@end
