@interface ContactsImportGuideViewController : MMUIViewController <ContactsImportLogicDelegate>
{
    ContactsImportLogic * _contactsImportLogic; // +0x68
    UIImageView * _iconImageView; // +0x70
    UILabel * _titleLabel; // +0x78
    UILabel * _subtitleLabel; // +0x80
    UIButton * _button; // +0x88
}
- (id)initWithQRCode:(id)arg1;
- (void)viewDidLoad;
- (void)initView;
- (id)navigationBarBackgroundColor;
- (void)layoutControllerView;
- (void)onTapCloseNavigationItem;
- (void)onTapButton;
- (void)onBindOldWechatAccountSucceeded:(id)arg1;
- (void)onBindOldWechatAccountFailed:(id)arg1 errorMessage:(id)arg2 canRecover:(BOOL)arg3;
- (id)contactsImportLogic;
- (void)setContactsImportLogic:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end

