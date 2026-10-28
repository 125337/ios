@interface WCPayUploadIDCardTipsViewController : MMWindowViewController <ILinkEventExt>
{
    id <WCPayUploadIDCardTipsViewControllerDelegate> _delegate; // +0x80
    WCPayRealnameGuideInfo * _realNameInfo; // +0x88
    UIView * _backgroundView; // +0x90
    UIScrollView * _contentView; // +0x98
    UIButton * _closeButton; // +0xa0
    UIImageView * _icon; // +0xa8
    UILabel * _titleLabel; // +0xb0
    UIView * _separatorLine; // +0xb8
    UILabel * _subTitleLabel; // +0xc0
    UIButton * _uploadButton; // +0xc8
    RichTextView * _termsOfService; // +0xd0
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
