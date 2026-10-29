@interface WCPayUploadIDCardTipsViewController : MMWindowViewController <ILinkEventExt>
{
    id <WCPayUploadIDCardTipsViewControllerDelegate> _delegate; // +0x78
    WCPayRealnameGuideInfo * _realNameInfo; // +0x80
    UIView * _backgroundView; // +0x88
    UIScrollView * _contentView; // +0x90
    UIButton * _closeButton; // +0x98
    UIImageView * _icon; // +0xa0
    UILabel * _titleLabel; // +0xa8
    UIView * _separatorLine; // +0xb0
    UILabel * _subTitleLabel; // +0xb8
    UIButton * _uploadButton; // +0xc0
    RichTextView * _termsOfService; // +0xc8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)close;
- (void)uploadIdCard;
- (void)openTermsOfService;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)createDotLabel;
- (id)backgroundView;
- (id)contentView;
- (id)closeButton;
- (id)icon;
- (id)titleLabel;
- (id)separatorLine;
- (id)subTitleLabel;
- (id)uploadButton;
- (id)termsOfService;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)realNameInfo;
- (void)setRealNameInfo:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSeparatorLine:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setUploadButton:(id)arg1;
- (void)setTermsOfService:(id)arg1;
- (void).cxx_destruct;
@end

