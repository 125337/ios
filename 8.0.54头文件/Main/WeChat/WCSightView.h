@interface WCSightView : MMUIControl <WCNetworkMediaPlayerDelegate, WCFacadeExt, IUiUtilExt, WCCanvasPageViewControllerDelegate, WCCanvasPageViewAnimationProtocol, WCSightFullPlayViewControllerDelegate, UIActionSheetDelegate, WCPlayerDownloaderExt, WCCanvasPageViewControllerExt, WCSNSADPlayerControlViewDelegate, WCPlayerEventExt>
{
    BOOL m_bIsLongPressHandled; // +0x8
    WCDataItem * m_dataItem; // +0x10
    MMUIWindow * m_fullScreenWindow; // +0x18
    UIImageView * _thumbImageView; // +0x20
    WCSightFullPlayViewController * m_attachFullPlayViewController; // +0x28
    BOOL m_fullScreenPlaying; // +0x30
    BOOL m_bfullScreenPlayAttachVideo; // +0x31
    BOOL m_bTimelineScene; // +0x32
    int m_currentPage; // +0x34
    BOOL m_closeForViewDetail; // +0x38
    NSString * _nsFromVCName; // +0x40
    WCADVideoPlayInfo * m_adPlayInfo; // +0x48
    BOOL m_isImageReady; // +0x50
    BOOL _tryingToPlay; // +0x51
    WCMediaItem * m_mediaData; // +0x58
    id <WCSightViewDelegate> m_delegate; // +0x60
    WCSNSADPlayerControlView * _controlView; // +0x68
    WCPlayerView * _wcPlayerView; // +0x70
    WCPlayerPlayArgs * _playerInfo; // +0x78
    UIView * _controlViewContainer; // +0x80
}
- (void)initData:(id)arg1;
- (id)initWithMediaData:(id)arg1;
- (id)initWithMediaData:(id)arg1 withFrame:(CGRect)arg2;
- (id)initWithMediaData:(id)arg1 withFrame:(CGRect)arg2 dataItem:(id)arg3 bTimelineScene:(BOOL)arg4;
- (id)initWithMediaData:(id)arg1 withFrame:(CGRect)arg2 dataItem:(id)arg3 bTimelineScene:(BOOL)arg4 adPlayInfo:(id)arg5;
- (void)dealloc;
- (void)layoutPlayerContents;
- (void)onMainWindowFrameChanged;
- (void)registerGestureRecognizers;
- (BOOL)isSightVideoExist;
- (id)getImage;
- (void)reloadSightPreviewImage;
- (BOOL)isAutoPlayVideo;
- (void)willMoveToSuperview:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)onClickWCSight:(id)arg1;
- (void)onDoubleClickWCSight:(id)arg1;
- (void)onTimeLineVcWillPop;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)animationShow:(BOOL)arg1;
- (void)LongPressEvents:(id)arg1;
- (void)onClick;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (void)tryPlayVideoInFullScreen;
- (BOOL)isFullScreenPlaying;
- (void)onOrientationChanged;
- (void)onClickFullPlayView;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onClickDetailButton;
- (BOOL)shouldShowDetailButton;
- (id)getDetailButtonTitle;
- (void)onLongPressFullPlayView;
- (void)clearAttachVideoResource;
- (void)endViewVideo;
- (void)stopPlayAttachVideo;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClickFavVideoMenu;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onCancelShareVideoToFriend;
- (void)onShareVideoToTimeline:(BOOL)arg1;
- (void)onStartPlayer;
- (void)onPausePlayer;
- (void)willAnimateRotation:(BOOL)arg1;
- (void)playShortVideo;
- (void)stopPlayShortVideo;
- (void)clearShortVideo;
- (void)initFullPlayWindow;
- (BOOL)processClickToPlayAttachVideoInFullScreenMode;
- (void)playAttachVideoInFullScreen;
- (void)playInFullScreen;
- (void)playLongVideoAdInFullScreen;
- (void)stopAndCloseFullScreenWindow;
- (void)clickFullScreenWindow;
- (void)exitFullScreenPlay;
- (void)tryLogAdShortVideoStartPlayTime;
- (void)tryAddAdShortVideoPlayCount;
- (void)tryResetAdShortVideoEndPlayTime;
- (id)fetchVideoPlayInfo;
- (void)updateWCPlayTotalTime:(double)arg1;
- (void)mergeWCPlaybackInfo;
- (void)tryLogAdAttachVideoStartPlayTime;
- (void)tryAddAdAttachVideoPlayCount;
- (void)tryResetAdAttachVideoEndPlayTime;
- (void)tryRotateOrientation;
- (void)endViewStreamVideo;
- (void)sightViewOnClick;
- (void)sightViewDidBeClicked;
- (void)sightViewDidEndDisplaying;
- (void)sightViewWillDisappear;
- (void)sightViewDidEndDecelerating;
- (id)playerInfo;
- (void)customPlayerInfo:(id)arg1;
- (unsigned long long)fetchPlayModeIfVideoNotExist;
- (id)controlView;
- (void)setControlViewContainer:(id)arg1;
- (void)layoutControlView;
- (void)setupWCPlayerView;
- (void)startWCPlayer;
- (void)updateControlViewForPlaying;
- (BOOL)isWCPlayerPlaying;
- (BOOL)isWCPlayerSlientPlaying;
- (BOOL)isAdWCDownloadingAndEnableJump;
- (BOOL)isWCPlayerLocalAndNotPlaying;
- (void)pauseWCPlayer;
- (void)exitVideoPlay;
- (void)setTryingToPlay:(BOOL)arg1;
- (void)seekWCPlayerToTime:(double)arg1;
- (void)layoutPauseIcon;
- (void)showPauseIcon;
- (void)hidePauseIcon;
- (void)hideControlViewIcon;
- (void)asyncShowPauseIcon;
- (void)setContentHidden:(BOOL)arg1;
- (void)downLoadThumbIfNeeded;
- (void)updatePlayerSubviewsLayout;
- (void)onWCPlayerPlayEnd:(BOOL)arg1;
- (void)checkWCSightViewState;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onCanvasViewDidBePoped;
- (void)onCanvasViewDidBePushed;
- (void)onCanvasPageViewAnimationSetContentHidden:(BOOL)arg1;
- (void)attachStreamVideoPlayer;
- (id)getThumbImageView;
- (id)getCurrentSnapshot;
- (double)fetchCurrentPlaybackTime;
- (double)fetchTotalPlaybackTime;
- (id)m_dataItem;
- (void)setM_dataItem:(id)arg1;
- (id)m_mediaData;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_isImageReady;
- (BOOL)m_bTimelineScene;
- (void)setM_bTimelineScene:(BOOL)arg1;
- (id)m_adPlayInfo;
- (void)setM_adPlayInfo:(id)arg1;
- (void)setControlView:(id)arg1;
- (id)wcPlayerView;
- (void)setWcPlayerView:(id)arg1;
- (void)setPlayerInfo:(id)arg1;
- (BOOL)tryingToPlay;
- (id)controlViewContainer;
- (void).cxx_destruct;
@end

