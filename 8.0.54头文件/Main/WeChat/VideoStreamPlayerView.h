@interface VideoStreamPlayerView : SightPlayerView
{
    BOOL _forbidAutoPlayWhenEnterForeGround; // +0x11
    float _currentPlayedSec; // +0x14
    VideoStreamInfo * _videoInfo; // +0x18
    VideoStreamMoniterObject * _stateMoniterObject; // +0x20
    id <NSObject><AVPlayerStateControlDelegate> _controlDelegate; // +0x28
    NSObject * _playbackTimeObserver; // +0x30
    NSArray * _arrBufferTimes; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)clearPlayer;
- (void)initPlayer;
- (id)generatePlayerItem;
- (void)setDisableResumeMusicPlayAfterPause:(BOOL)arg1;
- (unsigned long long)startDownloadVideo;
- (void)stopDownloadVideo;
- (void)startPlayer;
- (void)performPauseForce:(BOOL)arg1;
- (void)seekTo:(float)arg1;
- (void)startBuffering;
- (id)getFormalVideoPath;
- (void)appBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)playToEnd:(id)arg1;
- (void)monitoringPlayback:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)calculateDataBufferState;
- (void)reportKVArgs:(id)arg1;
- (void)resetPlayerToLocalPlay;
- (void)makeSureVideoPauseWhenNextAppActivePlay;
- (id)getAVPlayer;
- (id)getAVPlayerItem;
- (double)getVideoBufferedTime;
- (double)getVideoCurrentSeconde;
- (void)updateVideoArgs;
- (void)genThumbIfNeed;
- (void)tryToPauseAndStartLoading;
- (void)tryToPlayAndStopLoading;
- (void)tryToBeginPlayVideo;
- (void)OnVideoDownloadErrorExpired:(BOOL)arg1;
- (void)onDownloadVideoReturn:(id)arg1;
- (void)onDownloadSuccess;
- (void)OnSnsVideoChanged;
- (BOOL)isStreamingPlayMode;
- (void)onDownloadProgress:(unsigned int)arg1;
- (id)videoInfo;
- (void)setVideoInfo:(id)arg1;
- (id)stateMoniterObject;
- (void)setStateMoniterObject:(id)arg1;
- (BOOL)forbidAutoPlayWhenEnterForeGround;
- (void)setForbidAutoPlayWhenEnterForeGround:(BOOL)arg1;
- (id)controlDelegate;
- (void)setControlDelegate:(id)arg1;
- (float)currentPlayedSec;
- (void)setCurrentPlayedSec:(float)arg1;
- (id)playbackTimeObserver;
- (void)setPlaybackTimeObserver:(id)arg1;
- (id)arrBufferTimes;
- (void)setArrBufferTimes:(id)arg1;
- (void).cxx_destruct;
@end

