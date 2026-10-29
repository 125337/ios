@interface MAVVideoCompositionPlayer : NSObject <TAVMediaPlayerObserver>
{
    BOOL _loop; // +0x8
    NSNumber * _id; // +0x10
    id <MAVVideoCompositionPlayerDelegate> _delegate; // +0x18
    TAVMediaPlayer * _player; // +0x20
    AVPlayerLayer * _playerLayer; // +0x28
    struct _playRange; // +0x30
}
- (id)initWithComposition:(id)arg1;
- (void)dealloc;
- (void)updateComposition:(id)arg1;
- (void)updateComposition:(id)arg1 withPlay:(BOOL)arg2 atTime:(struct)arg3;
- (void)setProgressInterval:(struct)arg1;
- (struct)currentTime;
- (struct)duration;
- (void)setPlayRange:(struct)arg1;
- (BOOL)isPlaying;
- (void)setLoop:(BOOL)arg1;
- (void)muteOrigin:(BOOL)arg1;
- (void)play;
- (void)pause;
- (void)refreshSurface;
- (void)stop;
- (void)destory;
- (void)seekToTime:(struct)arg1;
- (void)mediaPlayerDidPlayToEnd:(id)arg1;
- (void)mediaPlayer:(id)arg1 progressDidChange:(struct)arg2;
- (void)mediaPlayer:(id)arg1 stateDidChange:(long long)arg2;
- (void)mediaPlayer:(id)arg1 playerDidReset:(id)arg2;
- (void)callbackPlayStarted;
- (void)callbackPlayStopped;
- (void)callbackPlayCompleted;
- (void)callbackPlayError;
- (id)id;
- (void)setId:(id)arg1;
- (struct)playRange;
- (BOOL)loop;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (void).cxx_destruct;
@end
