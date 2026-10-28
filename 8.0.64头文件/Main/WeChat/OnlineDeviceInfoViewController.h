@interface OnlineDeviceInfoViewController : MMWindowViewController <WCActionSheetDelegate, IOnlineClientMgrExt>
{
    UIImage * _deviceImg; // +0x80
    UIImageView * _deviceView; // +0x88
    UIButton * _logoutBtn; // +0x90
    UILabel * _tipsLabel; // +0x98
    UILabel * _subLabel; // +0xa0
    UILabel * _descriptionLabel; // +0xa8
    UIButton * _cancelBtn; // +0xb0
    UIButton * _helpBtn; // +0xb8
    BOOL _isManualOpen; // +0xc0
    UIView * m_backgroundView; // +0xc8
    NSString * deviceNameTmp; // +0xd0
    id <OnlineDeviceInfoViewControllerDelegate> _delegate; // +0xd8
    unsigned long long _supportedOrientations; // +0xe0
    OnlineInfo * _onlineClient; // +0xe8
}
- (id)init;
- (id)initWithIsManualOpen:(BOOL)arg1;
- (void)unlockForMac:(id)arg1 isWindowExist:(BOOL)arg2;
- (void)onUnlockMac;
- (void)setIsloading:(BOOL)arg1;
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
- (void)onOnlineInfoUpdated;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedOrientations;
- (void)setSupportedOrientations:(unsigned long long)arg1;
- (id)onlineClient;
- (void)setOnlineClient:(id)arg1;
- (void).cxx_destruct;
@end
