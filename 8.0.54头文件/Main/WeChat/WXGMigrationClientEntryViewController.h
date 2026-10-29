@interface WXGMigrationClientEntryViewController : MMWindowViewController <IMigrationClientExt, ILinkEventExt, MMCircleProgressViewDelegate, CNetworkStatusExt, IMMNewSessionMgrExt>
{
    UIButton * m_leftTopCornerButton; // +0x78
    UIImageView * m_iconImageView; // +0x80
    UIView * m_imageBackgroundView; // +0x88
    MMUIActivityIndicatorView * m_indicatorView; // +0x90
    NSString * m_lastIconName; // +0x98
    BOOL m_lastActivity; // +0xa0
    MMUILabel * m_tipsLabel; // +0xa8
    MMUILabel * m_smallTipsLabel; // +0xb0
    UIScrollView * m_smallTipsHelpView; // +0xb8
    NSString * m_lastSmallTipString; // +0xc0
    MMUILabel * m_titleInGBPLable; // +0xc8
    MMCircleProgressView * m_circularProgressView; // +0xd0
    RichTextView * m_greyTextView; // +0xd8
    UIButton * m_greenButton; // +0xe0
    UIButton * m_greyButton; // +0xe8
    MMUILabel * m_wifiTipLabel; // +0xf0
    UIView * m_btnSeperatorView; // +0xf8
    unsigned long long m_notifyCode; // +0x100
    unsigned long long m_childNotifyCode; // +0x108
    WXGDotDotDotLabel * m_dotDotDotLabel; // +0x110
    MMProgressView * m_progressView; // +0x118
    MMUILabel * m_progressLabel; // +0x120
    unsigned long long m_currentSessionCount; // +0x128
    unsigned long long m_totalSessionCount; // +0x130
    unsigned long long m_currentProcessCount; // +0x138
    unsigned long long m_totalProcessCount; // +0x140
    NSString * m_speedString; // +0x148
    unsigned long long m_speedCount; // +0x150
    unsigned long long m_currentRecvSize; // +0x158
    unsigned long long m_totalSize; // +0x160
    unsigned long long m_currentShowAlertViewTag; // +0x168
    BOOL m_bUserCancelImport; // +0x170
    UILabel * m_debugInfoLabel; // +0x178
    float _migrationProgress; // +0x180
    id <WXGMigrationClientEntryViewControllerDelegate> _delegate; // +0x188
    UIScrollView * _sheetView; // +0x190
    UINavigationItem * _customNavigationItem; // +0x198
    MMUINavigationBar * _customNavigationBar; // +0x1a0
    UIView * _backgroundView; // +0x1a8
    NSString * _speedString; // +0x1b0
    NSString * _leftTimeString; // +0x1b8
}
- (id)init;
- (void)unregisterAllExtension;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)p_setupView;
- (void)p_addLeftCornerButton;
- (void)p_addIconImageView;
- (void)p_addTipsLabel;
- (void)p_addSmallTipsLabel;
- (void)p_addGreenButton;
- (void)p_addGreyButton;
- (void)addProgressView;
- (void)onClientMigrationAlertCode:(unsigned long long)arg1;
- (void)onClientMigrationNotifyCode:(unsigned long long)arg1;
- (void)onClientMigrationNotifyProgressCurrent:(unsigned long long)arg1 totalProgress:(unsigned long long)arg2;
- (void)onClientMigrationNotifySessionCurrent:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onClientMigrationCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientMigrationCurrentTransferSpeed:(float)arg1;
- (void)onClientProcessCurrentProgress:(float)arg1;
- (void)onClientMigrationTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)circleProgressViewDidTapped:(id)arg1;
- (void)onMinimizeView;
- (void)onCloseView;
- (void)onStartImport;
- (void)onCancelImport;
- (void)onStopImport;
- (void)onCancelMigration;
- (void)onPauseMigration;
- (void)onShowContinueToImport;
- (void)onShowBuildHotspotTip;
- (void)onReScanCode;
- (void)onAlertNowShouldRecoverData;
- (void)onAlertPhoneSizeNotEnough;
- (void)onMigrationNewImport;
- (void)onMigrationAllData;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)jumpToPrivacySetting;
- (void)jumpToBuildHostspot;
- (void)jumpToFeedback;
- (id)getConnectRemindView;
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
- (id)speedString;
- (void)setSpeedString:(id)arg1;
- (id)leftTimeString;
- (void)setLeftTimeString:(id)arg1;
- (float)migrationProgress;
- (void)setMigrationProgress:(float)arg1;
- (void).cxx_destruct;
@end

