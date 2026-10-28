@interface MultiDeviceManageLogic : NSObject <IOnlineClientMgrExt>
{
    id <MultiDeviceManageLogicDelegate> _delegate; // +0x8
}
- (id)init;
- (void)jumpToFileTransfer;
- (void)setMute:(BOOL)arg1;
- (void)setLock:(BOOL)arg1 withManageInfo:(id)arg2;
- (void)startLogoutWithManageInfo:(id)arg1 isUserOpen:(BOOL)arg2;
- (void)jumpToHelpURLWithManageInfo:(id)arg1;
- (void)onOnlineInfoUpdated;
- (void)onExtDeviceOnlineStatusChanged;
- (void)onLogoutWeb;
- (void)onLogoutWebFailed;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
