@interface WXGRoamDeviceAddPCHalfView : MMPageSheetBaseView <IRoamBackupPackageServiceExt, IRoamOutBoxServiceExt>
- (id)initWithEnterScene:(long long)arg1;
- (void)setupDetailView:(long long)arg1;
- (void)scan;
- (void)showFileMgr;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void)onRoamOutBoxServiceFinishCreateBackupMenu:(BOOL)arg1 dirURL:(id)arg2 deviceId:(id)arg3;
@end

