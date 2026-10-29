@interface MMMusicEditVideoPlayerView : WCPlayerControlView <WCPlayerEventExt>
{
    WCPlayerView * m_retainPlayerView; // +0x8
    unsigned long long m_lastPlayerState; // +0x10
    unsigned long long m_lastProcessState; // +0x18
    unsigned int _nativeViewId; // +0x20
    WCPlayerView * _playerView; // +0x28
    id <MMMusicEditVideoPlayerDelegate> _delegate; // +0x30
    WCPlayerPlayArgs * _playerInfo; // +0x38
    MMMusicEditVideoMediaWrap * _mediaWrap; // +0x40
    NSString * _videoPath; // +0x48
    WCFinderFeedMediaWrap * _finderMediaWrap; // +0x50
}
- (void)initPlayerInfoWithVideoPath:(id)arg1 initialTime:(double)arg2;
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
- (void)setVideoPath:(id)arg1 initialTime:(double)arg2;
- (void)setMediaInfo:(id)arg1 initialTime:(double)arg2 shouldPlay:(BOOL)arg3;
- (void)play;
- (void)mutePlay;
- (void)pause;
- (void)stop;
- (void)seek:(double)arg1;
- (id)syncCaptureVideo;
- (void)destroy;
- (id)genAvPlayerView;
- (BOOL)isPlaying;
- (double)currentPlayedTime;
- (CGSize)videoSize;
- (double)videoDuration;
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
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)finderMediaWrap;
- (void)setFinderMediaWrap:(id)arg1;
- (void).cxx_destruct;
@end

