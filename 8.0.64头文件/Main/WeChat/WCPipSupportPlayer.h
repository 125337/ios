@interface WCPipSupportPlayer : NSObject
{
    BOOL _loopBack; // +0x8
    BOOL _isPipPlaying; // +0x9
    unsigned int _taskId; // +0xc
    float _volume; // +0x10
    float _rate; // +0x14
    id <WCPipPlayerDelegate> _delegate; // +0x18
    double _duration; // +0x20
    long long _state; // +0x28
    NSString * _videoGravity; // +0x30
    AVAsset * _asset; // +0x38
    AVPlayerItem * _playerItem; // +0x40
    WCPlayerLayerView * _displayView; // +0x48
    AVPlayer * _player; // +0x50
    id _positionObserver; // +0x58
    double _lastPlaybackTime; // +0x60
}
- (id)initWithDisplayView:(id)arg1;
- (void)dealloc;
- (void)setVideoGravity:(id)arg1;
- (double)currentTime;
- (void)prepareWithPlayerItem:(id)arg1;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seekTo:(double)arg1;
- (void)setPlayerVolume:(double)arg1;
- (void)setPlayerRate:(double)arg1;
- (double)duration;
- (void)onMainPlayerPlayToEnd;
- (void)reset;
- (void)resetPlayerView;
- (void)resetPlayerComponent;
- (void)resetPlayerValues;
- (void)removePositionObserver;
- (void)startToPlayItem;
- (void)printTimeControlStatus:(long long)arg1;
- (void)observePlayerStatus;
- (void)onTimeControlStatusChange:(long long)arg1;
- (void)changePlayerState:(long long)arg1;
- (void)onPlayerItemDidPlayToEnd;
- (void)addPlayerObservers;
- (void)onCurrentPlaybackChanged:(double)arg1;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)loopBack;
- (void)setLoopBack:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (BOOL)isPipPlaying;
- (void)setIsPipPlaying:(BOOL)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)videoGravity;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)displayView;
- (void)setDisplayView:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)positionObserver;
- (void)setPositionObserver:(id)arg1;
- (double)lastPlaybackTime;
- (void)setLastPlaybackTime:(double)arg1;
- (float)volume;
- (void)setVolume:(float)arg1;
- (float)rate;
- (void)setRate:(float)arg1;
- (void).cxx_destruct;
@end
