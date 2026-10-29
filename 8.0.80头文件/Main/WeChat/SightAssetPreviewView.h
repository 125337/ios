@interface SightAssetPreviewView : UIView <UIScrollViewDelegate, ILiveTaskMgrExt, ILongVideoInPictureExt>
{
    BOOL _muted; // +0x8
    BOOL _allowsExternalPlayback; // +0x9
    BOOL _hideOverlayView; // +0xa
    BOOL _scaleAspectToFill; // +0xb
    BOOL _videoReady; // +0xc
    BOOL _hasStartedPlaying; // +0xd
    float _playRate; // +0x10
    float _volume; // +0x14
    id <SightAssetPreviewViewDelegate> _delegate; // +0x18
    NSURL * _assetURL; // +0x20
    AVAsset * _asset; // +0x28
    AVMutableVideoComposition * _videoComposition; // +0x30
    UIView * _playScrollView; // +0x38
    double _playerViewY; // +0x40
    WCWidgetPlayer * _customWidgetPlayer; // +0x48
    NSObject<OS_dispatch_queue> * _loadingQueue; // +0x50
    AVPlayerItem * _playerItem; // +0x58
    AVPlayer * _player; // +0x60
    AVPlayerLayer * _playerLayer; // +0x68
    unsigned long long _previewOrientation; // +0x70
    CGSize _outputSize; // +0x78
    CGRect _playerViewFrame; // +0x88
    struct _customPlayTimeRange; // +0xa8
    struct _fixedPlayTimeRange; // +0xd8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 scaleAspectToFill:(BOOL)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (CGRect)getVideoPreviewFrame;
- (void)setAssetURL:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setVideoComposition:(id)arg1;
- (void)setCustomPlayTimeRange:(struct)arg1;
- (void)setVolume:(float)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setPlayRate:(float)arg1;
- (struct)currentPlaybackTime;
- (struct)currentRelatedPlaybackTime;
- (void)configWithAsset:(id)arg1 scaleAspectToFill:(BOOL)arg2;
- (CGRect)previewFrameWithVideoSize:(CGSize)arg1;
- (CGSize)_updateOutputVideoSizeForAVAsset:(id)arg1;
- (void)loadAsset:(id)arg1;
- (void)reset;
- (void)_setupObserveWithPlayerItem:(id)arg1;
- (void)_unSetupObserveWithPlayerItem:(id)arg1;
- (void)_fixPlayTimeRangeForAssetDuration:(struct)arg1;
- (BOOL)_hasPlayedToEnd:(struct)arg1;
- (double)_convertAbsTimeToRelatedTimeSec:(struct)arg1;
- (void)playerItemDidReady;
- (void)playerItemDidPlayAtTime:(struct)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)_initCustomWidgetPlayer;
- (void)play;
- (void)_playVideo;
- (void)_playCustomWidgetPlayer;
- (void)pause;
- (void)_pauseVideo;
- (void)_pauseCustomWidgetPlayer;
- (void)seekToTime:(struct)arg1;
- (void)seekToRelatedTime:(struct)arg1;
- (void)_seekVideoToAbsTime:(struct)arg1;
- (void)_seekCustomWidgetPlayerToAbsTime:(struct)arg1;
- (void)restart;
- (void)_restartVideo;
- (void)_restartCustomWidgetPlayer;
- (BOOL)isPlaying;
- (BOOL)shouldBePlaying;
- (void)onViewDidBeDragToRect:(CGRect)arg1;
- (struct)listenTimeInterval;
- (double)listenTimeIntervalInSection;
- (void)_relayoutCustomWidgetPlayer;
- (void)onMMLiveStartForNotifyOuter;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)onLongVideoInPicture;
- (void)onLongVideoCloseInPicture;
- (void)updatePlayerMuted;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)assetURL;
- (id)asset;
- (id)videoComposition;
- (id)playScrollView;
- (void)setPlayScrollView:(id)arg1;
- (CGSize)outputSize;
- (void)setOutputSize:(CGSize)arg1;
- (float)playRate;
- (float)volume;
- (BOOL)muted;
- (double)playerViewY;
- (void)setPlayerViewY:(double)arg1;
- (CGRect)playerViewFrame;
- (void)setPlayerViewFrame:(CGRect)arg1;
- (BOOL)allowsExternalPlayback;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)isHideOverlayView;
- (void)setHideOverlayView:(BOOL)arg1;
- (struct)customPlayTimeRange;
- (id)customWidgetPlayer;
- (void)setCustomWidgetPlayer:(id)arg1;
- (id)loadingQueue;
- (void)setLoadingQueue:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (BOOL)scaleAspectToFill;
- (void)setScaleAspectToFill:(BOOL)arg1;
- (struct)fixedPlayTimeRange;
- (void)setFixedPlayTimeRange:(struct)arg1;
- (BOOL)isVideoReady;
- (void)setVideoReady:(BOOL)arg1;
- (BOOL)hasStartedPlaying;
- (void)setHasStartedPlaying:(BOOL)arg1;
- (unsigned long long)previewOrientation;
- (void)setPreviewOrientation:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
