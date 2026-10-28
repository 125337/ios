@interface WCBackupEntryViewController : MMWindowViewController <WXGChatLogSessionViewControllerDelegate, IBackupExt, IChatLogDataMgrExt, ILinkEventExt>
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
    CTRichTextView * m_smallTipsHelpLabel; // +0xd0
    WXGDotDotDotLabel * m_dotDotDotLabel; // +0xd8
    MMUILabel * m_wifiTipLabel; // +0xe0
    CTRichTextView * m_helpTipsLabel; // +0xe8
    UIButton * m_greenButton; // +0xf0
    UIView * m_btnSeperatorView; // +0xf8
    UIButton * m_greyButton; // +0x100
    UILabel * m_debugInfoLabel; // +0x108
    unsigned long long m_notifyCode; // +0x110
    unsigned long long m_childrenCode; // +0x118
    unsigned long long m_curSessionCnt; // +0x120
    unsigned long long m_totalSessionCnt; // +0x128
    BOOL _bCanShowDisconnect; // +0x130
    BOOL _bSelectAllSession; // +0x131
    BOOL _bGetStartConfirm; // +0x132
    id <WCBackupEntryViewControllerDelegate> _delegate; // +0x138
    unsigned long long _curShowAlertTag; // +0x140
    NSString * _speedString; // +0x148
    NSString * _leftTimeString; // +0x150
    unsigned long long _speedCount; // +0x158
    UINavigationItem * _customNavigationItem; // +0x160
    UIScrollView * _sheetView; // +0x168
    MMUINavigationBar * _customNavigationBar; // +0x170
    UIView * _backgroundView; // +0x178
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)addBlurEffectForView;
- (void)setupView;
- (void)addLeftCornerButton;
- (void)addIconImageView;
- (void)addGreenButton;
- (void)addGreyButton;
- (void)addTipsLabel;
- (void)addSmallTipsLabel;
- (void)onMinimizeView;
- (void)onCloseView;
- (void)onSendCancelAndCloseView;
- (void)onBackupAllSession;
- (void)onShowSelectSessionViewController;
- (void)onConfirmAndStart;
- (void)onStartImport;
- (void)onStopImport;
- (void)onCancelImport;
- (void)onCancelBackup;
- (void)onCancelRecoverTransfer;
- (void)onAlertNowShouldRecoverData;
- (void)onAlertShowNoSession;
- (void)onAlertShowMigratedCostTime;
- (void)onAlertShowEnergyIsNotEnough;
- (BOOL)p_checkBatteryEnough;
- (BOOL)p_checkSessionData;
- (void)onChatLogSession:(id)arg1 selectSession:(id)arg2 selectAllTime:(BOOL)arg3 selectAllSession:(BOOL)arg4 selectTextOnly:(BOOL)arg5 minTime:(id)arg6 selectStartTime:(id)arg7 selectEndTime:(id)arg8;
- (void)onCancelSelectSession;
- (void)onBackupNotifyCode:(unsigned long long)arg1;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onBackupAlertCode:(unsigned long long)arg1;
- (void)onChatLogDataLoadFinished;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
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
- (void).cxx_destruct;
@end
