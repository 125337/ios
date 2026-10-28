@interface WCSystemPlayer : WCCorePlayer
{
    BOOL _isNoCallbackSeek; // +0x8
    float _lastPlayBackRate; // +0xc
    WCPlayerFairPlayResourceLoader * _fairPlayResourceloader; // +0x10
    NSString * _changeToPlayPath; // +0x18
    AVAsset * _asset; // +0x20
    AVPlayer * _player; // +0x28
    AVPlayerItem * _playerItem; // +0x30
    NSObject * _playbackTimeObserver; // +0x38
    AVPlayerItemVideoOutput * _videoOutput; // +0x40
    double _playablePos; // +0x48
    double _lastGotFrameTime; // +0x50
    MMTimer * _outputFrameTimer; // +0x58
    CADisplayLink * _displayLink; // +0x60
}
- (double)currentTime;
- (double)playablePos;
- (double)duration;
- (float)audioBitrate;
- (float)videoBitrate;
- (void)setVolume:(double)arg1;
- (double)getVolume;
- (CGSize)presentationSize;
- (CGAffineTransform)preferredTransform;
- (float)playbackRate;
- (void)setPlaybackRate:(float)arg1;
- (void)setPlayerToMuted:(BOOL)arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (BOOL)muted;
- (void)setPlayerLoop:(BOOL)arg1;
- (id)getPlayerAsset;
- (id)getPlayerItem;
- (id)getAVPlayer;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (id)getPlayerItemVideoOutput;
- (__CVBuffer *)getCurrentPixelBuffer;
- (void)outputFrameTimerFunc:(id)arg1;
- (void)prepareAsync;
- (void)asyncSetCategroyForExternalPlayback:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (void)pause;
- (void)releasePlayer;
- (void)seekNoCallbackToTime:(double)arg1;
- (void)seekToTime:(double)arg1 isAccurate:(BOOL)arg2;
- (void)seekToTime:(double)arg1 isAccurate:(BOOL)arg2 isNoCallbackSeek:(BOOL)arg3;
- (id)syncCaptureVideo;
- (void)captureVideoWithFinishBlock:(id /* block */)arg1;
- (void)initPlayer;
- (void)createPlayer;
- (void)setPlayerStartPos:(float)arg1;
- (void)generateAVPlayer;
- (void)setVideoRenderInBackgroundEnable:(BOOL)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)createAsset;
- (void)createAVPlayerItem;
- (void)addPlayerNotification;
- (void)addPlayerObserver;
- (void)removePlayerObserver;
- (void)addPeriodicTimeObserver;
- (void)removeTimeObserver;
- (void)forceResumePlayWhenHaveBuffer;
- (void)checkBufferingState;
- (void)applicationBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)onNewAccessLogEntry:(id)arg1;
- (void)onStatusChange:(id)arg1;
- (void)onPlaybackBufferEmptyChange;
- (void)onLoadedTimeRangesChange;
- (void)onPlaybackLikelyToKeepUpChange;
- (void)onPlayerDidPlayToEndTime;
- (void)onPlaybackBufferFullChange;
- (void)onVideoPlaybackStalled:(id)arg1;
- (void)onVideoNewErrorLogEntry:(id)arg1;
- (unsigned long long)onPlayerErrorHappend;
- (void)onPresentationSizeChange;
- (void)onPlayerRateChange:(id)arg1;
- (void)onTimeControlStatus:(id)arg1;
- (void)onFristFrameRendered;
- (id)fairPlayResourceloader;
- (void)setFairPlayResourceloader:(id)arg1;
- (id)changeToPlayPath;
- (void)setChangeToPlayPath:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)playbackTimeObserver;
- (void)setPlaybackTimeObserver:(id)arg1;
- (id)videoOutput;
- (void)setVideoOutput:(id)arg1;
- (void)setPlayablePos:(double)arg1;
- (float)lastPlayBackRate;
- (void)setLastPlayBackRate:(float)arg1;
- (BOOL)isNoCallbackSeek;
- (void)setIsNoCallbackSeek:(BOOL)arg1;
- (double)lastGotFrameTime;
- (void)setLastGotFrameTime:(double)arg1;
- (id)outputFrameTimer;
- (void)setOutputFrameTimer:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end
