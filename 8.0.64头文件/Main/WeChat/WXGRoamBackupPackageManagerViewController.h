@interface WXGRoamBackupPackageManagerViewController : MMUIViewController <IRoamBackupPackageServiceExt, ILinkDeviceExt>
{
    BOOL _isDeleted; // +0x70
    WXGRoamBackupPackageDetailCell * _sizeCell; // +0x78
    WXGRoamBackupPackageDetailCell * _rangeCell; // +0x80
    WXGRoamBackupPackageDetailCell * _nameCell; // +0x88
    WXGRoamBackupPackageDetailCell * _recordCell; // +0x90
    WXGRoamBackupPackageDetailCell * _deviceCell; // +0x98
    UIScrollView * _sheetView; // +0xa0
}
- (id)init;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setIsDeleted:(BOOL)arg1;
- (void)setupViews;
- (BOOL)isNeedToShowToast:(BOOL)arg1;
- (void)updateView;
- (void)updateSize;
- (void)updateDeviceView;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onILinkDeviceUpdate:(id)arg1;
- (BOOL)isDeleted;
- (id)sizeCell;
- (void)setSizeCell:(id)arg1;
- (id)rangeCell;
- (void)setRangeCell:(id)arg1;
- (id)nameCell;
- (void)setNameCell:(id)arg1;
- (id)recordCell;
- (void)setRecordCell:(id)arg1;
- (id)deviceCell;
- (void)setDeviceCell:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (void).cxx_destruct;
@end
