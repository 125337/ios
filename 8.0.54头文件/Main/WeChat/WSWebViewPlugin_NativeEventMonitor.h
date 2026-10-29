@interface WSWebViewPlugin_NativeEventMonitor : WSWebViewPluginBase <MMWebPageSheetDelegate, TingFlowPlayerNotification, IMusicPlayerExt, CNetworkStatusExt>
{
     enableSendwebviewAppear; // +0x8
}
- (void)webPageSheetWillDismiss:(id)arg1;
- (void)monitorTakeSnapshot;
- (void)observeTingPlayStatus;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)observeMusicPlayStatus;
- (id)init;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)notifySearchInputChangeWithQuery:(id)arg1;
@end

