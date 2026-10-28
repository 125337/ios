@interface WCPCMigrationEntryViewController : MMWindowViewController <WXGChatLogSessionViewControllerDelegate, IBackupExt, IChatLogDataMgrExt, INewSyncExt>
{
    UIScrollView * m_scrollView; // +0x80
    UIButton * m_leftTopCornerButton; // +0x88
    UIView * m_imageBackgroundView; // +0x90
    UIImageView * m_iconImageView; // +0x98
    MMUIActivityIndicatorView * m_indicatorView; // +0xa0
    NSString * m_lastIconName; // +0xa8
    BOOL m_lastActivity; // +0xb0
    NSString * m_lastNavigationTitle; // +0xb8
    MMUILabel * m_tipsLabel; // +0xc0
    MMUILabel * m_smallTipsLabel; // +0xc8
    UIScrollView * m_smallTipsHelpView; // +0xd0
    NSString * m_lastSmallTipString; // +0xd8
    MMUILabel * m_wifiTipLabel; // +0xe0
    WXGDotDotDotLabel * m_dotDotDotLabel; // +0xe8
    UIButton * m_greenButton; // +0xf0
    UIView * m_btnSeperatorView; // +0xf8
    UIButton * m_greyButton; // +0x100
    UILabel * m_debugInfoLabel; // +0x108
    unsigned long long m_notifyCode; // +0x110
    unsigned long long m_childrenCode; // +0x118
    MMProgressView * m_progressView; // +0x120
    MMUILabel * m_progressLabel; // +0x128
    unsigned long long m_curSessionCnt; // +0x130
    unsigned long long m_totalSessionCnt; // +0x138
    BOOL _isConfirmExportScene; // +0x140
    BOOL _isFromConfirmExportVC; // +0x141
    BOOL _bCanShowDisconnect; // +0x142
    BOOL _bSelectAllSession; // +0x143
    BOOL _bGetStartConfirm; // +0x144
    BOOL _isExport; // +0x145
    float _migrationProgress; // +0x148
    id <WCPCMigrationEntryViewControllerDelegate> _delegate; // +0x150
    unsigned long long _curShowAlertTag; // +0x158
    NSString * _speedString; // +0x160
    NSString * _leftTimeString; // +0x168
    unsigned long long _speedCount; // +0x170
    UINavigationItem * _customNavigationItem; // +0x178
    UIScrollView * _sheetView; // +0x180
    MMUINavigationBar * _customNavigationBar; // +0x188
    UIView * _backgroundView; // +0x190
    double _report_pageInTimeStamp; // +0x198
    NSString * _report_contactName; // +0x1a0
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setupView;
- (void)addNavigationBarInfo;
- (void)addIconImageView;
- (void)addGreenButton;
- (void)addGreyButton;
- (void)addTipsLabel;
- (void)addSmallTipsLabel;
- (void)addProgressView;
- (void)onMinimizeView;
- (void)onCloseView;
- (void)onPressCancelBtn;
- (void)onFinishAndCloseView;
- (void)onSendCancelAndCloseView;
- (void)onMigrateAllSession;
- (void)onShowMigrateSelect;
- (void)onConfirmAndStart;
- (void)onCancelMigratePC;
- (void)onCancelMigrateMobile;
- (void)onStartImport;
- (void)onStopImport;
- (void)onCancelImport;
- (void)onAlertNowShouldRecoverData;
- (void)onAlertShowNoSession;
- (void)onAlertShowEnergyIsNotEnough;
- (void)onPauseMigration;
- (void)onContinueMigrateToPC;
- (void)onContinueMigrateToMobile;
- (void)onContinueProgress;
- (void)showPCSizeNotEnough;
- (void)onConfirmExportSpecificConversationToPC;
- (void)onTapExportMore;
- (void)onChatLogSession:(id)arg1 selectSession:(id)arg2 selectAllTime:(BOOL)arg3 selectAllSession:(BOOL)arg4 selectTextOnly:(BOOL)arg5 minTime:(id)arg6 selectStartTime:(id)arg7 selectEndTime:(id)arg8;
- (void)onCancelSelectSession;
- (void)onBackupNotifyCode:(unsigned long long)arg1;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onBackupAlertCode:(unsigned long long)arg1;
- (void)onChatLogDataLoadFinished;
- (void)jumpToPrivacySetting;
- (void)jumpToBuildHostspot;
- (void)jumpToFeedback;
- (void)onAlertUpdateViewDissmissed;
- (void)onNewSyncCloseMigration:(id)arg1;
- (void)onNewSyncPauseMigration:(id)arg1;
- (BOOL)p_checkBatteryEnough;
- (BOOL)p_checkSessionData;
- (id)p_getCancelGreyButtonTitle;
- (SEL)p_getCancelGreyButtonSEL;
- (id)getConnectRemindView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isConfirmExportScene;
- (void)setIsConfirmExportScene:(BOOL)arg1;
- (BOOL)isFromConfirmExportVC;
- (void)setIsFromConfirmExportVC:(BOOL)arg1;
- (BOOL)bCanShowDisconnect;
- (void)setBCanShowDisconnect:(BOOL)arg1;
- (BOOL)bSelectAllSession;
- (void)setBSelectAllSession:(BOOL)arg1;
- (BOOL)bGetStartConfirm;
- (void)setBGetStartConfirm:(BOOL)arg1;
- (unsigned long long)curShowAlertTag;
- (void)setCurShowAlertTag:(unsigned long long)arg1;
- (id)speedString;
- (void)setSpeedString:(id)arg1;
- (id)leftTimeString;
- (void)setLeftTimeString:(id)arg1;
- (float)migrationProgress;
- (void)setMigrationProgress:(float)arg1;
- (unsigned long long)speedCount;
- (void)setSpeedCount:(unsigned long long)arg1;
- (id)customNavigationItem;
- (void)setCustomNavigationItem:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)customNavigationBar;
- (void)setCustomNavigationBar:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)isExport;
- (void)setIsExport:(BOOL)arg1;
- (double)report_pageInTimeStamp;
- (void)setReport_pageInTimeStamp:(double)arg1;
- (id)report_contactName;
- (void)setReport_contactName:(id)arg1;
- (void).cxx_destruct;
@end
