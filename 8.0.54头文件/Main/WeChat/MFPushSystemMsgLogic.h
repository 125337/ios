@interface MFPushSystemMsgLogic : MMObject <INetworkStatusMgrExt>
{
    MFBannerBtn * m_banner; // +0x8
    NetworkCheckViewController * m_networkCheckViewController; // +0x10
    unsigned int m_uiTipStatus; // +0x18
    MMTimer * m_progressTimer; // +0x20
    id <MFPushSystemMsgDelegate> _delegate; // +0x28
    UIViewController * _viewController; // +0x30
}
- (id)init;
- (void)makeNewPushSymtemView:(id)arg1;
- (void)onBannerClick:(id)arg1;
- (void)updateProgress;
- (void)dismissSystemMessage;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNetworkCheckFinished:(BOOL)arg1 baseNetOK:(BOOL)arg2 longLinkOK:(BOOL)arg3 kvString:(id)arg4;
- (void)updateSystemNetworkNotification:(unsigned int)arg1;
- (id)disconnetStatusBannerDesc;
- (void)showDisconnetStatusNetworkTip;
- (id)bannerBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end

