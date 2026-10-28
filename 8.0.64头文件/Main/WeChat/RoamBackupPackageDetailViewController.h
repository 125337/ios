@interface RoamBackupPackageDetailViewController : MMUIViewController <IRoamBackupPackageServiceExt, NSLayoutManagerDelegate, WCActionSheetDelegate, IRoamGuideConnectedDelegate, IRoamLiteBannerExt>
{
    BOOL _bLastActivity; // +0x70
    BOOL _isDeleted; // +0x71
    BOOL _hasRetried; // +0x72
    BOOL _autoRetryOnEntered; // +0x73
    float _backupProgress; // +0x74
    UIScrollView * _uiScrollView; // +0x78
    UIView * _uiContainerView; // +0x80
    UIImageView * _uiTitleIconView; // +0x88
    UITextView * _uiTitleTextView; // +0x90
    UIView * _uiTitleSeperator; // +0x98
    UIImage * _iconImage; // +0xa0
    UIView * _uiMainView; // +0xa8
    UIImageView * _mainIconView; // +0xb0
    MMUIActivityIndicatorView * _indicatorView; // +0xb8
    SightIconView * _sightIconView; // +0xc0
    UILabel * _uiMainTitleLabel; // +0xc8
    UILabel * _uiMainSubTitleLabel; // +0xd0
    MMProgressView * _progressView; // +0xd8
    UILabel * _progressLabel; // +0xe0
    UIButton * _uiMainBtn; // +0xe8
    UIButton * _uiMainSubBtn; // +0xf0
    UIButton * _uiMainSecSubBtn; // +0xf8
    UIView * _uiMainSeperator; // +0x100
    WXGRoamBackupPackageDetailCell * _uiStoreDevCell; // +0x108
    WXGRoamBackupPackageDetailCell * _uiContentsCell; // +0x110
    WXGRoamBackupPackageDetailCell * _uiRangeCell; // +0x118
    WXGRoamBackupPackageDetailCell * _uiAutoBackupCell; // +0x120
    NSString * _titleText; // +0x128
    AffRoamTransferStats * _curStat; // +0x130
    unsigned long long _transferSize; // +0x138
    NSString * _speedString; // +0x140
    NSString * _leftTimeString; // +0x148
    unsigned long long _curSpeed; // +0x150
    unsigned long long _costTime; // +0x158
    unsigned long long _speedCount; // +0x160
    unsigned long long _selectedSize; // +0x168
    double _enterTimestamp; // +0x170
    unsigned long long _lastNotifyCode; // +0x178
    _NSRange _linkRange; // +0x180
}
- (id)init;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)setupViews;
- (CGRect)getScrollViewFrame;
- (CGRect)getContainerViewFrame;
- (void)updateCells;
- (void)viewDidLayoutSubviews;
- (void)updateScrollContentSize;
- (void)setupTitleView;
- (void)updateTitleView;
- (id)buildAttributedStringWithFont:(id)arg1 model:(id)arg2;
- (void)handleIconTap:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)adjustIconPosition;
- (void)setupMainView;
- (void)updateMainView;
- (void)updateBottomViewEnable;
- (void)setupMainIconImageView;
- (void)setupMainTipsLabel;
- (void)setupMainSubTipsLabel;
- (void)onGetTransferStat;
- (void)analysisStat:(id)arg1;
- (void)setupProgressView;
- (void)onTapLearnDetail:(id)arg1;
- (unsigned long long)getCharacterIndex:(id)arg1;
- (void)onTapChangeConnection:(id)arg1;
- (void)setupGreenButton;
- (void)setupGreyButton;
- (void)onTapStoreDev;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)onTapContents;
- (void)onTapRange;
- (void)onTapAutoBackup;
- (void)onTapBackup;
- (void)onTapToConnect;
- (void)onStartRestore;
- (void)onTapPause;
- (void)onTapResume;
- (void)onTapStop;
- (void)onTapCancel;
- (void)onTapRestore;
- (BOOL)isNeedToShowToast:(BOOL)arg1;
- (void)onCancelPrepare;
- (void)onPressEndBtn;
- (void)onTapRightNavItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTapDelete;
- (void)onNotiryToNormal;
- (void)goToAppStoreAndNotifyToNormal;
- (void)onIgnoreAutoBackupFail;
- (void)onCancelUsingState;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)notifyRoamLiteStartTaskResultWith:(unsigned long long)arg1;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageServiceBackupRestoreConflict:(BOOL)arg1;
- (void)onRoamBackupPackageServiceDeleteProgress:(unsigned long long)arg1 progress:(float)arg2;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)arg1 models:(id)arg2;
- (void)onRoamBackupPackageServiceDeviceConnectRes:(BOOL)arg1 packageID:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (void)onRoamBackupPackageServiceFinishGetAllPackageWithError:(int)arg1;
- (void)onRoamLiteStopAllTask;
- (void)onRoamDeviceInfoUpdated:(id)arg1;
- (void)onGuideConnected;
- (void)dealloc;
- (void)onHideRoamWindowVC;
- (id)uiScrollView;
- (void)setUiScrollView:(id)arg1;
- (id)uiContainerView;
- (void)setUiContainerView:(id)arg1;
- (id)uiTitleIconView;
- (void)setUiTitleIconView:(id)arg1;
- (id)uiTitleTextView;
- (void)setUiTitleTextView:(id)arg1;
- (id)uiTitleSeperator;
- (void)setUiTitleSeperator:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)uiMainView;
- (void)setUiMainView:(id)arg1;
- (id)mainIconView;
- (void)setMainIconView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)sightIconView;
- (void)setSightIconView:(id)arg1;
- (id)uiMainTitleLabel;
- (void)setUiMainTitleLabel:(id)arg1;
- (id)uiMainSubTitleLabel;
- (void)setUiMainSubTitleLabel:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (id)uiMainBtn;
- (void)setUiMainBtn:(id)arg1;
- (id)uiMainSubBtn;
- (void)setUiMainSubBtn:(id)arg1;
- (id)uiMainSecSubBtn;
- (void)setUiMainSecSubBtn:(id)arg1;
- (id)uiMainSeperator;
- (void)setUiMainSeperator:(id)arg1;
- (id)uiStoreDevCell;
- (void)setUiStoreDevCell:(id)arg1;
- (id)uiContentsCell;
- (void)setUiContentsCell:(id)arg1;
- (id)uiRangeCell;
- (void)setUiRangeCell:(id)arg1;
- (id)uiAutoBackupCell;
- (void)setUiAutoBackupCell:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (BOOL)bLastActivity;
- (void)setBLastActivity:(BOOL)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (BOOL)hasRetried;
- (void)setHasRetried:(BOOL)arg1;
- (id)curStat;
- (void)setCurStat:(id)arg1;
- (unsigned long long)transferSize;
- (void)setTransferSize:(unsigned long long)arg1;
- (id)speedString;
- (void)setSpeedString:(id)arg1;
- (id)leftTimeString;
- (void)setLeftTimeString:(id)arg1;
- (unsigned long long)curSpeed;
- (void)setCurSpeed:(unsigned long long)arg1;
- (unsigned long long)costTime;
- (void)setCostTime:(unsigned long long)arg1;
- (unsigned long long)speedCount;
- (void)setSpeedCount:(unsigned long long)arg1;
- (unsigned long long)selectedSize;
- (void)setSelectedSize:(unsigned long long)arg1;
- (_NSRange)linkRange;
- (void)setLinkRange:(_NSRange)arg1;
- (float)backupProgress;
- (void)setBackupProgress:(float)arg1;
- (double)enterTimestamp;
- (unsigned long long)lastNotifyCode;
- (void)setLastNotifyCode:(unsigned long long)arg1;
- (BOOL)autoRetryOnEntered;
- (void)setAutoRetryOnEntered:(BOOL)arg1;
- (void).cxx_destruct;
@end
