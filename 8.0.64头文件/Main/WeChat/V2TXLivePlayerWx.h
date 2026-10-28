@interface V2TXLivePlayerWx : V2TXLivePlayer <V2TXLivePlayerObserverWx>
{
    long long _networkQuality; // +0x8
    BOOL _enableMessage; // +0x10
    id <V2TXLivePlayerObserverWx> _observer; // +0x18
}
+ (void)log:(id)arg1 isOnline:(BOOL)arg2;
- (id)init;
- (void)setObserver:(id)arg1;
- (long long)enableReceiveSeiMessage:(BOOL)arg1 payloadType:(int)arg2;
- (void)onError:(id)arg1 code:(long long)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)onWarning:(id)arg1 code:(long long)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)onVideoResolutionChanged:(id)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)onConnected:(id)arg1 extraInfo:(id)arg2;
- (void)onVideoPlaying:(id)arg1 firstPlay:(BOOL)arg2 extraInfo:(id)arg3;
- (void)onAudioPlaying:(id)arg1 firstPlay:(BOOL)arg2 extraInfo:(id)arg3;
- (void)onVideoLoading:(id)arg1 extraInfo:(id)arg2;
- (void)onAudioLoading:(id)arg1 extraInfo:(id)arg2;
- (void)onPlayoutVolumeUpdate:(id)arg1 volume:(long long)arg2;
- (void)onStatisticsUpdate:(id)arg1 statistics:(id)arg2;
- (void)onSnapshotComplete:(id)arg1 image:(id)arg2;
- (void)onRenderVideoFrame:(id)arg1 frame:(id)arg2;
- (void)onReceiveSeiMessage:(id)arg1 payloadType:(int)arg2 data:(id)arg3;
- (void)onPlayEvent:(long long)arg1 param:(id)arg2;
- (void)onPlayNetStatus:(id)arg1;
- (void)onNetworkQuality:(long long)arg1;
- (void)sendEventNotify:(long long)arg1 param:(id)arg2;
- (void)sendEventNotify:(long long)arg1 msg:(id)arg2;
- (void).cxx_destruct;
@end
