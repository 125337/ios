@interface LVPlayerServicePlugin : NSObject <MMFlutterPlugin, MegaVideoPlayerService>
{
    MegaVideoPlayerCallbackApi * _playerApiCallback; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)createPlayerTexturePlayItem:(id)arg1 autoPlay:(BOOL)arg2 playOffset:(long long)arg3 completion:(id /* block */)arg4;
- (void)releasePlayerId:(long long)arg1 error:(id *)arg2;
- (void)playPlayerId:(long long)arg1 error:(id *)arg2;
- (void)stopPlayerId:(long long)arg1 error:(id *)arg2;
- (void)pausePlayerId:(long long)arg1 error:(id *)arg2;
- (id)getCurrentPlayMsPlayerId:(long long)arg1 error:(id *)arg2;
- (id)playerApiCallback;
- (void)setPlayerApiCallback:(id)arg1;
- (void).cxx_destruct;
@end
