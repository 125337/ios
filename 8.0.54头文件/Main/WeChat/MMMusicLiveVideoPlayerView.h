@interface MMMusicLiveVideoPlayerView : WCPlayerControlView <WCPlayerEventExt>
{
    WCPlayerView * m_retainPlayerView; // +0x8
    unsigned long long m_lastPlayerState; // +0x10
    unsigned long long m_lastProcessState; // +0x18
    double _clipOffsetSec; // +0x20
    double _clipLengthSec; // +0x28
    unsigned int _nativeViewId; // +0x30
    WCPlayerView * _playerView; // +0x38
    unsigned long long _videoEpisodeIndex; // +0x40
    MMMusicVideoStaticticsReporter * _videoReporter; // +0x48
    id <MMMusicLiveVideoPlayerDelegate> _delegate; // +0x50
    double _videoPlayDuration; // +0x58
    WCPlayerPlayArgs * _playerInfo; // +0x60
    WCFinderFeedMediaWrap * _mediaWrap; // +0x68
}
- (void)initPlayerInfoWithMediaInfo:(id)arg1 initialTime:(double)arg2;
- (void)setAutoPlay:(BOOL)arg1;
- (void)setLoop:(BOOL)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setPlayRate:(double)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setAccurateSeek:(BOOL)arg1;
- (void)setMinBufferLength:(float)arg1 maxBufferLength:(float)arg2;
- (void)setDownloadGrading:(float)arg1;
- (void)setPreloadSec:(float)arg1;
- (void)setBufferTimeArr:(id)arg1;
- (id)initWithViewId:(unsigned int)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)resetPlayerStatus;
- (void)layoutSubviews;
- (void)setMediaInfo:(id)arg1 videoEpisodeIndex:(unsigned long long)arg2 initialTime:(double)arg3 shouldPlay:(BOOL)arg4;
- (float)calculateRateWithVideoDurationInSecond:(double)arg1 clipLengthInSecond:(double)arg2;
- (float)getCurrentPlayRate;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seek:(double)arg1;
- (id)syncCaptureVideo;
- (void)destroy;
- (void)setClipOffsetSec:(double)arg1 clipLengthSec:(double)arg2;
- (void)reportVideoPlayStatictics;
- (id)genAvPlayerView;
- (BOOL)isPlaying;
- (double)currentPlayedTime;
- (CGSize)videoSize;
- (double)videoDuration;
- (id)videoReporter;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoBeginPlay;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoDidPlayToEndTime;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (unsigned int)nativeViewId;
- (unsigned long long)videoEpisodeIndex;
- (void)setVideoEpisodeIndex:(unsigned long long)arg1;
- (void)setVideoReporter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)videoPlayDuration;
- (void)setVideoPlayDuration:(double)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (void).cxx_destruct;
@end

