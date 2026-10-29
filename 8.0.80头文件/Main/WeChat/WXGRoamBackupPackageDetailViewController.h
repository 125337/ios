@interface WXGRoamBackupPackageDetailViewController : MMUIViewController <IRoamBackupPackageServiceExt, ILinkDeviceExt>
{
    MMProgressView * m_progressView; // +0x70
    MMUILabel * m_progressLabel; // +0x78
    float _backupProgress; // +0x80
    UIView * _topView; // +0x88
    UIView * _topNameView; // +0x90
    UIView * _secondView; // +0x98
    UIView * _blockView; // +0xa0
    UIView * _mainView; // +0xa8
    UIButton * _backupButton; // +0xb0
    UILabel * _titleLabel; // +0xb8
    UIView * _runningView; // +0xc0
    UIImageView * _runningArrow; // +0xc8
    UIImageView * _runningIcon; // +0xd0
    UILabel * _runningLabel; // +0xd8
    UILabel * _backupTimeLabel; // +0xe0
    MMUIActivityIndicatorView * _runningIndicator; // +0xe8
    WXGRoamBackupPackageDetailCell * _sizeCell; // +0xf0
    WXGRoamBackupPackageDetailCell * _rangeCell; // +0xf8
    WXGRoamBackupPackageDetailCell * _autobackupCell; // +0x100
    WXGRoamBackupPackageDetailCell * _viewBackupedCell; // +0x108
    WXGRoamBackupPackageDetailCell * _deviceCell; // +0x110
    UIScrollView * _sheetView; // +0x118
    NSString * _speedString; // +0x120
    NSString * _leftTimeString; // +0x128
    unsigned long long _curSpeed; // +0x130
    unsigned long long _speedCount; // +0x138
    unsigned long long _transferSize; // +0x140
}
- (id)init;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupViews;
- (void)setupTopView;
- (void)setupTopNameView;
- (void)setupTopOtherView;
- (void)setupSecondView;
- (void)updateDeviceView;
- (BOOL)isNeedToShowToast:(BOOL)arg1;
- (void)getTransferStats;
- (void)updateBackupView;
- (void)addProgressView;
- (void)updateSize;
- (void)updateView;
- (void)setupNavBar;
- (void)onDetail;
- (void)analysisStat:(id)arg1;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)arg1;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)arg1;
- (void)onILinkDeviceUpdate:(id)arg1;
- (id)topView;
- (void)setTopView:(id)arg1;
- (id)topNameView;
- (void)setTopNameView:(id)arg1;
- (id)secondView;
- (void)setSecondView:(id)arg1;
- (id)blockView;
- (void)setBlockView:(id)arg1;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (id)backupButton;
- (void)setBackupButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)runningView;
- (void)setRunningView:(id)arg1;
- (id)runningArrow;
- (void)setRunningArrow:(id)arg1;
- (id)runningIcon;
- (void)setRunningIcon:(id)arg1;
- (id)runningLabel;
- (void)setRunningLabel:(id)arg1;
- (id)backupTimeLabel;
- (void)setBackupTimeLabel:(id)arg1;
- (id)runningIndicator;
- (void)setRunningIndicator:(id)arg1;
- (id)sizeCell;
- (void)setSizeCell:(id)arg1;
- (id)rangeCell;
- (void)setRangeCell:(id)arg1;
- (id)autobackupCell;
- (void)setAutobackupCell:(id)arg1;
- (id)viewBackupedCell;
- (void)setViewBackupedCell:(id)arg1;
- (id)deviceCell;
- (void)setDeviceCell:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
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
- (unsigned long long)transferSize;
- (void)setTransferSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
