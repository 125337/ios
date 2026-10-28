@interface TPAVPlayer : NSObject <AVPlayerItemOutputPullDelegate, TPAVPlayerLayerViewDelegate, ITPAVPlayer, ITPLog>
{
    BOOL isCaching; // +0x8
    BOOL enableAccurateStartPos; // +0x9
    BOOL enableVideoFrameOutput; // +0xa
    BOOL enableLoopback; // +0xb
    BOOL enableSnapshot; // +0xc
    BOOL enableResourceLoader; // +0xd
    BOOL _allowsExternalPlayback; // +0xe
    BOOL _usesExternalPlaybackWhileExternalScreenIsActive; // +0xf
    BOOL isPlayInPIP; // +0x10
    BOOL enableAutoPictureInPicture; // +0x11
    BOOL _enableSnapshotOutput; // +0x12
    BOOL _usePlayerLayer; // +0x13
    BOOL _airplayActive; // +0x14
    float _volume; // +0x18
    float _rate; // +0x1c
    int playerID; // +0x20
    TPPlayerLayerViewContainer * _view; // +0x28
    id _delegate; // +0x30
    TPPlayerVideo * currentVideo; // +0x38
    long long duration; // +0x40
    long long currentTime; // +0x48
    double currentTimeBase; // +0x50
    long long playbackState; // +0x58
    NSError * error; // +0x60
    long long loopbackStartPos; // +0x68
    long long loopbackSkipEndPos; // +0x70
    NSString * _videoGravity; // +0x78
    NSString * _externalPlaybackVideoGravity; // +0x80
    long long _currentClipIndex; // +0x88
    long long _preferredForwardBufferDurationMs; // +0x90
    unsigned long long _allowedAudioSpatializationFormats; // +0x98
    AVPlayer * _player; // +0xa0
    AVAsset * _asset; // +0xa8
    AVPlayerItem * _playerItem; // +0xb0
    TPAVPlayerLayerView * _playerLayer; // +0xb8
    TPFairPlayMgr * _fairplayMgr; // +0xc0
    NSURL * _videoUrl; // +0xc8
    NSDictionary * _videoHttpHeader; // +0xd0
    long long _startPosition; // +0xd8
    long long _skipEndPosition; // +0xe0
    long long _playableDuration; // +0xe8
    long long _retryCount; // +0xf0
    TPFBKVOController * _playerKVOController; // +0xf8
    id /* block */ _playerTimeObserverBlock; // +0x100
    id _playerTimeObserver; // +0x108
    AVPlayerItemVideoOutput * _snapshotOutput; // +0x110
    NSTimer * _outputFrameTimer; // +0x118
    NSDate * _outputPauseStart; // +0x120
    NSDate * _outputPreviousFireDate; // +0x128
    AVPlayerItemVideoOutput * _VROutput; // +0x130
    double _lastGotFrameTime; // +0x138
    long long _seekSource; // +0x140
    NSArray * _trackInfoArray; // +0x148
    TPPlayerLogContext * _log; // +0x150
    CGSize _presentationSize; // +0x158
}
- (id)init;
- (void)dealloc;
- (void)loadVideo:(id)arg1;
- (void)updateVideo:(id)arg1;
- (void)updateContext:(id)arg1;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seekToTime:(long long)arg1 mode:(long long)arg2;
- (void)seekToTime:(long long)arg1 mode:(long long)arg2 source:(long long)arg3;
- (id)snapshot;
- (id)snapshotUsingVideoOutput;
- (id)snapshotUsingImageGeneratorWithCount:(long long)arg1 timeTolerance:(double)arg2 interval:(double)arg3 error:(id *)arg4;
- (long long)currentTime;
- (void)setVolume:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setView:(id)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (long long)bufferedDuration;
- (unsigned long long)allowedAudioSpatializationFormats;
- (void)setAllowedAudioSpatializationFormats:(unsigned long long)arg1;
- (void)setAllowedSpatialFormat:(unsigned long long)arg1 toPlayerItem:(id)arg2;
- (unsigned long long)getAllowedSpatialFormatFromPlayerItem:(id)arg1;
- (void)startToPlayVideo;
- (void)startToPlayAsset:(id)arg1;
- (void)configureExternalPlayback;
- (void)changePlayerLoadState:(long long)arg1;
- (void)changePlayerPlaybackState:(long long)arg1;
- (void)didErrorOccurred:(id)arg1;
- (void)didAirplayActiveChanged:(BOOL)arg1;
- (void)didSeekCompleted;
- (void)setTimeObserverBlock:(id /* block */)arg1;
- (void)judgeNotifyTimeBaseChanged;
- (void)setTimeObserverInternal:(id /* block */)arg1;
- (void)removeTimeObserverInternal;
- (void)reset;
- (void)resetPlayerView;
- (void)resetPlayerComponent;
- (void)resetPlayerValues;
- (id)trackInfoArray;
- (BOOL)selectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (BOOL)deselectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (BOOL)deselectTrackInfoWithoutCallback:(long long)arg1 opaque:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleReadyToPlayWithPlayerItem:(id)arg1;
- (void)handlePlaybackStateChangeWithKeyPath:(id)arg1;
- (void)handlePresentationSizeChange;
- (void)handleLoadedTimeRagesChange;
- (void)addKVOWithPlayer:(id)arg1;
- (void)addKVOWithPlayerItem:(id)arg1;
- (void)removeKVOController;
- (void)addNotificationWithPlayerItem:(id)arg1;
- (void)removeNotification;
- (void)playerItemTimeBaseChange:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (void)addAppDelegateNotification;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)startOutputFrame:(double)arg1;
- (void)pauseOutputFrame;
- (void)resumeOutputFrame;
- (void)stopOutputFrame;
- (void)outputFrameTimerFunc:(id)arg1;
- (void)onAVPlayerLayerViewFirstFrameRendered:(id)arg1;
- (id)view;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentVideo;
- (void)setCurrentVideo:(id)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (void)setCurrentTime:(long long)arg1;
- (double)currentTimeBase;
- (void)setCurrentTimeBase:(double)arg1;
- (BOOL)isCaching;
- (void)setIsCaching:(BOOL)arg1;
- (float)volume;
- (float)rate;
- (long long)playbackState;
- (void)setPlaybackState:(long long)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (int)playerID;
- (void)setPlayerID:(int)arg1;
- (BOOL)enableAccurateStartPos;
- (void)setEnableAccurateStartPos:(BOOL)arg1;
- (BOOL)enableVideoFrameOutput;
- (void)setEnableVideoFrameOutput:(BOOL)arg1;
- (BOOL)enableLoopback;
- (void)setEnableLoopback:(BOOL)arg1;
- (long long)loopbackStartPos;
- (void)setLoopbackStartPos:(long long)arg1;
- (long long)loopbackSkipEndPos;
- (void)setLoopbackSkipEndPos:(long long)arg1;
- (BOOL)enableSnapshot;
- (void)setEnableSnapshot:(BOOL)arg1;
- (BOOL)enableResourceLoader;
- (void)setEnableResourceLoader:(BOOL)arg1;
- (id)videoGravity;
- (BOOL)allowsExternalPlayback;
- (id)externalPlaybackVideoGravity;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (long long)currentClipIndex;
- (void)setCurrentClipIndex:(long long)arg1;
- (long long)preferredForwardBufferDurationMs;
- (void)setPreferredForwardBufferDurationMs:(long long)arg1;
- (BOOL)isPlayInPIP;
- (void)setIsPlayInPIP:(BOOL)arg1;
- (BOOL)enableAutoPictureInPicture;
- (void)setEnableAutoPictureInPicture:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (id)fairplayMgr;
- (void)setFairplayMgr:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)videoHttpHeader;
- (void)setVideoHttpHeader:(id)arg1;
- (long long)startPosition;
- (void)setStartPosition:(long long)arg1;
- (long long)skipEndPosition;
- (void)setSkipEndPosition:(long long)arg1;
- (BOOL)enableSnapshotOutput;
- (void)setEnableSnapshotOutput:(BOOL)arg1;
- (BOOL)usePlayerLayer;
- (void)setUsePlayerLayer:(BOOL)arg1;
- (CGSize)presentationSize;
- (void)setPresentationSize:(CGSize)arg1;
- (long long)playableDuration;
- (void)setPlayableDuration:(long long)arg1;
- (long long)retryCount;
- (void)setRetryCount:(long long)arg1;
- (id)playerKVOController;
- (void)setPlayerKVOController:(id)arg1;
- (id /* block */)playerTimeObserverBlock;
- (void)setPlayerTimeObserverBlock:(id /* block */)arg1;
- (id)playerTimeObserver;
- (void)setPlayerTimeObserver:(id)arg1;
- (id)snapshotOutput;
- (void)setSnapshotOutput:(id)arg1;
- (BOOL)airplayActive;
- (void)setAirplayActive:(BOOL)arg1;
- (id)outputFrameTimer;
- (void)setOutputFrameTimer:(id)arg1;
- (id)outputPauseStart;
- (void)setOutputPauseStart:(id)arg1;
- (id)outputPreviousFireDate;
- (void)setOutputPreviousFireDate:(id)arg1;
- (id)VROutput;
- (void)setVROutput:(id)arg1;
- (double)lastGotFrameTime;
- (void)setLastGotFrameTime:(double)arg1;
- (long long)seekSource;
- (void)setSeekSource:(long long)arg1;
- (void)setTrackInfoArray:(id)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (void).cxx_destruct;
@end
