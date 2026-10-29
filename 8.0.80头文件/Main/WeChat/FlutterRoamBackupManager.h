@interface FlutterRoamBackupManager : NSObject <INewSyncExt, MMFlutterPlugin, WCMomentsContactTagListViewControllerDelegate, FlutterNavigatorDelegate, BackupPigeonApi>
{
    int _mUseFlutterExpt; // +0x8
    MMFlutterInstance * _flutterInstance; // +0x10
    UIViewController * _flutterViewController; // +0x18
    WXGRoamBackupPackageRangeHandler * _rangeHandler; // +0x20
    id /* block */ _labelCompletion; // +0x28
    id /* block */ _openCompletion; // +0x30
}
+ (id)sharedInstance;
- (id)init;
- (id)getFlutterInstacne;
- (BOOL)roamBackupUseFlutterExpt;
- (void)showRoamBackupPackageListPage;
- (void)showRoamBackupCreatePackagePage:(id)arg1;
- (void)showRoamBackupPackageDetailPage:(unsigned long long)arg1;
- (void)showRoamBackupPackageDetailPageAndStartBackup:(unsigned long long)arg1;
- (void)showRoamBackupPackageDetailPageAndStartRestore:(unsigned long long)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)openSAFDirTreeOfDeviceDeviceInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)openSAFDirTreeWithCompletion:(id /* block */)arg1;
- (void)selectConversationBylabelAlreadySelected:(id)arg1 completion:(id /* block */)arg2;
- (void)selectConversationByNameAlreadySelected:(id)arg1 completion:(id /* block */)arg2;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (void)contactTagListViewControllerCancelSelect:(id)arg1;
- (void)pushFromViewController:(id)arg1 plugin:(id)arg2 route:(id)arg3 arguments:(id)arg4;
- (void)jumpToPrivacySetting;
- (void)jumpToBuildHostspot;
- (void)jumpToFeedback;
- (BOOL)isFlutterViewControllerOnTop;
- (void)onRoamOutBoxServiceFinishCreateBackupMenu:(BOOL)arg1 dirURL:(id)arg2 deviceId:(id)arg3;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)flutterViewController;
- (void)setFlutterViewController:(id)arg1;
- (id)rangeHandler;
- (void)setRangeHandler:(id)arg1;
- (id /* block */)labelCompletion;
- (void)setLabelCompletion:(id /* block */)arg1;
- (int)mUseFlutterExpt;
- (void)setMUseFlutterExpt:(int)arg1;
- (id /* block */)openCompletion;
- (void)setOpenCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
