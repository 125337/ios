@interface MMFinderLiveReplayPaymentPolicyIntroView : MMFinderLivePaymentPolicyIntroView <ILinkEventExt>
{
    BOOL _isPreSale; // +0x8
    BOOL _agreementSelected; // +0x9
    BOOL _hasHandledAction; // +0xa
    NSArray * _pointDots; // +0x10
    NSArray * _pointLabels; // +0x18
    UIButton * _checkboxButton; // +0x20
    RichTextView * _agreementLabel; // +0x28
}
- (void)initUI;
- (void)setIsPreSale:(BOOL)arg1;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)updateAgreementLabel;
- (void)updateCheckbox;
- (void)onCheckboxClicked;
- (void)onPolicyCancelButtonClicked;
- (void)onPolicyConfirmButtonClicked;
- (void)pageSheetDidDismiss;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)isPreSale;
- (id)pointDots;
- (void)setPointDots:(id)arg1;
- (id)pointLabels;
- (void)setPointLabels:(id)arg1;
- (id)checkboxButton;
- (void)setCheckboxButton:(id)arg1;
- (id)agreementLabel;
- (void)setAgreementLabel:(id)arg1;
- (BOOL)agreementSelected;
- (void)setAgreementSelected:(BOOL)arg1;
- (BOOL)hasHandledAction;
- (void)setHasHandledAction:(BOOL)arg1;
- (void).cxx_destruct;
@end
