@interface WXGMigrationMainViewController : MMWindowViewController <IChatMigrationServerExt, IChatLogDataMgrExt, ILinkEventExt, CNetworkStatusExt, WXGChatLogSessionViewControllerDelegate>
{
    UIImageView * m_iconImageView; // +0x80
    UIImage * m_qrcodeImage; // +0x88
    int m_retryGetQRCodeTimes; // +0x90
    UIView * m_imageBackgroundView; // +0x98
    MMUIActivityIndicatorView * m_qrCodeLoadingView; // +0xa0
    MMUIActivityIndicatorView * m_indicatorView; // +0xa8
    NSString * m_lastIconName; // +0xb0
    BOOL m_lastActivity; // +0xb8
    UILabel * m_tipsLabel; // +0xc0
    UILabel * m_statusLabel; // +0xc8
    UIButton * m_greenButton; // +0xd0
    UIButton * m_greyButton; // +0xd8
    UIView * m_btnSeperatorView; // +0xe0
    unsigned long long m_notifyCode; // +0xe8
    unsigned long long m_childNotifyCode; // +0xf0
    unsigned long long m_currentSessionCount; // +0xf8
    unsigned long long m_totalSessionCount; // +0x100
    NSString * m_speedString; // +0x108
    unsigned long long m_speedCount; // +0x110
    MMProgressView * m_progressView; // +0x118
    MMUILabel * m_progressLabel; // +0x120
    BOOL m_bEnable; // +0x128
    BOOL m_bPressAllActionBtn; // +0x129
    BOOL _isShowQrcode; // +0x12a
    BOOL _isWillQuit; // +0x12b
    float _migrationProgress; // +0x12c
    id <WXGMigrationMainViewControllerDelegate> _delegate; // +0x130
    UIScrollView * _sheetView; // +0x138
    UIView * _backgroundView; // +0x140
    MMUILabel * _descriptionLabel; // +0x148
    MMUILabel * _loadingLabel; // +0x150
    MMUIActivityIndicatorView * _dataLoadingIndicator; // +0x158
    NSString * _speedString; // +0x160
    NSString * _leftTimeString; // +0x168
    WXGClickableLabel * _bottomGuideView; // +0x170
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)p_makeNavigationItem;
- (void)p_makeIconView;
- (void)p_makeTipsLabel;
- (void)p_makeStatusTipLabel;
- (void)addProgressView;
- (void)p_makeGreenButton;
- (void)p_makeGreyButton;
- (void)p_makeBottomGuide;
- (void)makeMainView;
- (void)onMinimizeView;
- (void)onPressCancelBtn;
- (void)onPressCancelWhenTransfer;
- (void)onFinishAndCloseView;
- (void)onPauseMigration;
- (void)onActionButtonPress;
- (void)onMigrationAllButtonPress;
- (void)onMigrationPortionButtonPress;
- (void)onShowSelectSessionView;
- (void)onAlertCancelTimeSelect;
- (void)onAlertCancelQuickMigration;
- (void)onAlertCancelQuickMigrationAndTimeSelect;
- (void)onOpenCameraScan;
- (void)p_makeQRCodeState;
- (void)p_makeQRCodeLoadingState;
- (void)p_makeQRCodeImageFinishWithIsFailure:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onMigrationServerGetQRCodeImg:(id)arg1;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationServerTransferSpeed:(float)arg1;
- (void)onMigrationCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onMigrationTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onChatLogDataLoadFinished;
- (void)onCancelSelectSession;
- (void)onChatLogSession:(id)arg1 selectSession:(id)arg2 selectAllTime:(BOOL)arg3 selectAllSession:(BOOL)arg4 selectTextOnly:(BOOL)arg5 minTime:(id)arg6 selectStartTime:(id)arg7 selectEndTime:(id)arg8;
- (void)doMigrationAll;
- (BOOL)checkBatteryEnough;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (id)dataLoadingIndicator;
- (void)setDataLoadingIndicator:(id)arg1;
- (id)speedString;
- (void)setSpeedString:(id)arg1;
- (id)leftTimeString;
- (void)setLeftTimeString:(id)arg1;
- (float)migrationProgress;
- (void)setMigrationProgress:(float)arg1;
- (BOOL)isShowQrcode;
- (void)setIsShowQrcode:(BOOL)arg1;
- (id)bottomGuideView;
- (void)setBottomGuideView:(id)arg1;
- (BOOL)isWillQuit;
- (void)setIsWillQuit:(BOOL)arg1;
- (void).cxx_destruct;
@end
