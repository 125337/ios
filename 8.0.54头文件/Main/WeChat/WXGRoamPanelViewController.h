@interface WXGRoamPanelViewController : MMUIViewController <WXGRoamBackendHandlerDelegate>
{
    UIScrollView * _scrollView; // +0x68
    UILabel * _showInfoLabel; // +0x70
    WXGRoamBackendHandler * _backendHandler; // +0x78
    NSArray * _backupPackages; // +0x80
}
- (id)backendHandler;
- (void)onPressLeftNavigationButton;
- (void)onPressRightNavigationButton;
- (void)viewDidLoad;
- (void)setupScrollView;
- (void)cleanPortable;
- (void)setBackupPackage;
- (void)changeBackupPackage;
- (void)deleteBackupPackage;
- (void)getBackupPackages;
- (void)onRoamBackendGetRoamBackupPackagesSetResponse:(id)arg1 success:(BOOL)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetRoamBackupPackagesGetResponse:(id)arg1 success:(BOOL)arg2 invokeID:(unsigned long long)arg3;
- (void)enterRDMDeviceList;
- (void)cleanCache;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)showInfoLabel;
- (void)setShowInfoLabel:(id)arg1;
- (void)setBackendHandler:(id)arg1;
- (id)backupPackages;
- (void)setBackupPackages:(id)arg1;
- (void).cxx_destruct;
@end

