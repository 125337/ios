@interface WCPipContentSourcePlayer_FakePlayer : WCPipContentSourcePlayer <WCPipPlayerDelegate>
{
    BOOL _isCreatingFakeAsset; // +0x8
    WCPipSupportPlayer * _player; // +0x10
    AVPlayerItem * _playerItem; // +0x18
    WCPlayerLayerView * _displayLayerView; // +0x20
}
- (id)initWithDelegate:(id)arg1 playArgs:(id)arg2 playbackInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)unregisterPipResourcre;
- (void)occupyAudioModuleSucc:(BOOL)arg1;
- (id)displayLayerView;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)arg1;
- (void)createPipResouce;
- (void)createPipContentRes;
- (void)tryClosePipWhenAppActive;
- (void)play;
- (void)pause:(BOOL)arg1;
- (void)seekTo:(double)arg1;
- (void)onStartBuffering;
- (void)onBufferingComplete;
- (void)setRate:(double)arg1;
- (void)setLoopBack:(BOOL)arg1;
- (void)onPlayerEnterErrorState;
- (void)onPlayerDidPlayToEnd;
- (void)onStartDisplayOnPipWindow:(long long)arg1;
- (void)setIsPipPlaying:(BOOL)arg1;
- (void)onRequireSyncToPipPlayerTime:(double)arg1;
- (void)onPipPlayerStateDidChange:(long long)arg1;
- (void)handleBackGroundPlayerOnPrepared;
- (void)handleBackGroundPlayerPlaying;
- (void)handleBackGroundPlayerPaused;
- (void)handleBackGroundPlayerComplete;
- (void)onPipPlayerRePlay;
- (double)getMainCurrentTime;
- (BOOL)isCreatingFakeAsset;
- (void)setIsCreatingFakeAsset:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (void)setDisplayLayerView:(id)arg1;
- (void).cxx_destruct;
@end
