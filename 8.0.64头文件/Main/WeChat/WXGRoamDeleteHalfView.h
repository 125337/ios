@interface WXGRoamDeleteHalfView : MMPageSheetBaseView <IRoamBackupPackageServiceExt, MMPageSheetBottomViewDelegate>
{
    BOOL _isCanceled; // +0x8
    id /* block */ _actionBlock; // +0x10
    unsigned long long _enterScene; // +0x18
}
- (id)initWithEnterScene:(unsigned long long)arg1;
- (void)setupDetailView:(unsigned long long)arg1;
- (void)onTapCancel;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onRoamBackupPackageServiceDeviceConnectRes:(BOOL)arg1 packageID:(unsigned long long)arg2;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
