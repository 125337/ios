@interface WCPlayerAggregate : NSObject
{
    WCPlayerView * _playerView; // +0x8
    WCPlayerReporter * _reporter; // +0x10
    WCPlayerPlayArgs * _playerArgs; // +0x18
    WCPlayerPlaybackInfo * _playbackInfo; // +0x20
}
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (void).cxx_destruct;
@end
