@interface MMLoginExceptionCheckViewController : MMUIViewController
{
    id <MMAuthorizeViewControllerDelegate> _delegate; // +0x70
    UIImage * _alertImage; // +0x78
    UIImageView * _alertImageView; // +0x80
    UILabel * _titleLabel; // +0x88
    UILabel * _descriptionLabel; // +0x90
    UIButton * _comfirmButton; // +0x98
    UIButton * _denyButton; // +0xa0
}
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)initSubViews;
- (void)viewDidLayoutSubviews;
- (void)layoutSubviews;
- (void)onSafeCheckViewClickedConfirm;
- (void)onSafeCheckViewClickedDeny;
- (void)onClose;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)alertImage;
- (void)setAlertImage:(id)arg1;
- (id)alertImageView;
- (void)setAlertImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)comfirmButton;
- (void)setComfirmButton:(id)arg1;
- (id)denyButton;
- (void)setDenyButton:(id)arg1;
- (void).cxx_destruct;
@end
