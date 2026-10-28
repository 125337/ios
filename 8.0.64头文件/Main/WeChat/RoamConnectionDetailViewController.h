@interface RoamConnectionDetailViewController : MMUIViewController <IRoamBackupPackageServiceExt, INetworkStatusMgrExt, IOnlineClientMgrExt>
{
    BOOL _isPresentMode; // +0x70
    BOOL _isPCUsbEnabled; // +0x71
    id <IRoamGuideConnectedDelegate> _delegate; // +0x78
    UIView * _uiContainerView; // +0x80
    UIImageView * _uiMainIconView; // +0x88
    UILabel * _uiMainTitleLabel; // +0x90
    UIView * _uiCellContainerView; // +0x98
    UIView * _uiTipsContainerView; // +0xa0
    UILabel * _uiPcLoginLabel; // +0xa8
    UILabel * _uiConnectedLabel; // +0xb0
    UILabel * _uiPhoneConnectedLabel; // +0xb8
    UILabel * _uiPcConnectedLabel; // +0xc0
    UIButton * _uiBottomBtn; // +0xc8
    UIView * _uiButtonLoadingView; // +0xd0
    UIView * _pcLoginCell; // +0xd8
    UILabel * _step1Label; // +0xe0
    UILabel * _targetDeviceLabel; // +0xe8
    UIView * _seperator2; // +0xf0
    UIView * _connectCell; // +0xf8
    UIView * _seperator3; // +0x100
    unsigned long long _connectionType; // +0x108
    unsigned long long _state; // +0x110
    NSString * _pcWifiName; // +0x118
    NSString * _phoneWifiName; // +0x120
}
- (id)initWithConnectionType:(unsigned long long)arg1;
- (id)initWithPresentModeAndConnectionType:(unsigned long long)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)setState:(unsigned long long)arg1;
- (void)setupViews;
- (void)updateViews;
- (void)updateTipsView;
- (void)onTapToAllow:(id)arg1;
- (void)onTapUseUsb:(id)arg1;
- (void)onTapUseWifi:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onRoamBackupPackageServiceDeviceConnectRes:(BOOL)arg1 packageID:(unsigned long long)arg2;
- (void)onPCNetworkChangedWithWifi:(id)arg1 usbEnabled:(BOOL)arg2;
- (void)onOnlineInfoUpdated;
- (void)onGetWifiName:(id)arg1;
- (void)onTapNavBack;
- (void)setUiLabelAutoNewLine:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)uiContainerView;
- (void)setUiContainerView:(id)arg1;
- (id)uiMainIconView;
- (void)setUiMainIconView:(id)arg1;
- (id)uiMainTitleLabel;
- (void)setUiMainTitleLabel:(id)arg1;
- (id)uiCellContainerView;
- (void)setUiCellContainerView:(id)arg1;
- (id)uiTipsContainerView;
- (void)setUiTipsContainerView:(id)arg1;
- (id)uiPcLoginLabel;
- (void)setUiPcLoginLabel:(id)arg1;
- (id)uiConnectedLabel;
- (void)setUiConnectedLabel:(id)arg1;
- (id)uiPhoneConnectedLabel;
- (void)setUiPhoneConnectedLabel:(id)arg1;
- (id)uiPcConnectedLabel;
- (void)setUiPcConnectedLabel:(id)arg1;
- (id)uiBottomBtn;
- (void)setUiBottomBtn:(id)arg1;
- (id)uiButtonLoadingView;
- (void)setUiButtonLoadingView:(id)arg1;
- (id)pcLoginCell;
- (void)setPcLoginCell:(id)arg1;
- (id)step1Label;
- (void)setStep1Label:(id)arg1;
- (id)targetDeviceLabel;
- (void)setTargetDeviceLabel:(id)arg1;
- (id)seperator2;
- (void)setSeperator2:(id)arg1;
- (id)connectCell;
- (void)setConnectCell:(id)arg1;
- (id)seperator3;
- (void)setSeperator3:(id)arg1;
- (unsigned long long)connectionType;
- (void)setConnectionType:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)pcWifiName;
- (void)setPcWifiName:(id)arg1;
- (id)phoneWifiName;
- (void)setPhoneWifiName:(id)arg1;
- (BOOL)isPresentMode;
- (void)setIsPresentMode:(BOOL)arg1;
- (BOOL)isPCUsbEnabled;
- (void)setIsPCUsbEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
