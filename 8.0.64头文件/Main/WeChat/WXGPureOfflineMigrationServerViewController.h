@interface WXGPureOfflineMigrationServerViewController : MMUIViewController <WXGChatLogSessionViewControllerDelegate, IChatLogDataMgrExt>
{
    UIImageView * _imgView; // +0x70
    MMUIActivityIndicatorView * _loadingView; // +0x78
    UILabel * _titleLabel; // +0x80
    UILabel * _tipsLabel; // +0x88
    UIView * _tempViewContainer; // +0x90
    MMProgressView * _progressView; // +0x98
    UIButton * _greenBtn; // +0xa0
    UIButton * _greyBtn; // +0xa8
    UIButton * _linkBtn; // +0xb0
    UIImage * _qrcodeImage; // +0xb8
    BOOL _isViewSetup; // +0xc0
    BOOL _isVisible; // +0xc1
    BOOL _needRelayout; // +0xc2
    unsigned long long _notifyCode; // +0xc8
    long long _chatLogSize; // +0xd0
    BOOL _bIsRegistedExtension; // +0xd8
    BOOL _bStartAllClicked; // +0xd9
    NSString * _progressStr; // +0xe0
    float _progress; // +0xe8
    id <WXGPureOfflineMigrationServerViewControllerDelegate> _delegate; // +0xf0
    UIScrollView * _sheetView; // +0xf8
    UINavigationItem * _customNavigationItem; // +0x100
    MMUINavigationBar * _customNavigationBar; // +0x108
    UIView * _backgroundView; // +0x110
}
- (id)init;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupUIComponent;
- (void)updateNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)updateMainContentView;
- (void)updateTempView;
- (id)getConnectRemindView:(double)arg1;
- (void)updateView;
- (void)onNotifyCodeChange:(unsigned long long)arg1;
- (void)onTransferProgressChange:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)doCancel;
- (void)onPressCancelBtn;
- (void)onConfirmNextStepBtn;
- (void)onStartWithAllBtn;
- (void)onStartWithSpecificBtn;
- (void)onMigrationAllRange;
- (void)onMigrationNewRange;
- (void)onChatLogSession:(id)arg1 selectSession:(id)arg2 selectAllTime:(BOOL)arg3 selectAllSession:(BOOL)arg4 selectTextOnly:(BOOL)arg5 minTime:(id)arg6 selectStartTime:(id)arg7 selectEndTime:(id)arg8;
- (void)onCancelSelectSession;
- (void)makeQrcodeState;
- (void)onGetQrcodeComplete:(BOOL)arg1;
- (void)onGetQrcodeDone:(id)arg1;
- (void)onChatLogDataLoadFinished;
- (void)doIfBatteryEnoughOrConfirm:(id /* block */)arg1;
- (double)getSafeBottomInset;
- (void)jumpToPrivacySetting;
- (void)jumpToBuildHostspot;
- (void)jumpToFeedback;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)customNavigationItem;
- (void)setCustomNavigationItem:(id)arg1;
- (id)customNavigationBar;
- (void)setCustomNavigationBar:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end
