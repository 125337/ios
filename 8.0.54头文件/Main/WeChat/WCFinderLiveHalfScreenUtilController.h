@interface WCFinderLiveHalfScreenUtilController : MMUIHalfScreenViewController <ILinkEventExt, MMUIHalfScreenViewControllerDelegate>
{
    BOOL _isShown; // +0x68
    BOOL _isAgreementChecked; // +0x69
    BOOL _isPolicy; // +0x6a
    id <WCFinderLiveHalfScreenUtilControllerDelegate> _verifyDelegate; // +0x70
    MMUIButton * _arrowButton; // +0x78
    MMUILabel * _infoTitle; // +0x80
    RichTextView * _infoDesc; // +0x88
    UIView * _checkBoxView; // +0x90
    MMUIButton * _agreementCheckbox; // +0x98
    RichTextView * _agreementText; // +0xa0
    UIButton * _confirmButton; // +0xa8
    long long _entryScene; // +0xb0
    NSString * _cliMsgId; // +0xb8
}
- (id)initWithEntryScene:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupUI;
- (void)layoutUI;
- (void)layoutCheckBoxView;
- (void)addShakeOnCheckBoxView;
- (void)updateAccessbility;
- (void)onCheckBoxClicked;
- (void)onConfirmButtonClicked;
- (void)onArrowButtonClicked;
- (void)popOrDismissSelf;
- (void)popOrDismissSelfWithCompletion:(id /* block */)arg1;
- (void)notifySelfPopedOrDismissed;
- (BOOL)shouldAgreementCheckBoxShown;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)verifyDelegate;
- (void)setVerifyDelegate:(id)arg1;
- (BOOL)isShown;
- (void)setIsShown:(BOOL)arg1;
- (id)arrowButton;
- (void)setArrowButton:(id)arg1;
- (id)infoTitle;
- (void)setInfoTitle:(id)arg1;
- (id)infoDesc;
- (void)setInfoDesc:(id)arg1;
- (id)checkBoxView;
- (void)setCheckBoxView:(id)arg1;
- (id)agreementCheckbox;
- (void)setAgreementCheckbox:(id)arg1;
- (id)agreementText;
- (void)setAgreementText:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (id)cliMsgId;
- (void)setCliMsgId:(id)arg1;
- (BOOL)isAgreementChecked;
- (void)setIsAgreementChecked:(BOOL)arg1;
- (BOOL)isPolicy;
- (void)setIsPolicy:(BOOL)arg1;
- (void).cxx_destruct;
@end

