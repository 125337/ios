@interface WCAdAlphaVideoView : MMUIView <WCPlayerDownloaderExt, WCFacadeExt, WCSNSADPlayerControlViewDelegate, AVPlayerItemOutputPullDelegate>
{
    BOOL _bTimelineScene; // +0x8
    BOOL _readyToAddPlayCount; // +0x9
    BOOL _intentToPlay; // +0xa
    float _periodicTimeInterval; // +0xc
    int _videoCompositeType; // +0x10
    id <WCAdAlphaVideoViewDelegate> _delegate; // +0x18
    WCMediaItem * _mediaData; // +0x20
    WCDataItem * _dataItem; // +0x28
    WCADVideoPlayInfo * _adPlayInfo; // +0x30
    WCPlayerView * _wcPlayerView; // +0x38
    WCSNSADPlayerControlView * _controlView; // +0x40
    WCPlayerPlayArgs * _playerArgs; // +0x48
    AVMutableVideoComposition * _videoComposition; // +0x50
    double _lastPlaybackTime; // +0x58
    AVPlayerItemVideoOutput * _videoOutput; // +0x60
    CADisplayLink * _displayLink; // +0x68
    WCAdAlphaVideoMetalRender * _metalRender; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 mediaData:(id)arg2 videoCompositeType:(int)arg3 dataItem:(id)arg4 bTimelineScene:(BOOL)arg5 adPlayInfo:(id)arg6 periodicTimeInterval:(float)arg7;
- (void)initData:(id)arg1;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)addNotification;
- (void)applicationBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)onTimeLineVcWillPop;
- (id)fetchVideoPlayInfo;
- (void)tryAddVideoPlayCount;
- (void)updateWCPlayTotalTime:(double)arg1;
- (void)mergeWCPlaybackInfo;
- (void)clearShortVideo;
- (BOOL)isSightVideoExist;
- (id)controlView;
- (id)playerArgs;
- (void)setupWCPlayerView;
- (void)startWCPlayer;
- (void)pauseWCPlayer;
- (BOOL)isWCPlayerPlaying;
- (void)exitVideoPlay;
- (void)seekWCPlayerToTime:(double)arg1 needAddPlayCount:(BOOL)arg2 pauseFirstWhenPlaying:(BOOL)arg3;
- (void)setPlayBeginPos:(float)arg1;
- (void)setPlayEndPos:(float)arg1;
- (void)updatePlayerSubviewsLayout;
- (void)checkWCSightViewState;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onWCPlayerPlayEnd:(BOOL)arg1;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onPlayerCreated;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (double)fetchCurrentPlaybackTime;
- (double)fetchCurrentPlaybackTimeMs;
- (id)createVideoCompositionWithAsset:(id)arg1;
- (BOOL)shouldUseCustomRender;
- (void)setupMetalRender;
- (void)displayLinkCallback:(id)arg1;
- (void)clearRender;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mediaData;
- (void)setMediaData:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)bTimelineScene;
- (void)setBTimelineScene:(BOOL)arg1;
- (id)adPlayInfo;
- (void)setAdPlayInfo:(id)arg1;
- (float)periodicTimeInterval;
- (void)setPeriodicTimeInterval:(float)arg1;
- (id)wcPlayerView;
- (void)setWcPlayerView:(id)arg1;
- (void)setControlView:(id)arg1;
- (void)setPlayerArgs:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (int)videoCompositeType;
- (void)setVideoCompositeType:(int)arg1;
- (BOOL)readyToAddPlayCount;
- (void)setReadyToAddPlayCount:(BOOL)arg1;
- (BOOL)intentToPlay;
- (void)setIntentToPlay:(BOOL)arg1;
- (double)lastPlaybackTime;
- (void)setLastPlaybackTime:(double)arg1;
- (id)videoOutput;
- (void)setVideoOutput:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)metalRender;
- (void)setMetalRender:(id)arg1;
- (void).cxx_destruct;
@end
