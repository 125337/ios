@interface WSWebViewPlugin_NativeEventMonitor : WSWebViewPluginBase <MMWebPageSheetDelegate, TingPlayAppNotification, IMusicPlayerExt, CNetworkStatusExt>
{
     enableSendwebviewAppear; // +0x8
}
- (void)webPageSheetWillDismiss:(id)arg1;
- (void)monitorTakeSnapshot;
- (void)observeTingPlayStatus;
- (void)playApp:(id)arg1 onPlayTaskStatusChanged:(int)arg2 tingItem:(id)arg3 onEvent:(int)arg4 withContext:(id)arg5;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)observeMusicPlayStatus;
- (id)init;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)notifySearchInputChangeWithQuery:(id)arg1;
@end
