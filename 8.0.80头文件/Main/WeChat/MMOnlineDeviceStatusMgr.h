@interface MMOnlineDeviceStatusMgr : MMUserService <IOnlineClientMgrExt, MMServiceProtocol>
{
    OnlineDeviceInfoViewController * _viewController; // +0x8
    MultiDeviceManageViewController * _multiDeviceViewController; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)hideDeviceInfoView;
- (void)showDeviceInfoViewWithIsManualOpen:(BOOL)arg1 fromViewController:(id)arg2;
- (void)showDeviceInfoUnlockView:(id)arg1 name:(id)arg2;
- (void)onLogoutWeb;
- (void)onExtDeviceNotifyUnlockWithMessage:(id)arg1;
- (void).cxx_destruct;
@end
