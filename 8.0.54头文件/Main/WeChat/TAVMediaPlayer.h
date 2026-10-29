@interface TAVMediaPlayer : NSObject
{
    BOOL _shouldRepeat; // +0x8
    BOOL _shouldResume; // +0x9
    BOOL _needPlaying; // +0xa
    BOOL _isSeeking; // +0xb
    BOOL _refreshing; // +0xc
    AVPlayer * _player; // +0x10
    AVPlayerItem * _currentItem; // +0x18
    NSError * _error; // +0x20
    long long _currentState; // +0x28
    double _speed; // +0x30
    double _volume; // +0x38
    long long _previousState; // +0x40
    double _lastPlaybackRate; // +0x48
    long long _tryCount; // +0x50
    id _timeObserver; // +0x58
    NSLock * _lock; // +0x60
    NSHashTable * _observerList; // +0x68
    NSMutableArray * _seekBlocks; // +0x70
    struct _currentTime; // +0x78
    struct _duration; // +0x90
    struct _progressInterval; // +0xa8
    struct _startTime; // +0xc0
    struct _targetTime; // +0xd8
    struct _validRange; // +0xf0
}
+ (id)playerWithPlayerItem:(id)arg1;
+ (BOOL)isAdvancedRefreshEnabled;
+ (void)setAdvancedRefreshEnabled:(BOOL)arg1;
- (id)init;
- (id)initWithPlayerItem:(id)arg1;
- (void)dealloc;
- (void)resetPlayerItem:(id)arg1;
- (void)prepareToPlay;
- (void)seekToTime:(struct)arg1;
- (void)seekToTime:(struct)arg1 completion:(id /* block */)arg2;
- (void)innerSeekToTime:(struct)arg1 completion:(id /* block */)arg2;
- (void)handleSeekingWithCompletions:(id)arg1 seekTime:(struct)arg2 finished:(BOOL)arg3;
- (void)cancelSeeking;
- (void)callAllCompletions;
- (struct)reviseSeekTime:(struct)arg1;
- (void)seekBackToValidTimeRangeStart;
- (void)play;
- (void)playAtTime:(struct)arg1;
- (void)pause;
- (void)replay;
- (void)stop;
- (void)destory;
- (void)refresh;
- (void)resume;
- (void)tryToChangeState:(long long)arg1;
- (void)resetRateIfNeeded;
- (BOOL)shouldTryToResume;
- (struct)startTimeForRepeat;
- (BOOL)shouldRestart;
- (BOOL)canUseAdvancedRefresh;
- (void)updateMediaDuration;
- (void)setProgressInterval:(struct)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)addObserverForPlayer;
- (void)removeObserverForPlayer;
- (void)addTimeObserverForPlayer;
- (void)removeTimeObserver;
- (void)addObserverForCurrentItem;
- (void)removeObserverForCurrentItem;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (void)notifyPlayerDidReset;
- (void)notifyItemDidChange;
- (void)notifyStateDidChange;
- (void)notifyCurrentTimeChanged:(struct)arg1;
- (void)notifyDidPlayToEnd;
- (void)notifySpeedDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handlePlayerItemStatusChange;
- (void)handlePlaybackRateChange;
- (void)handlePlaybackBufferEmptyChange;
- (void)handlePlaybackLikelyToKeepUpChange;
- (void)setCurrentState:(long long)arg1;
- (void)setCurrentItem:(id)arg1;
- (BOOL)isPlaying;
- (void)setCurrentTime:(struct)arg1;
- (void)setSpeed:(double)arg1;
- (void)setVolume:(double)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)currentItem;
- (id)error;
- (void)setError:(id)arg1;
- (long long)currentState;
- (struct)currentTime;
- (struct)duration;
- (void)setDuration:(struct)arg1;
- (double)speed;
- (double)volume;
- (struct)validRange;
- (void)setValidRange:(struct)arg1;
- (struct)progressInterval;
- (BOOL)shouldRepeat;
- (void)setShouldRepeat:(BOOL)arg1;
- (BOOL)shouldResume;
- (void)setShouldResume:(BOOL)arg1;
- (long long)previousState;
- (void)setPreviousState:(long long)arg1;
- (double)lastPlaybackRate;
- (void)setLastPlaybackRate:(double)arg1;
- (struct)startTime;
- (void)setStartTime:(struct)arg1;
- (long long)tryCount;
- (void)setTryCount:(long long)arg1;
- (id)timeObserver;
- (void)setTimeObserver:(id)arg1;
- (BOOL)needPlaying;
- (void)setNeedPlaying:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)observerList;
- (void)setObserverList:(id)arg1;
- (id)seekBlocks;
- (void)setSeekBlocks:(id)arg1;
- (BOOL)isSeeking;
- (void)setIsSeeking:(BOOL)arg1;
- (struct)targetTime;
- (void)setTargetTime:(struct)arg1;
- (BOOL)isRefreshing;
- (void)setRefreshing:(BOOL)arg1;
- (void).cxx_destruct;
@end

