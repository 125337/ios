@interface WCAccountFastSwitchLoginViewController : MMUIViewController
{
    id <WCAccountFastSwitchLoginViewControllerDelegate> _delegate; // +0x70
    UIView * _contentView; // +0x78
    UIImageView * _deviceIconView; // +0x80
    MMUILabel * _titleLabel; // +0x88
    UIButton * _cancelButton; // +0x90
}
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupUI;
- (void)setupFlexLayout;
- (void)applyLayout;
- (void)dealloc;
- (void)cancelButtonClicked;
- (void)backButtonClicked;
- (void)initNavigationItem;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)deviceIconView;
- (void)setDeviceIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end
