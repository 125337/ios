@interface OnlineDeviceInfoViewController : MMWindowViewController <WCActionSheetDelegate, IOnlineClientMgrExt, IExtraDeviceLoginMgrExt>
{
    UIImage * _deviceImg; // +0x78
    UIImageView * _deviceView; // +0x80
    UIButton * _logoutBtn; // +0x88
    UILabel * _tipsLabel; // +0x90
    UILabel * _subLabel; // +0x98
    UILabel * _descriptionLabel; // +0xa0
    UIButton * _cancelBtn; // +0xa8
    UIButton * _helpBtn; // +0xb0
    BOOL _isManualOpen; // +0xb8
    UIView * m_backgroundView; // +0xc0
    NSString * deviceNameTmp; // +0xc8
    id <OnlineDeviceInfoViewControllerDelegate> _delegate; // +0xd0
    unsigned long long _supportedOrientations; // +0xd8
    OnlineInfo * _onlineClient; // +0xe0
}
- (id)init;
- (id)initWithIsManualOpen:(BOOL)arg1;
- (void)unlockForMac:(id)arg1 isWindowExist:(BOOL)arg2;
- (void)onUnlockMac;
- (void)onDeviceUnlock;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)addBlurEffectForView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupCancelBtn;
- (void)onHelp;
- (void)onCancelBtnClicked;
- (void)onCancel;
- (id)getDeviceImgWithIsMuted:(BOOL)arg1;
- (void)setupInfoView;
- (void)handleLockStatusChangesWithOnlineStatus;
- (void)onTopBarFrameChanged;
- (void)onExtDeviceOnlineStatusChanged;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedOrientations;
- (void)setSupportedOrientations:(unsigned long long)arg1;
- (id)onlineClient;
- (void)setOnlineClient:(id)arg1;
- (void).cxx_destruct;
@end

