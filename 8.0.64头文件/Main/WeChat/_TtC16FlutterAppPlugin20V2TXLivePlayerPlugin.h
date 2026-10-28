@interface _TtC16FlutterAppPlugin20V2TXLivePlayerPlugin : NSObject <V2TXLivePlayerObserver>
{
     channel; // +0x8
     pluginManager; // +0x10
     player; // +0x18
     identifier; // +0x20
}
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
- (void)onPictureInPictureStateUpdate:(id)arg1 state:(long long)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)setRenderViewWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)setRenderRotationWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)setRenderFillModeWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)startLivePlayWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)stopPlayWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)isPlayingWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)pauseAudioWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)resumeAudioWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)pauseVideoWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)resumeVideoWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)setPlayoutVolumeWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)setCacheParamsWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)enableVolumeEvaluationWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)snapshotWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)enableObserveVideoFrameWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)enableReceiveSeiMessageWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)showDebugViewWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)setPropertyWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)enablePictureInPictureWithCall:(id)arg1 result:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
@end
