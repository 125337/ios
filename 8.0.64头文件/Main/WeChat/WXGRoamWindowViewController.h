@interface WXGRoamWindowViewController : MMWindowViewController <IRoamBackupPackageServiceExt, IRoamOutBoxServiceExt, IRoamGuideConnectedDelegate>
{
    unsigned long long m_notifyCode; // +0x80
    UIScrollView * m_smallTipsHelpView; // +0x88
    UIView * m_imageBackgroundView; // +0x90
    UIImageView * m_iconImageView; // +0x98
    MMUILabel * m_tipsLabel; // +0xa0
    MMUILabel * m_smallTipsLabel; // +0xa8
    MMUILabel * m_detailTipsLabel; // +0xb0
    UIButton * m_greenButton; // +0xb8
    UIButton * m_greyButton; // +0xc0
    MMProgressView * m_progressView; // +0xc8
    MMUILabel * m_progressLabel; // +0xd0
    MMUIActivityIndicatorView * m_indicatorView; // +0xd8
    BOOL m_lastActivity; // +0xe0
    BOOL m_prepareToStart; // +0xe1
    unsigned long long m_curSessionCnt; // +0xe8
    unsigned long long m_totalSessionCnt; // +0xf0
    BOOL m_isBackup; // +0xf8
    BOOL _hasRetried; // +0xf9
    BOOL _isCallingWillApper; // +0xfa
    float _backupProgress; // +0xfc
    UIView * _backgroundView; // +0x100
    UIScrollView * _sheetView; // +0x108
    UINavigationItem * _customNavigationItem; // +0x110
    MMUINavigationBar * _customNavigationBar; // +0x118
    UIView * _autoBackupView; // +0x120
    UILabel * _autoBackupLabel; // +0x128
    UIView * _recoverView; // +0x130
    MMTimer * _transferTimer; // +0x138
    AffRoamTransferStats * _curStat; // +0x140
    NSString * _speedString; // +0x148
    NSString * _leftTimeString; // +0x150
    unsigned long long _curSpeed; // +0x158
    unsigned long long _speedCount; // +0x160
    unsigned long long _chatLogSize; // +0x168
    unsigned long long _selectedSize; // +0x170
    unsigned long long _transferSize; // +0x178
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupView;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)hideWithAnimated:(int)arg1;
- (void)showWithAnimated:(int)arg1;
- (void)addNavigationBarInfo;
- (void)addIconImageView;
- (void)addTipsLabel;
- (void)addSmallTipsLabel;
- (void)addGreenButton;
- (void)addGreyButton;
- (void)addProgressView;
- (id)getConnectRemindView;
- (void)onPermission;
- (void)onSelectAll;
- (void)onSelectPart;
- (void)onSelectAllRestore;
- (void)onRetry;
- (void)onResetRestore;
- (void)onRetryRestore;
- (void)onTapStop;
- (void)onCancelUsingState;
- (void)onSelectPartRestore;
- (void)onManagerDevice;
- (void)onCloseView;
- (void)onCancelPrepare;
- (void)onCancelDisconnectStart;
- (void)onPressCancelBtn;
- (void)onMinimizeView;
- (void)onDisconnect;
- (void)onPressEndBtn;
- (void)onPause;
- (void)onResume;
- (void)onReGetConv;
- (void)onGetTransferStat;
- (void)analysisStat:(id)arg1;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceGetChatLogSize:(unsigned long long)arg1 ofPackage:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceStopFinishRet:(int)arg1;
- (void)onRoamOutBoxServiceFinishCreateBackupMenu:(BOOL)arg1 dirURL:(id)arg2 deviceId:(id)arg3;
- (void)onGuideConnected;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)customNavigationItem;
- (void)setCustomNavigationItem:(id)arg1;
- (id)customNavigationBar;
- (void)setCustomNavigationBar:(id)arg1;
- (id)autoBackupView;
- (void)setAutoBackupView:(id)arg1;
- (id)autoBackupLabel;
- (void)setAutoBackupLabel:(id)arg1;
- (id)recoverView;
- (void)setRecoverView:(id)arg1;
- (id)transferTimer;
- (void)setTransferTimer:(id)arg1;
- (id)curStat;
- (void)setCurStat:(id)arg1;
- (id)speedString;
- (void)setSpeedString:(id)arg1;
- (id)leftTimeString;
- (void)setLeftTimeString:(id)arg1;
- (float)backupProgress;
- (void)setBackupProgress:(float)arg1;
- (unsigned long long)curSpeed;
- (void)setCurSpeed:(unsigned long long)arg1;
- (unsigned long long)speedCount;
- (void)setSpeedCount:(unsigned long long)arg1;
- (unsigned long long)chatLogSize;
- (void)setChatLogSize:(unsigned long long)arg1;
- (unsigned long long)selectedSize;
- (void)setSelectedSize:(unsigned long long)arg1;
- (unsigned long long)transferSize;
- (void)setTransferSize:(unsigned long long)arg1;
- (BOOL)hasRetried;
- (void)setHasRetried:(BOOL)arg1;
- (BOOL)isCallingWillApper;
- (void)setIsCallingWillApper:(BOOL)arg1;
- (void).cxx_destruct;
@end
