@interface WCAccountBackDeviceFirstViewController : WCAccountBaseViewController
{
    id <WCAccountBackDeviceFirstViewControllerDelegate> m_delegate; // +0x78
    UIImageView * _weChatLogoImageView; // +0x80
    MMUILabel * _titleLabel; // +0x88
    WCRedesignButtonItem * _useBothButtonItem; // +0x90
    WCRedesignButtonItem * _iPadOnlyButtonItem; // +0x98
}
- (id)init;
- (void)viewDidLoad;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)onUseBothDevice;
- (void)onUseIPadOnly;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)weChatLogoImageView;
- (void)setWeChatLogoImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)useBothButtonItem;
- (void)setUseBothButtonItem:(id)arg1;
- (id)iPadOnlyButtonItem;
- (void)setIPadOnlyButtonItem:(id)arg1;
- (void).cxx_destruct;
@end

