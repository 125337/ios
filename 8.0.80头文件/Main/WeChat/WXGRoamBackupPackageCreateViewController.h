@interface WXGRoamBackupPackageCreateViewController : MMUIViewController <IRoamBackupPackageServiceExt, IRoamOutBoxServiceExt>
{
    double m_cellHeight; // +0x70
    BOOL _bTapCreateToSendNotify; // +0x78
    BOOL _bTapToAddDevice; // +0x79
    BOOL _bNeedBind; // +0x7a
    int _notifyResult; // +0x7c
    UIScrollView * _sheetView; // +0x80
    UIView * _deviceView; // +0x88
    UILabel * _deviceLable; // +0x90
    UIImageView * _deviceIcon; // +0x98
    UILabel * _sizeLabel; // +0xa0
    UIView * _rangeView; // +0xa8
    UILabel * _rangeMainLabel; // +0xb0
    UIView * _rangeChooseView; // +0xb8
    UIView * _rangeExtraView; // +0xc0
    UILabel * _rangeTitle; // +0xc8
    UIView * _autoBackupView; // +0xd0
    UIView * _autoBackupExtraView; // +0xd8
    WXGRoamBackupPackageDetailCell * _autoBackupCell; // +0xe0
    UILabel * _tipsLabel; // +0xe8
    UISwitch * _lowPowerBtn; // +0xf0
    UISwitch * _autoBackupBtn; // +0xf8
    UISwitch * _mobileNetBtn; // +0x100
    double _deviceTitleWidth; // +0x108
}
- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)getDefaultData;
- (void)setupViews;
- (void)updateDefaultData;
- (void)updateViews;
- (void)setupRangeExtraView;
- (void)setupNavBar;
- (void)onCancel;
- (void)switchMobileNet;
- (void)switchLowPower;
- (void)switchAutoBackup;
- (void)createBackupPackage;
- (void)createPackageInner;
- (void)onRoamBackupPackageServiceBindTicketComplete:(BOOL)arg1;
- (void)onRoamBackupPackageServiceFinishCreatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void)onRoamBackupPackageServiceCreateViewModelChange;
- (void)onRoamBackupPackageServiceFinishedCulculateCurrentModel;
- (void)onRoamLiteStopAllTask;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)deviceView;
- (void)setDeviceView:(id)arg1;
- (id)deviceLable;
- (void)setDeviceLable:(id)arg1;
- (id)deviceIcon;
- (void)setDeviceIcon:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)rangeView;
- (void)setRangeView:(id)arg1;
- (id)rangeMainLabel;
- (void)setRangeMainLabel:(id)arg1;
- (id)rangeChooseView;
- (void)setRangeChooseView:(id)arg1;
- (id)rangeExtraView;
- (void)setRangeExtraView:(id)arg1;
- (id)rangeTitle;
- (void)setRangeTitle:(id)arg1;
- (id)autoBackupView;
- (void)setAutoBackupView:(id)arg1;
- (id)autoBackupExtraView;
- (void)setAutoBackupExtraView:(id)arg1;
- (id)autoBackupCell;
- (void)setAutoBackupCell:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)lowPowerBtn;
- (void)setLowPowerBtn:(id)arg1;
- (id)autoBackupBtn;
- (void)setAutoBackupBtn:(id)arg1;
- (id)mobileNetBtn;
- (void)setMobileNetBtn:(id)arg1;
- (double)deviceTitleWidth;
- (void)setDeviceTitleWidth:(double)arg1;
- (BOOL)bTapCreateToSendNotify;
- (void)setBTapCreateToSendNotify:(BOOL)arg1;
- (BOOL)bTapToAddDevice;
- (void)setBTapToAddDevice:(BOOL)arg1;
- (BOOL)bNeedBind;
- (void)setBNeedBind:(BOOL)arg1;
- (int)notifyResult;
- (void)setNotifyResult:(int)arg1;
- (void).cxx_destruct;
@end
