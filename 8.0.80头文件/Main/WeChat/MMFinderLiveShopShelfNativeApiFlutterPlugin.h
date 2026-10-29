@interface MMFinderLiveShopShelfNativeApiFlutterPlugin : NSObject <MMFlutterPlugin, LiveShopShelfNativeApi>
{
    NSString * _messageChannelSuffix; // +0x8
    MMFinderLiveTaskId * _liveTaskId; // +0x10
    id <MMFinderLiveShopShelfNativeApiFlutterPluginHost> _host; // +0x18
    long long _lastAcceptedShopShelfSyncSequence; // +0x20
}
- (id)initWithLiveId:(unsigned long long)arg1 taskId:(id)arg2 host:(id)arg3;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)openPromoteReplayProductInfoBytes:(id)arg1 source:(long long)arg2 jumpId:(id)arg3 error:(id *)arg4;
- (void)syncShopShelfInfoResponseBytes:(id)arg1 requestSequence:(long long)arg2 completion:(id /* block */)arg3;
- (id)canShowFlashSaleWithError:(id *)arg1;
- (id)openFlashSaleWithError:(id *)arg1;
- (void)openShopAnchorSettingsWithError:(id *)arg1;
- (id)buildShopShelfCgiContextWithError:(id *)arg1;
- (id)currentShelfUxInfoData;
- (void)setAnchorFlashSaleSwitchEnabled:(BOOL)arg1 error:(id *)arg2;
- (id)anchorFlashSaleSwitchEnabledWithError:(id *)arg1;
- (void)loadReplayWidgetAndOpenWithProductId:(unsigned long long)arg1;
- (void)openReplayWithUrl:(id)arg1 product:(id)arg2;
- (id)messageChannelSuffix;
- (id)liveTaskId;
- (id)host;
- (long long)lastAcceptedShopShelfSyncSequence;
- (void)setLastAcceptedShopShelfSyncSequence:(long long)arg1;
- (void).cxx_destruct;
@end
