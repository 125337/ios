@interface WCPlayableImageView : UIImageView <WCPlayerImagePlayerViewControllerDelegate, WCPlayerPlaybackInfoDelegate>
{
    UILongPressGestureRecognizer * _playingLongPressGestureRecognizer; // +0x8
    BOOL _shouldPlayFromBeginning; // +0x10
    BOOL _playGestureEnabled; // +0x11
    id <WCPlayableImageViewDelegate> _delegate; // +0x18
    WCPlayerPlayArgs * _playerArgs; // +0x20
    WCPlayerView * _playerView; // +0x28
    id /* block */ _playerStateDidChange; // +0x30
    WCPlayerImagePlayerViewController * _playerController; // +0x38
    UIView * _playerContainerView; // +0x40
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
- (BOOL)isCurrentPlaying;
- (void)seekVideoToBeginning;
- (void)setAutoPlay:(BOOL)arg1;
- (BOOL)autoPlay;
- (BOOL)changeToDownloadFirstMode;
- (void)clearPlayer;
- (void)onPlayerStateChange:(unsigned long long)arg1;
- (void)onPlayerProcessChange:(unsigned long long)arg1;
- (void)onControllerVideoDidPlayToEndTime;
- (void)updateControllerVideoCurrentTime:(double)arg1;
- (void)_initPlayingLongPressGestureRecognizerIfNeeded;
- (void)setPlayGestureEnabled:(BOOL)arg1;
- (void)_handlePlayingLongPressGestureRecognizer:(id)arg1;
- (id)playerController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id /* block */)playerStateDidChange;
- (void)setPlayerStateDidChange:(id /* block */)arg1;
- (BOOL)shouldPlayFromBeginning;
- (void)setShouldPlayFromBeginning:(BOOL)arg1;
- (BOOL)playGestureEnabled;
- (void)setPlayerController:(id)arg1;
- (id)playerContainerView;
- (void).cxx_destruct;
@end
