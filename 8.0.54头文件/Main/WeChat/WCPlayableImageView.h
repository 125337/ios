@interface WCPlayableImageView : UIImageView <WCPlayerPlaybackInfoDelegate>
{
    UILongPressGestureRecognizer * _playingLongPressGestureRecognizer; // +0x8
    BOOL _playGestureEnabled; // +0x10
    WCPlayerPlayArgs * _playerArgs; // +0x18
    WCPlayerView * _playerView; // +0x20
    id /* block */ _playerStateDidChange; // +0x28
    UIView * _playerContainerView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 playerArgs:(id)arg2;
- (id)initWithImage:(id)arg1 playerArgs:(id)arg2;
- (void)_init;
- (void)dealloc;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)_loadPlayerContainerView;
- (void)_loadPlayerViewIfPossible;
- (long long)viewContentModeFromPlayerContentMode:(long long)arg1;
- (long long)viewContentModeFromPlayerArgs:(id)arg1;
- (unsigned long long)playerState;
- (void)startPlaying;
- (void)pausePlaying;
- (void)clearPlayer;
- (void)onPlayerStateChange:(unsigned long long)arg1;
- (void)onPlayerProcessChange:(unsigned long long)arg1;
- (void)_initPlayingLongPressGestureRecognizerIfNeeded;
- (void)setPlayGestureEnabled:(BOOL)arg1;
- (void)_handlePlayingLongPressGestureRecognizer:(id)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)playerView;
- (id /* block */)playerStateDidChange;
- (void)setPlayerStateDidChange:(id /* block */)arg1;
- (BOOL)playGestureEnabled;
- (id)playerContainerView;
- (void).cxx_destruct;
@end

