@interface MMFinderLiveCashOutMultiAuthViewController : MMUIViewController <MMWebViewDelegate>
{
    BOOL _success; // +0x70
    FinderEncashPrepareInfo * _info; // +0x78
    NSString * _phoneNumberSessionID; // +0x80
    NSString * _realNameCode; // +0x88
    UILabel * _titleLabel; // +0x90
    UILabel * _descriptionLabel; // +0x98
    MMFinderLiveCashOutAuthTypeView * _realNameView; // +0xa0
    MMFinderLiveCashOutAuthTypeView * _phoneNumberView; // +0xa8
    UIButton * _button; // +0xb0
}
- (id)initWithInfo:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onPhoneNumberViewClicked;
- (void)onRealNameViewClicked;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)updateDoneButton;
- (void)onDoneButtonClicked;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)phoneNumberSessionID;
- (void)setPhoneNumberSessionID:(id)arg1;
- (id)realNameCode;
- (void)setRealNameCode:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)realNameView;
- (void)setRealNameView:(id)arg1;
- (id)phoneNumberView;
- (void)setPhoneNumberView:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end
