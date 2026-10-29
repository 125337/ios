@interface MMMusicMVEpisodeItemCellView : UIView <UIGestureRecognizerDelegate, MMMusicMVSingleVideoItemViewDelegate, MMMusicNoAnyVideoViewPlayerDelegate>
{
    BOOL _isPreviewMode; // +0x8
    BOOL _isShowPromptLabel; // +0x9
    BOOL _forbidPlaying; // +0xa
    BOOL _isFullScreen; // +0xb
    id <MMMusicMVEpisodeItemCellViewDelegate> _delegate; // +0x10
    MMMusicMVTrackItem * _trackItem; // +0x18
    unsigned long long _episodeIndex; // +0x20
    MMMusicNoAnyVideoView * _noVideoView; // +0x28
    MMMusicMVSingleVideoItemView * _singleVideoView; // +0x30
    UIImageView * _videoHiddenPromptImageView; // +0x38
    UILabel * _videoHiddenPromptLabel; // +0x40
    UIView * _videoCoverView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupNoVideoView;
- (void)setupVideoHiddenPrompt;
- (void)reportVideoPlayStatictics;
- (void)prepareForReuse;
- (id)videoCoverView;
- (void)setupSingleVideoView;
- (void)setTrackItem:(id)arg1 videoInitialTime:(double)arg2;
- (void)setTrackItem:(id)arg1 videoInitialTime:(double)arg2 autoPlay:(BOOL)arg3;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onVideoTogglePostOperation;
- (void)onVideoToggleJumpFinderProfileOperation:(id)arg1;
- (BOOL)isMusicMVSingleVideoItemViewInUse:(id)arg1;
- (void)onLiveVideoPlayerViewShowBufferingView;
- (void)onLiveVideoPlayerViewHideBufferingView;
- (void)mvSingleVideoItemView:(id)arg1 didUpdateVideoCurrentTime:(double)arg2 bufferPosition:(double)arg3;
- (void)singleVideoItemView:(id)arg1 onPlayerVideoFrameOut:(id)arg2;
- (void)singleVideoItemView:(id)arg1 onImageFrameOut:(id)arg2;
- (id)singleVideoItemView:(id)arg1 finderDataItemForTrack:(id)arg2;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onVideoEndBuffering:(unsigned int)arg1;
- (void)reloadData;
- (void)setTrackItem:(id)arg1;
- (void)hideVideoPlayerView;
- (void)showVideoPlayerView;
- (void)seekCurrentVideoPlay:(double)arg1;
- (void)seekCurrentVideoPlay:(double)arg1 autoPlay:(BOOL)arg2;
- (void)startCurrentVideoPlay;
- (void)stopCurrentVideoPlay;
- (double)currentVideoPlayedTime;
- (void)pauseCurrentVideoPlay;
- (void)setIsPreviewMode:(BOOL)arg1;
- (void)setIsFullScreen:(BOOL)arg1;
- (void)setForbidPlaying:(BOOL)arg1;
- (void)setForbidPlaying:(BOOL)arg1 reset:(BOOL)arg2;
- (void)setNoVideoViewPromptAlpha:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)trackItem;
- (unsigned long long)episodeIndex;
- (void)setEpisodeIndex:(unsigned long long)arg1;
- (BOOL)isPreviewMode;
- (BOOL)isShowPromptLabel;
- (void)setIsShowPromptLabel:(BOOL)arg1;
- (BOOL)forbidPlaying;
- (BOOL)isFullScreen;
- (id)noVideoView;
- (void)setNoVideoView:(id)arg1;
- (id)singleVideoView;
- (void)setSingleVideoView:(id)arg1;
- (id)videoHiddenPromptImageView;
- (void)setVideoHiddenPromptImageView:(id)arg1;
- (id)videoHiddenPromptLabel;
- (void)setVideoHiddenPromptLabel:(id)arg1;
- (void)setVideoCoverView:(id)arg1;
- (void).cxx_destruct;
@end

