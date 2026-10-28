@interface WCCorePlayer : WCPlayerObject
{
    BOOL _isPreparing; // +0x8
    BOOL _isPrepared; // +0x9
    BOOL _isBuffering; // +0xa
    BOOL _isSeeking; // +0xb
    WCPlayerPlayArgs * _playerArgs; // +0x10
    WCPlayerLayerView * _displayView; // +0x18
    WCPlayerPlaybackInfo * _playbackInfo; // +0x20
    WCDownloadArgsWrap * _downloadArgsWrap; // +0x28
    WCPlayerResourceLoader * _resourceloader; // +0x30
    WCPlayerReporter * _reporter; // +0x38
    id <WCCorePlayerDelegate> _delegate; // +0x40
    id /* block */ _playbackCallback; // +0x48
    double _seekTime; // +0x50
    long long _seekCount; // +0x58
    NSRecursiveLock * _lock; // +0x60
    double _seekingTime; // +0x68
}
- (id)initWithPlayerArgs:(id)arg1 playbackInfo:(id)arg2 downloadArgsWrap:(id)arg3 resourceloader:(id)arg4;
- (void)dealloc;
- (double)duration;
- (float)videoBitrate;
- (float)audioBitrate;
- (long long)videoDecodeFrmCnt;
- (long long)videoRenderFrmCnt;
- (double)currentTime;
- (double)playablePos;
- (void)setVolume:(double)arg1;
- (double)getVolume;
- (CGSize)presentationSize;
- (CGAffineTransform)preferredTransform;
- (float)playbackRate;
- (void)setPlaybackRate:(float)arg1;
- (void)prepareAsync;
- (void)start;
- (void)stop;
- (void)pause;
- (void)releasePlayer;
- (void)pauseBuffering;
- (void)resumeBuffering;
- (void)addPeriodicTimeObserver;
- (void)removeTimeObserver;
- (void)setVideoRenderInBackgroundEnable:(BOOL)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (id)syncCaptureVideo;
- (long long)videoFrameRate;
- (void)forceResumePlayWhenHaveBuffer;
- (__CVBuffer *)getCurrentPixelBuffer;
- (id)getPlayerItemVideoOutput;
- (void)captureVideoWithFinishBlock:(id /* block */)arg1;
- (void)switchResourceloaderDelegate:(id)arg1 resourceUrl:(id)arg2 resourceType:(long long)arg3 swithMode:(long long)arg4;
- (void)setPlayerToMuted:(BOOL)arg1;
- (BOOL)muted;
- (void)setPlayerLoop:(BOOL)arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setCallbackVideoFrameEnable:(BOOL)arg1;
- (id)getPlayerAsset;
- (id)getPlayerItem;
- (id)getAVPlayer;
- (BOOL)isEnableCallbackVideoFrame;
- (void)setPlayerContentMode:(long long)arg1;
- (void)seekNoCallbackToTime:(double)arg1;
- (void)seekToTime:(double)arg1 isAccurate:(BOOL)arg2;
- (void)seekToTime:(double)arg1 isAccurate:(BOOL)arg2 isNoCallbackSeek:(BOOL)arg3;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)displayView;
- (void)setDisplayView:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (id)downloadArgsWrap;
- (void)setDownloadArgsWrap:(id)arg1;
- (id)resourceloader;
- (void)setResourceloader:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)playbackCallback;
- (void)setPlaybackCallback:(id /* block */)arg1;
- (BOOL)isPreparing;
- (void)setIsPreparing:(BOOL)arg1;
- (BOOL)isPrepared;
- (void)setIsPrepared:(BOOL)arg1;
- (BOOL)isBuffering;
- (void)setIsBuffering:(BOOL)arg1;
- (BOOL)isSeeking;
- (void)setIsSeeking:(BOOL)arg1;
- (double)seekTime;
- (void)setSeekTime:(double)arg1;
- (long long)seekCount;
- (void)setSeekCount:(long long)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (double)seekingTime;
- (void)setSeekingTime:(double)arg1;
- (void).cxx_destruct;
@end
