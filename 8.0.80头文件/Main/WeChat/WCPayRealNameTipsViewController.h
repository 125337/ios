@interface WCPayRealNameTipsViewController : MMWindowViewController <ILinkEventExt, MMWebViewDelegate>
{
    id <WCPayRealNameTipsViewControllerDelegate> _delegate; // +0x80
    id <WCPayRealNameTipsViewControllerDelegate> _reportDelegate; // +0x88
    WCPayRealnameGuideInfo * _realNameInfo; // +0x90
    UIView * _backgroundView; // +0x98
    UIScrollView * _contentView; // +0xa0
    UIButton * _closeButton; // +0xa8
    UIImageView * _icon; // +0xb0
    UILabel * _titleLabel; // +0xb8
    UIView * _separatorLine; // +0xc0
    UILabel * _subTitleLabel; // +0xc8
    UIButton * _confirmButton; // +0xd0
    RichTextView * _termsOfService; // +0xd8
    MMUIButton * _checkBoxButton; // +0xe0
    RichTextView * _checkBoxInfo; // +0xe8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)close;
- (void)confirm;
- (void)openWeb:(id)arg1;
- (void)clickCheckBox:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)webViewReturn:(id)arg1;
- (id)createDotLabel;
- (id)backgroundView;
- (id)contentView;
- (void)layoutForBalance;
- (id)closeButton;
- (id)icon;
- (id)titleLabel;
- (id)separatorLine;
- (id)subTitleLabel;
- (id)confirmButton;
- (id)termsOfService;
- (id)checkBoxButton;
- (id)checkBoxInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)realNameInfo;
- (void)setRealNameInfo:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSeparatorLine:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setTermsOfService:(id)arg1;
- (void)setCheckBoxButton:(id)arg1;
- (void)setCheckBoxInfo:(id)arg1;
- (void).cxx_destruct;
@end
