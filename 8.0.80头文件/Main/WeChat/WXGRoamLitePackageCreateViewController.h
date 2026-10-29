@interface WXGRoamLitePackageCreateViewController : MMUIViewController <IRoamBackupPackageServiceExt>
{
    double m_cellHeight; // +0x70
    BOOL _hasNotifyToPc; // +0x78
    int _cgiResult; // +0x7c
    UINavigationItem * _customNavigationItem; // +0x80
    UIScrollView * _sheetView; // +0x88
    UIView * _deviceView; // +0x90
    UILabel * _deviceLabel; // +0x98
    UIImageView * _deviceIcon; // +0xa0
    UIView * _rangeView; // +0xa8
    UILabel * _rangeMainLabel; // +0xb0
    UIView * _rangeChooseView; // +0xb8
    UIView * _rangeExtraView; // +0xc0
    double _deviceTitleWidth; // +0xc8
    WCUIAlertView * _alertDialog; // +0xd0
}
- (void)dealloc;
- (id)init;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupNavBar;
- (void)setupViews;
- (void)updateDefaultData;
- (void)updateViews;
- (void)setupRangeExtraView;
- (void)onCancel;
- (void)createBackupPackage;
- (void)onRoamBackupPackageServiceFinishCreatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceCreateViewModelChange;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void)onRoamLiteStartBackup:(unsigned long long)arg1;
- (void)onRoamLiteStopAllTask;
- (id)customNavigationItem;
- (void)setCustomNavigationItem:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)deviceView;
- (void)setDeviceView:(id)arg1;
- (id)deviceLabel;
- (void)setDeviceLabel:(id)arg1;
- (id)deviceIcon;
- (void)setDeviceIcon:(id)arg1;
- (id)rangeView;
- (void)setRangeView:(id)arg1;
- (id)rangeMainLabel;
- (void)setRangeMainLabel:(id)arg1;
- (id)rangeChooseView;
- (void)setRangeChooseView:(id)arg1;
- (id)rangeExtraView;
- (void)setRangeExtraView:(id)arg1;
- (double)deviceTitleWidth;
- (void)setDeviceTitleWidth:(double)arg1;
- (int)cgiResult;
- (void)setCgiResult:(int)arg1;
- (BOOL)hasNotifyToPc;
- (void)setHasNotifyToPc:(BOOL)arg1;
- (id)alertDialog;
- (void)setAlertDialog:(id)arg1;
- (void).cxx_destruct;
@end
