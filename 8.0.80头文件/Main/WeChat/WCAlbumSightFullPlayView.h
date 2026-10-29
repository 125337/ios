@interface WCAlbumSightFullPlayView : UIView <UIActionSheetDelegate, WCFacadeExt, FullScreenGestureDelegate, WCPlayerConfigDelegate, WCPlayerEventExt, WCMomentsPlayerViewContainerDelegate, WCImageFullScreenTagViewDelegate>
{
    BOOL _isSightVisible; // +0x8
    BOOL _useNewInteraction; // +0x9
    BOOL _useV3GalleryPagingStyle; // +0xa
    BOOL _showLikeCommentCount; // +0xb
    BOOL _fallsBackToScaleFadeDuringHideAnimation; // +0xc
    BOOL _bAutoPlayWhenReady; // +0xd
    BOOL _isStopped; // +0xe
    BOOL _bIsLongPressHandled; // +0xf
    BOOL _isImageReady; // +0x10
    BOOL _isShowTemplatePlayerView; // +0x11
    BOOL _isAnimatingToShowFullScreen; // +0x12
    BOOL _hasSetupDoubleTapRequirement; // +0x13
    BOOL _isPagingHeadViewAlphaActive; // +0x14
    BOOL _isV3GalleryExiting; // +0x15
    unsigned long long _index; // +0x18
    long long _playScene; // +0x20
    long long _browseScene; // +0x28
    WCMediaItem * _mediaData; // +0x30
    WCPlayerView * _playerView; // +0x38
    WCWidgetPlayer * _customWidgetPlayer; // +0x40
    id <WCAlbumSightFullPlayViewDelegate> _delegate; // +0x48
    UIView * _imageTagSuperView; // +0x50
    NSString * _albumSessionId; // +0x58
    NSString * _initialMediaItemId; // +0x60
    UIView * _fullScreenContent; // +0x68
    WCMomentsPlayerViewContainer * _playerViewContainer; // +0x70
    WCSnsFullScreenGestureRecognizer * _fullScreenGesture; // +0x78
    WCMomentsPlayerSourceController * _playerSourceController; // +0x80
    WCPlayerPlayArgs * _playerInfo; // +0x88
    WCPlayerConfigControlView * _controlView; // +0x90
    WCMediaItemWrap * _mediaItemWrap; // +0x98
    MJTemplatePlayerView * _templatePlayerView; // +0xa0
    WCImageFullScreenTagView * _imageTagView; // +0xa8
    WCPhotoMutipleImageHeadView * _headView; // +0xb0
    NSString * _mainTitle; // +0xb8
    NSString * _subTitle; // +0xc0
    NSString * _mediaIndicator; // +0xc8
    UITapGestureRecognizer * _singleTapGesture; // +0xd0
    double _pagingHeadViewBaseAlpha; // +0xd8
    CGRect _m_originImageRectInScreen; // +0xe0
    UIEdgeInsets _edgeInset; // +0x100
}
- (BOOL)shouldShowLikeCommentCount;
- (id)initWithMediaData:(id)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (CGSize)dragContainerSize;
- (void)setDragContainerSize:(CGSize)arg1;
- (void)cancelDragToClose;
- (id)galleryTransitionImage;
- (id)galleryTransitionMediaView;
- (void)setBrowseScene:(long long)arg1;
- (void)displaySightWithMediaItem:(id)arg1;
- (void)setDataAndView:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)createAndSetupPlayer;
- (void)createAndSetupTemplatePlayer;
- (void)createAndSetupWCPlayer;
- (void)setupDoubleTapRequirementIfNeeded;
- (void)dealloc;
- (void)downloadImage;
- (id)getImage;
- (void)reloadSightPreviewImage;
- (CGRect)suitablePlayerViewFrame;
- (CGRect)suitablePlayerViewFrameForVideoSize:(CGSize)arg1;
- (CGSize)suitablePlayerViewSizeForVideoSize:(CGSize)arg1;
- (CGSize)originPlayerViewVideoSize;
- (void)playSight;
- (void)stopPlay;
- (void)resumePlay;
- (void)onLongPressSightView:(id)arg1;
- (void)onClickSightView:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenLongPressEnd;
- (void)updateVisibleForControlView:(double)arg1;
- (void)onPlayerControlAction:(long long)arg1;
- (void)onProgressBarExpandingStatusChanged:(BOOL)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)_playVideo;
- (void)_playCustomWidgetPlayer;
- (void)_pauseVideo;
- (void)_pauseCunstomWidgetPlayer;
- (void)_seekVideoToTimeSec:(double)arg1;
- (void)_seekCustomWidetPlayerToTimeSec:(double)arg1;
- (void)_restartVideo;
- (void)_restartCustomWidgetPlayer;
- (void)_stopVideo;
- (void)_stopCustomWidgetPlayer;
- (id)playerView;
- (id)playerViewContainer;
- (void)_initTemplatePlayerView;
- (void)_initCustomWidgetPlayer;
- (void)_relayoutCustomWidgetPlayerWithVideoFrame:(CGRect)arg1;
- (void)_updateGestureContainerFrameWithVideoFrame:(CGRect)arg1;
- (id)playerInfo;
- (id)controlView;
- (id)generateConfig;
- (void)cleanPlayerView;
- (void)_cleanVideo;
- (void)_cleanCustomWidgetPlayer;
- (void)resetPlayerContainer;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (void)playerViewContainerDidZoom:(id)arg1;
- (void)layoutHeadView;
- (void)layoutImageTagView;
- (void)updateHeadAndBottomView;
- (void)updateMainTitle:(id)arg1 subTitle:(id)arg2;
- (void)updateMainTitle:(id)arg1 subTitle:(id)arg2 mediaIndicator:(id)arg3;
- (void)updatePagingTransitionAlpha:(double)arg1 feedInfoAlpha:(double)arg2 feedInfoTranslationX:(double)arg3 adjustsFeedInfo:(BOOL)arg4;
- (void)bringImageTagViewToFront;
- (void)animationShow;
- (void)animationHideWithRotate;
- (void)setupDetailButtonReportParams:(id)arg1;
- (id)miaoJianShareInfo;
- (void)miaoJianButtonClickedInImageTagView:(id)arg1;
- (void)detailButtonClickedInImageTagView:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (long long)playScene;
- (void)setPlayScene:(long long)arg1;
- (long long)browseScene;
- (BOOL)isSightVisible;
- (void)setIsSightVisible:(BOOL)arg1;
- (id)mediaData;
- (void)setMediaData:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (id)customWidgetPlayer;
- (void)setCustomWidgetPlayer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageTagSuperView;
- (void)setImageTagSuperView:(id)arg1;
- (BOOL)useNewInteraction;
- (void)setUseNewInteraction:(BOOL)arg1;
- (BOOL)useV3GalleryPagingStyle;
- (void)setUseV3GalleryPagingStyle:(BOOL)arg1;
- (BOOL)showLikeCommentCount;
- (void)setShowLikeCommentCount:(BOOL)arg1;
- (CGRect)m_originImageRectInScreen;
- (void)setM_originImageRectInScreen:(CGRect)arg1;
- (BOOL)fallsBackToScaleFadeDuringHideAnimation;
- (void)setFallsBackToScaleFadeDuringHideAnimation:(BOOL)arg1;
- (BOOL)bAutoPlayWhenReady;
- (void)setBAutoPlayWhenReady:(BOOL)arg1;
- (id)albumSessionId;
- (void)setAlbumSessionId:(id)arg1;
- (id)initialMediaItemId;
- (void)setInitialMediaItemId:(id)arg1;
- (id)fullScreenContent;
- (void)setFullScreenContent:(id)arg1;
- (void)setPlayerViewContainer:(id)arg1;
- (id)fullScreenGesture;
- (void)setFullScreenGesture:(id)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (BOOL)bIsLongPressHandled;
- (void)setBIsLongPressHandled:(BOOL)arg1;
- (BOOL)isImageReady;
- (void)setIsImageReady:(BOOL)arg1;
- (id)playerSourceController;
- (void)setPlayerSourceController:(id)arg1;
- (void)setPlayerInfo:(id)arg1;
- (void)setControlView:(id)arg1;
- (id)mediaItemWrap;
- (void)setMediaItemWrap:(id)arg1;
- (id)templatePlayerView;
- (void)setTemplatePlayerView:(id)arg1;
- (BOOL)isShowTemplatePlayerView;
- (void)setIsShowTemplatePlayerView:(BOOL)arg1;
- (id)imageTagView;
- (void)setImageTagView:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (BOOL)isAnimatingToShowFullScreen;
- (void)setIsAnimatingToShowFullScreen:(BOOL)arg1;
- (UIEdgeInsets)edgeInset;
- (void)setEdgeInset:(UIEdgeInsets)arg1;
- (id)mainTitle;
- (void)setMainTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)mediaIndicator;
- (void)setMediaIndicator:(id)arg1;
- (id)singleTapGesture;
- (void)setSingleTapGesture:(id)arg1;
- (BOOL)hasSetupDoubleTapRequirement;
- (void)setHasSetupDoubleTapRequirement:(BOOL)arg1;
- (BOOL)isPagingHeadViewAlphaActive;
- (void)setIsPagingHeadViewAlphaActive:(BOOL)arg1;
- (BOOL)isV3GalleryExiting;
- (void)setIsV3GalleryExiting:(BOOL)arg1;
- (double)pagingHeadViewBaseAlpha;
- (void)setPagingHeadViewBaseAlpha:(double)arg1;
- (void).cxx_destruct;
@end
