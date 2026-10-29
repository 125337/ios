@interface MMWebNativeVideoPlayerView : UIView <WCPlayerControlProtocol>
{
    WCPlayerView * m_retainPlayerView; // +0x8
    unsigned long long m_lastPlayerState; // +0x10
    unsigned long long m_lastProcessState; // +0x18
    unsigned int _nativeViewId; // +0x20
    WCPlayerView * _playerView; // +0x28
    id <MMWebNativeVideoPlayerDelegate> _delegate; // +0x30
    WCPlayerPlayArgs * _playerInfo; // +0x38
    long long _mediaType; // +0x40
    MMWebNativeVideoMediaWrap * _webMediaWrap; // +0x48
    NSString * _videoPath; // +0x50
    WCFinderFeedMediaWrap * _finderMediaWrap; // +0x58
}
+ (unsigned int)playerCountGlobal;
- (void)trySetupDefaultPlayArgs;
- (void)initDefaultPlayerInfoWithVideoPath:(id)arg1 initialTime:(double)arg2;
- (void)initFinderPlayerInfoWithInitialTime:(double)arg1 mediaWrap:(id)arg2 playArgs:(id)arg3;
- (void)updateMediaWrapWithDownloadConfiguration:(id)arg1;
- (void)enableQuic;
- (id)mediaWrap;
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
- (void)setFinderMediaWrap:(id)arg1 playerInfo:(id)arg2 initialTime:(double)arg3;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seek:(double)arg1;
- (id)syncCaptureVideo;
- (void)destroy;
- (id)corePlayerView;
- (id)genAvPlayerView;
- (BOOL)isPlaying;
- (double)currentPlayedTime;
- (CGSize)videoSize;
- (double)videoDuration;
- (unsigned int)playerType;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoBeginPlay;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onVideoPlayFinish;
- (void)onCreateThumbImage:(id)arg1;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void)startObserveVolume;
- (void)stopObserveVolume;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (unsigned int)nativeViewId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (long long)mediaType;
- (void)setMediaType:(long long)arg1;
- (id)webMediaWrap;
- (void)setWebMediaWrap:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)finderMediaWrap;
- (void)setFinderMediaWrap:(id)arg1;
- (void).cxx_destruct;
@end
