@interface WXGMigrationClientEntryViewController : MMWindowViewController <IMigrationClientExt, ILinkEventExt, MMCircleProgressViewDelegate, CNetworkStatusExt, IMMNewSessionMgrExt>
{
    UIButton * m_leftTopCornerButton; // +0x80
    UIImageView * m_iconImageView; // +0x88
    UIView * m_imageBackgroundView; // +0x90
    MMUIActivityIndicatorView * m_indicatorView; // +0x98
    NSString * m_lastIconName; // +0xa0
    BOOL m_lastActivity; // +0xa8
    MMUILabel * m_tipsLabel; // +0xb0
    MMUILabel * m_smallTipsLabel; // +0xb8
    UIScrollView * m_smallTipsHelpView; // +0xc0
    NSString * m_lastSmallTipString; // +0xc8
    MMUILabel * m_titleInGBPLable; // +0xd0
    MMCircleProgressView * m_circularProgressView; // +0xd8
    RichTextView * m_greyTextView; // +0xe0
    UIButton * m_greenButton; // +0xe8
    UIButton * m_greyButton; // +0xf0
    MMUILabel * m_wifiTipLabel; // +0xf8
    UIView * m_btnSeperatorView; // +0x100
    unsigned long long m_notifyCode; // +0x108
    unsigned long long m_childNotifyCode; // +0x110
    WXGDotDotDotLabel * m_dotDotDotLabel; // +0x118
    MMProgressView * m_progressView; // +0x120
    MMUILabel * m_progressLabel; // +0x128
    unsigned long long m_currentSessionCount; // +0x130
    unsigned long long m_totalSessionCount; // +0x138
    unsigned long long m_currentProcessCount; // +0x140
    unsigned long long m_totalProcessCount; // +0x148
    NSString * m_speedString; // +0x150
    unsigned long long m_speedCount; // +0x158
    unsigned long long m_currentRecvSize; // +0x160
    unsigned long long m_totalSize; // +0x168
    unsigned long long m_currentShowAlertViewTag; // +0x170
    BOOL m_bUserCancelImport; // +0x178
    UILabel * m_debugInfoLabel; // +0x180
    BOOL _isMigrationOptEnable; // +0x188
    BOOL _isStartTransfer; // +0x189
    float _migrationProgress; // +0x18c
    id <WXGMigrationClientEntryViewControllerDelegate> _delegate; // +0x190
    UIScrollView * _sheetView; // +0x198
    UIView * _backgroundView; // +0x1a0
    NSString * _speedString; // +0x1a8
    NSString * _leftTimeString; // +0x1b0
    UIView * _centerViewContainer; // +0x1b8
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
- (void)p_addCenterView;
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
- (void)onCloseViewAndShowMain;
- (void)onStartImport;
- (void)onCancelImport;
- (void)onStopImport;
- (void)doCancelMigration;
- (void)onCancelMigration;
- (void)onPauseMigration;
- (void)onShowContinueToImport;
- (void)onShowBuildHotspotTip;
- (void)onReScanCode;
- (void)onAlertNowShouldRecoverData;
- (void)onAlertPhoneSizeNotEnough;
- (void)onAlertNoChatLog;
- (void)onAlertQrcodeExpired;
- (void)onMigrationNewImport;
- (void)onMigrationAllData;
- (void)onConfirmNextBtn;
- (void)onHelpImportFromOhterPhone;
- (void)onScanQrcodeBtn;
- (void)onHelpFindExportEntrance;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)jumpToPrivacySetting;
- (void)jumpToBuildHostspot;
- (void)jumpToFeedback;
- (id)getConnectRemindView;
- (void)reportPageChange:(unsigned long long)arg1 newCode:(unsigned long long)arg2;
- (id)getReportParamsForPageByNotifyCode:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)speedString;
- (void)setSpeedString:(id)arg1;
- (id)leftTimeString;
- (void)setLeftTimeString:(id)arg1;
- (float)migrationProgress;
- (void)setMigrationProgress:(float)arg1;
- (BOOL)isMigrationOptEnable;
- (void)setIsMigrationOptEnable:(BOOL)arg1;
- (id)centerViewContainer;
- (void)setCenterViewContainer:(id)arg1;
- (BOOL)isStartTransfer;
- (void)setIsStartTransfer:(BOOL)arg1;
- (void).cxx_destruct;
@end
