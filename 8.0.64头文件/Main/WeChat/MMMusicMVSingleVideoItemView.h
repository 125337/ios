@interface MMMusicMVSingleVideoItemView : UIView <MMMusicLiveVideoPlayerDelegate, MVImagePlayerDelegate>
{
    BOOL _isPreviewMode; // +0x8
    BOOL _isFullScreen; // +0x9
    BOOL _forbidAutoplay; // +0xa
    BOOL _hideVideoView; // +0xb
    BOOL _bLongVideo; // +0xc
    id <MMMusicMVSingleVideoItemViewDelegate> _delegate; // +0x10
    unsigned long long _videoEpisodeIndex; // +0x18
    MMMusicMVTrackItem * _trackItem; // +0x20
    MMMusicLiveVideoPlayerView * _playerView; // +0x28
    MMMusicFadeOutLayer * _playerMaskLayer; // +0x30
    MVImagePlayer * _imagePlayer; // +0x38
    UIImageView * _bgImageView; // +0x40
    UIView * _bgImageViewCover; // +0x48
    NSString * _finderUsername; // +0x50
    NSString * _currentTid; // +0x58
    NSString * _currentNonceId; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)updateModel:(id)arg1 videoEpisodeIndex:(unsigned long long)arg2 initialTime:(double)arg3;
- (void)updateModel:(id)arg1 videoEpisodeIndex:(unsigned long long)arg2 initialTime:(double)arg3 fromAsyncGetData:(BOOL)arg4;
- (id)getFinderDataItemWithTrack:(id)arg1;
- (void)updateModel:(id)arg1 videoEpisodeIndex:(unsigned long long)arg2 initialTime:(double)arg3 fromAsyncGetData:(BOOL)arg4 autoPlay:(BOOL)arg5;
- (void)layoutSubviews;
- (void)updateVideoAuthorNickName:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setIsPreviewMode:(BOOL)arg1;
- (void)setHideVideoView:(BOOL)arg1;
- (void)reportVideoPlayStatictics;
- (void)prepareForReuse;
- (void)startVideoPlay;
- (void)seekVideoPlay:(double)arg1;
- (void)pauseVideoPlay;
- (void)stopVideoPlay;
- (double)videoPlayedTime;
- (void)hideVideoPlayerView;
- (void)showVideoPlayerView;
- (BOOL)isVideoPlaying;
- (void)setupMaskLayerWithSize:(CGSize)arg1;
- (void)clearBgViewImage;
- (void)onVideoCurrTimeChanged:(double)arg1 totalDuration:(double)arg2 viewId:(unsigned int)arg3;
- (void)onVideoPlay:(unsigned int)arg1;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onVideoEndBuffering:(unsigned int)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1 playBackInfo:(id)arg2;
- (void)setupMaskLayerSizeWithVideoSize:(CGSize)arg1;
- (void)onVideoPause:(unsigned int)arg1;
- (void)onVideoDidPlayToEndTime:(unsigned int)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onVideoPlayerMediaInfoDidChange:(id)arg1;
- (void)setupImagePlayer:(id)arg1;
- (void)startImageShow:(id)arg1;
- (void)mvImagePlayer:(id)arg1 onVideoFrameOut:(id)arg2;
- (id)imagePlayer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isPreviewMode;
- (BOOL)isFullScreen;
- (void)setIsFullScreen:(BOOL)arg1;
- (BOOL)forbidAutoplay;
- (void)setForbidAutoplay:(BOOL)arg1;
- (BOOL)hideVideoView;
- (unsigned long long)videoEpisodeIndex;
- (void)setVideoEpisodeIndex:(unsigned long long)arg1;
- (id)trackItem;
- (void)setTrackItem:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)playerMaskLayer;
- (void)setPlayerMaskLayer:(id)arg1;
- (void)setImagePlayer:(id)arg1;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)bgImageViewCover;
- (void)setBgImageViewCover:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)currentTid;
- (void)setCurrentTid:(id)arg1;
- (id)currentNonceId;
- (void)setCurrentNonceId:(id)arg1;
- (BOOL)bLongVideo;
- (void)setBLongVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end
