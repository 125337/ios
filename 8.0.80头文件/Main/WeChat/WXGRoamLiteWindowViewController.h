@interface WXGRoamLiteWindowViewController : MMWindowViewController <IRoamBackupPackageServiceExt>
{
    double _topOffset; // +0x80
    BOOL _isVisible; // +0x88
    unsigned long long _chatlogSize; // +0x90
    UINavigationItem * _customNavigationItem; // +0x98
    UIBarButtonItem * _leftBackBtn; // +0xa0
    UIBarButtonItem * _rightCollapseBtn; // +0xa8
    UIScrollView * _sheetView; // +0xb0
    UIView * _mainView; // +0xb8
    UIView * _titleRow; // +0xc0
    UIView * _statusRow; // +0xc8
    UIImageView * _deviceIcon; // +0xd0
    UILabel * _packageTitle; // +0xd8
    UIImageView * _statusImage; // +0xe0
    MMUIActivityIndicatorView * _activityIndicator; // +0xe8
    UILabel * _statusTitle; // +0xf0
    UILabel * _statusTips; // +0xf8
    MMProgressView * _progressBar; // +0x100
    UIButton * _greenBtn; // +0x108
    UIButton * _greyBtn; // +0x110
    UIButton * _linkBtn; // +0x118
    AffRoamTransferStats * _stat; // +0x120
}
- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupNavBar;
- (void)setupViews;
- (void)setupTitleRowView;
- (void)setupMainContentView;
- (void)updateNavBar:(unsigned long long)arg1;
- (void)updateStatusImage:(unsigned long long)arg1;
- (void)updateStatusTitleAndTips:(id)arg1;
- (void)updateProgressBar:(unsigned long long)arg1 refreshLayout:(BOOL)arg2;
- (void)updateButton:(id)arg1;
- (void)updateView;
- (void)collapseWindow;
- (void)closeWindowAndNotifyPc;
- (void)startBackupTask;
- (void)startRestoreAll;
- (void)startRestoreSelected;
- (void)stopTask;
- (void)cancelPrepare;
- (void)resumeTask;
- (void)showCheckConnectionBottomSheet;
- (void)notifyStopFromError;
- (void)updateBannerByNotifyCode:(unsigned long long)arg1;
- (void)updateBannerByStats:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageServiceGetChatLogSize:(unsigned long long)arg1 ofPackage:(unsigned long long)arg2;
- (void)onRoamLiteStopAllTask;
- (void)onRoamBackupPackageServiceBackupRestoreConflict:(BOOL)arg1;
- (id)customNavigationItem;
- (void)setCustomNavigationItem:(id)arg1;
- (id)leftBackBtn;
- (void)setLeftBackBtn:(id)arg1;
- (id)rightCollapseBtn;
- (void)setRightCollapseBtn:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (id)titleRow;
- (void)setTitleRow:(id)arg1;
- (id)statusRow;
- (void)setStatusRow:(id)arg1;
- (id)deviceIcon;
- (void)setDeviceIcon:(id)arg1;
- (id)packageTitle;
- (void)setPackageTitle:(id)arg1;
- (id)statusImage;
- (void)setStatusImage:(id)arg1;
- (id)activityIndicator;
- (void)setActivityIndicator:(id)arg1;
- (id)statusTitle;
- (void)setStatusTitle:(id)arg1;
- (id)statusTips;
- (void)setStatusTips:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)greenBtn;
- (void)setGreenBtn:(id)arg1;
- (id)greyBtn;
- (void)setGreyBtn:(id)arg1;
- (id)linkBtn;
- (void)setLinkBtn:(id)arg1;
- (id)stat;
- (void)setStat:(id)arg1;
- (void).cxx_destruct;
@end
