@interface MMLiveAirPlayRouter : NSObject <AVRoutePickerViewDelegate>
{
    BOOL _disableMutePlay; // +0x8
    NSURL * _playingURL; // +0x10
    AVPlayer * _player; // +0x18
    AVRoutePickerView * _routePickerView; // +0x20
}
+ (id)sharedRouter;
- (id)init;
- (void)dealloc;
- (BOOL)isPlaying;
- (void)startAirPlayWithURL:(id)arg1;
- (void)stopAirPlay;
- (void)reloadAirPlay;
- (void)pauseAirPlayIfNeeded;
- (void)resumeAirPlayIfNeededWithURL:(id)arg1;
- (void)reloadPlayerWithURL:(id)arg1;
- (void)destroyPlayer;
- (void)playerExternalPlaybackActiveDidChange:(id)arg1;
- (void)loadRoutePickerViewIfNeeded;
- (void)unloadRoutePickerView;
- (void)showRoutePickerView;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)audienceLogReporter;
- (id)playingURL;
- (void)setPlayingURL:(id)arg1;
- (BOOL)disableMutePlay;
- (void)setDisableMutePlay:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)routePickerView;
- (void)setRoutePickerView:(id)arg1;
- (void).cxx_destruct;
@end
