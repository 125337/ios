@interface WCAlbumSightFullPlayView : UIView <UIActionSheetDelegate, WCFacadeExt, FullScreenGestureDelegate, WCPlayerConfigDelegate, WCPlayerEventExt, WCMomentsPlayerViewContainerDelegate>
{
    BOOL _isSightVisible; // +0x8
    BOOL _isStopped; // +0x9
    BOOL _bIsLongPressHandled; // +0xa
    BOOL _isImageReady; // +0xb
    BOOL _isShowTemplatePlayerView; // +0xc
    unsigned long long _index; // +0x10
    long long _playScene; // +0x18
    long long _browseScene; // +0x20
    WCMediaItem * _mediaData; // +0x28
    WCPlayerView * _playerView; // +0x30
    WCWidgetPlayer * _customWidgetPlayer; // +0x38
    id <WCAlbumSightFullPlayViewDelegate> _delegate; // +0x40
    UIView * _fullScreenContent; // +0x48
    WCMomentsPlayerViewContainer * _playerViewContainer; // +0x50
    WXFullScreenGestureRecognizer * _fullScreenGesture; // +0x58
    WCMomentsPlayerSourceController * _playerSourceController; // +0x60
    WCPlayerPlayArgs * _playerInfo; // +0x68
    WCPlayerConfigControlView * _controlView; // +0x70
    WCMediaItemWrap * _mediaItemWrap; // +0x78
    MJTemplatePlayerView * _templatePlayerView; // +0x80
}
- (id)initWithMediaData:(id)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (void)setBrowseScene:(long long)arg1;
- (void)displaySightWithMediaItem:(id)arg1;
- (void)setDataAndView:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)createAndSetupPlayer;
- (void)createAndSetupTemplatePlayer;
- (void)createAndSetupWCPlayer;
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
- (void).cxx_destruct;
@end
