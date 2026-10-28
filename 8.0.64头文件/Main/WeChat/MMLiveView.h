@interface MMLiveView : UIView <WCLiveVideoViewDelegate, MMWebImageViewDelegate, UIGestureRecognizerDelegate, MMFinderLiveWcPlayerViewModelDelegate, MMFinderLiveGestureAnimationContainerViewDelegate, MMFinderLiveScreenshotPosterLogicExt, MMFinderLiveKTVLogicExt, MMFinderLiveCDNViewerMicExt, MMLiveContainerDisplayViewProtocol, MMFinderLiveGestureAnimationPlaying, MMFinderLivePIPMinimizeDisplayViewProtocol>
{
    BOOL _isCdnPlayerRectRestricted; // +0x8
    BOOL _isMakeFaceRectVisibleMode; // +0x9
    BOOL _isLocalAudioMode; // +0xa
    BOOL _isAudioRoomMode; // +0xb
    BOOL _liveDidStart; // +0xc
    BOOL _isShowingTips; // +0xd
    BOOL _isShowingLoading; // +0xe
    BOOL _isShowingPauseView; // +0xf
    BOOL _shouldShowLiveRoomCoverImageView; // +0x10
    BOOL _lastEnableShowLiveRoomCoverImageView; // +0x11
    BOOL _shouldLayoutAvatar; // +0x12
    BOOL _isShowingScreenSharingView; // +0x13
    BOOL _isInSwitchVideoViewAnimation; // +0x14
    BOOL _isNextCdnPlayerViewFromTheLeftSide; // +0x15
    BOOL _isShowingTrialTimeoutView; // +0x16
    BOOL _isCdnViewerMicDataSrcCompletely; // +0x17
    BOOL _isInBackground; // +0x18
    BOOL _curPlayBehaviorFrameUseAdVideoSizeElseMainVideoFrame; // +0x19
    BOOL _isInNoPrivilegeLiveInterceptMode; // +0x1a
    BOOL _isStartBigVideoCustomRender; // +0x1b
    BOOL _isBigVideoHidden; // +0x1c
    BOOL _isStartCustomComposeRender; // +0x1d
    BOOL _isInVideoZoomDisplayMode; // +0x1e
    BOOL _isInMinimizeMode; // +0x1f
    id <MMLiveViewDelegate> _actionDelegate; // +0x20
    UIView * _blurBackgroundView; // +0x28
    WCLiveVideoView * _localVideoView; // +0x30
    WCLiveVideoView * _bigVideoView; // +0x38
    WCLiveVideoView * _smallLocalVideoView; // +0x40
    WCLiveVideoView * _smallRemoteVideoView; // +0x48
    WCLiveVideoView * _otherConnectMicUserVideoView; // +0x50
    MMWebImageView * _liveRoomCoverImageViewForAnchor; // +0x58
    MMFinderLiveViewAnchorCoverImageView * _gameliveRoomCoverImageViewForAnchor; // +0x60
    MMWebImageView * _liveRoomCoverImageViewForAudience; // +0x68
    UIView * _cdnPlayerView; // +0x70
    double _faceVisibleOffsetY; // +0x78
    UIView * _screenSharingContainerView; // +0x80
    UIView * _screenSharingContentView; // +0x88
    MMUIButton * _smallVideoSwitchCameraButton; // +0x90
    MMLiveTaskId * _taskId; // +0x98
    NSString * _smallRemoteVideoViewUserId; // +0xa0
    MMFinderLiveConnectMicUsersInfo * _allMicUsersInfo; // +0xa8
    NSMutableDictionary * _micUserViewInfoDic; // +0xb0
    WeAvatarScreenView * _avatarView; // +0xb8
    UIView * _videoBottomView; // +0xc0
    MMFinderLiveSubTitleView * _subTitleView; // +0xc8
    UIView * _customComposeRenderView; // +0xd0
    id /* block */ _minTopMarginQueryBlock; // +0xd8
    id /* block */ _onLayoutChanged; // +0xe0
    UIViewPropertyAnimator * _layoutChangeAnimator; // +0xe8
    MMFinderLiveAudioRoomInfoView * _minimizedAudioRoomInfoView; // +0xf0
    id /* block */ _onVideoBottomViewShownOrFrameChanged; // +0xf8
    UIView * _nextCdnPlayerView; // +0x100
    MMFinderLiveWcPlayerView * _advertisementPlayerView; // +0x108
    MMFinderLiveAdvertisementPlayerViewModel * _advertisementPlayerViewModel; // +0x110
    MMLiveAudioModeAnimatedBackgroundPlayerViewModel * _audioModeBackgroundVideoViewModel; // +0x118
    unsigned long long _liveMode; // +0x120
    UIView * _plainBackgroundView; // +0x128
    UIView * _liveStateContainerView; // +0x130
    UIView * _landScapeBackGroundView; // +0x138
    MMUILabel * _fullViewTipsLabel; // +0x140
    MMUIImageView * _fullViewLoadingView; // +0x148
    MMUILabel * _fullViewLoadingLabel; // +0x150
    MMLivePauseView * _pauseView; // +0x158
    UIPanGestureRecognizer * _bigVideoViewDraggableGestureRecognizer; // +0x160
    UIView * _screenSharingSnapshotView; // +0x168
    UIImageView * _connectMicPkAtmosphereBackgroundView; // +0x170
    UIView * _focusedConnectMicUserContainerView; // +0x178
    UIView * _connectMicUserContainerView; // +0x180
    NSString * _otherConnectMicUserVideoViewUserId; // +0x188
    double _micUnfocusedViewsBottom; // +0x190
    NSString * _backgroudImageUrl; // +0x198
    UIView * _liveRoomCoverImageViewContainer; // +0x1a0
    UILabel * _liveRoomCoverImageSpamLabelForAudience; // +0x1a8
    UIView * _coverImageShadingView; // +0x1b0
    id /* block */ _videoBottomViewLayoutAction; // +0x1b8
    NSString * _nextStreamId; // +0x1c0
    UIView * _nextCdnPlayerBlurCoverView; // +0x1c8
    MMWebImageView * _nextCdnPlayerCoverImageView; // +0x1d0
    UIView * _nextCdnPlayerBlurContainerView; // +0x1d8
    MMUIActivityIndicatorView * _nextCdnPlayerBlurCoverLoadingView; // +0x1e0
    MMUIActivityIndicatorView * _advertisementLoadingView; // +0x1e8
    NSString * _audioModeBackgroundVideoUri; // +0x1f0
    MMLiveResourceFetcherRootFlowAction * _downloadMgr; // +0x1f8
    MMFinderLiveWcPlayerView * _audioModeBackgroundVideoView; // +0x200
    MMFinderLiveGestureAnimationContainerView * _gestureAnimationContainerView; // +0x208
    MMLiveRemoteTrtcCustomRenderWrapper * _bigVideoCustomRenderWrapper; // +0x210
    WCFinderLiveStarterLiveModeSubItem * _selectSubItem; // +0x218
    MMFinderLiveModeItem * _selectedModeItem; // +0x220
    UIView * _minimizedAudioRoomContainerView; // +0x228
    double _lastPinchGestureScale; // +0x230
    double _currentVideoDisplayScale; // +0x238
    double _cdnPlayerViewScaleMaxValue; // +0x240
    double _cdnPlayerViewScaleMaxValueInGestureProgress; // +0x248
    double _cdnPlayerViewScaleMinValue; // +0x250
    double _cdnPlayerViewScaleMinValueInGestureProgress; // +0x258
    UIView * _videoContainerView; // +0x260
    UIView * _connectMicUserWidgetContainerView; // +0x268
    UIView * _cdnPlayerContainerView; // +0x270
    CGSize _cdnUserConnectedRoomVideoViewSize; // +0x278
    CGPoint _lastPinchGesturePoint; // +0x288
    CGPoint _lastPanGesturePoint; // +0x298
    CGPoint _currentVideoTranslationVector; // +0x2a8
    CGRect _cdnPlayerRestrictedRect; // +0x2b8
    CGRect _currentMainVideoViewFrame; // +0x2d8
    CGRect _nextVideoViewFrame; // +0x2f8
    CGRect _gameViewFrame; // +0x318
    CGRect _currentConnectMicViewFrame; // +0x338
}
- (void)enterVideoZoomDisplayMode;
- (void)exitVideoZoomDisplayModeAnimated:(BOOL)arg1;
- (void)resetZoomDisplayModeParameters;
- (void)resetCdnPlayerViewScaleMaxAndMinValues;
- (void)handlePinchGestureForZoom:(id)arg1;
- (void)handlePanGestureForZoom:(id)arg1;
- (BOOL)checkAndUpdateCdnPlayerViewTransformParametersAfterGestures;
- (BOOL)checkAndUpdateCdnPlayerViewTransformParametersAfterGesturesWithScaleMaxValue:(double)arg1 scaleMinValue:(double)arg2 canResetVector:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (void)dealloc;
- (void)initNotifications;
- (BOOL)isAudience;
- (void)setLiveDidStart:(BOOL)arg1;
- (CGRect)bigVideoViewFrame;
- (CGRect)smallLocalVideoViewFrame;
- (CGRect)smallRemoteVideoViewFrame;
- (void)layoutSubviews;
- (void)forceLayoutForOrientationChanged;
- (void)layoutUI;
- (void)setFrame:(CGRect)arg1;
- (void)layoutVideoContainerView;
- (void)layoutGestureAnimationContainerView;
- (void)updateGestureAnimationContainerViewVisibility;
- (void)layoutBigVideoView;
- (void)handleBigVideoViewDraggableGestureRecognizer:(id)arg1;
- (void)layoutSmallLocalVideoView;
- (void)layoutSmallRemoteVideoView;
- (void)layoutSmallRemoteVideoViewWithUserId:(id)arg1;
- (void)layoutSmallVideoSwitchCameraButton;
- (void)layoutBlurBackgroundView;
- (void)layoutAdvertisementPlayerView;
- (void)updateAdvertisementPlayerWithVideoUrl:(id)arg1 initialTime:(unsigned int)arg2;
- (void)updateBlurBackgroundViewHidden:(BOOL)arg1;
- (void)createLivePauseView;
- (BOOL)isNeedBlackBack;
- (void)layoutCDNView;
- (void)updateCdnPlayerViewFrame;
- (void)layoutSubTitleView;
- (void)updateSubTitleOrigin;
- (double)getSubTitleViewLeftMargin;
- (id)audioModeCoverImageUrlString;
- (void)updateAnchorLiveRoomCoverImage:(id)arg1;
- (void)updateAnchorLiveRoomCoverImageURLString:(id)arg1 isGameMode:(BOOL)arg2 scale:(double)arg3 gameCoverImage:(id)arg4;
- (void)updateLiveModeSelectSubItem:(id)arg1;
- (void)updateLiveSelectedModeItem:(id)arg1;
- (void)refreshWitchScale:(double)arg1 coverImageURLString:(id)arg2;
- (void)updateAnchorGameLiveRoomCoverImageURLString:(id)arg1 scale:(double)arg2 gameCoverImage:(id)arg3;
- (void)createGameLiveRoomCoverImageViewForAnchor;
- (void)updateAnchorLiveRoomCoverImageURLString:(id)arg1;
- (void)updateAudienceLiveRoomCoverImageURLString:(id)arg1 isCoverSpam:(BOOL)arg2;
- (void)clearAudienceLiveRoomCoverImage;
- (void)startAudioModeBackgroundPlayerWithPath:(id)arg1;
- (void)updateAnchorLiveRoomAudioModeBackgroundVideoPath:(id)arg1;
- (void)updateLiveRoomAudioModeBackgroundVideoUri:(id)arg1;
- (void)createLiveRoomCoverImageViewForAnchor;
- (void)createLiveRoomCoverImageViewContainer;
- (void)insertLiveRoomCoverImageViewContainer;
- (void)setShouldShowLiveRoomCoverImageView:(BOOL)arg1;
- (void)refreshAudioModeCoverImageView;
- (void)updateLiveRoomCoverImageWidgetsHidden;
- (BOOL)isVideoive;
- (void)updateLiveRoomCoverImageWidgetsFrame:(CGRect)arg1;
- (void)updateAnchorLiveRoomCoverImageViewCorner;
- (BOOL)isAnchorLiveStarterCornerScene;
- (void)updateCdnPlayerRenderEnableIfNeeded;
- (void)startBigVideoCustomRender:(id)arg1;
- (void)stopBigVideoCustomRender;
- (void)updateBigVideoUIForCustomRenderAttachChanged;
- (void)updateBigVideoHidden:(BOOL)arg1;
- (void)refreshBigVideoAppearence;
- (CGRect)normalizedCustomComposeRenderFrame;
- (void)startCustomComposeRenderWithRenderView:(id)arg1;
- (void)onCustomComposeRenderStarted:(id)arg1;
- (void)stopCustomComposeRender;
- (void)updateUIForCustomComposeRenderView;
- (BOOL)enableShowLiveRoomCoverImageView;
- (void)layoutAudioModeCoverImageView;
- (CGRect)getVideoViewFrameWithFlag:(BOOL)arg1;
- (CGRect)getVideoLandscapeViewFrameForAnchor;
- (CGRect)getVideoViewFrameForAnchor;
- (CGRect)getVideoViewFrameForAudienceWithFlag:(BOOL)arg1;
- (CGRect)getMainVideoViewFrame;
- (CGRect)getAdvertisementVideoViewFrame:(CGSize)arg1;
- (double)getVideoContainerTopMargin;
- (CGRect)getNormalizedMainVideoViewFrame;
- (double)getVideoContainerWHPercent;
- (CGRect)getNormalizedTrtcConnectMicViewFrame;
- (CGRect)getAbsoluteTrtcConnectMicViewFrame;
- (CGRect)getNormalizedVideoContainerViewFrame;
- (CGRect)getNormalizedVideoBottomViewFrame;
- (CGRect)normalizedFrameConvertedToDisplayAspectRatio:(CGRect)arg1;
- (CGRect)normalizedFrameConvertedFromDisplayAspectRatio:(CGRect)arg1;
- (id)getOtherAudienceVideoMicUserViewList;
- (id)getAudienceAudioMicUserViewList;
- (id)getAnchorAudioMicCoverImageViewList;
- (id)getAnchorAudioMicVideoBackgroundViewList;
- (id)getLiveAnchorBlurBackgroundView;
- (id)getLiveStateText;
- (id)getCdnPlayerContainerView;
- (id)getBigVideoView;
- (id)getOtherConnectMicUserVideoView;
- (id)getAdvertisementPlayerView;
- (id)getAudioModeBackgroundVideoView;
- (id)getAudienceSelfConnectMicViewInfo;
- (BOOL)isVideoViewHidden;
- (BOOL)showAdvertisementAndMuteLive:(id)arg1 initialPlayTime:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)showAdvertisementBlurView:(id)arg1;
- (void)hideAdvertisementBlurView;
- (void)updateCDNPlayerViewHidden:(BOOL)arg1;
- (CGRect)getNormalizedMinimizeSrcFrameForBusiness:(long long)arg1;
- (id)getExtendTransitionContainerBackView;
- (void)willMoveToMinimizeContainerView;
- (void)willMoveToPIPMinimizeContainerView;
- (id)mainVideoView;
- (id)minimizeSrcView;
- (CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
- (BOOL)shouldLayoutMainVideoView;
- (void)updateMainVideoViewFrame:(CGRect)arg1;
- (void)updateConnectMicViewFrame;
- (CGRect)createRemoteViewFrameWithDisplaySize:(CGSize)arg1 calculateDisplaySize:(CGSize)arg2 scene:(unsigned long long)arg3;
- (CGPoint)getAudienceRemoteVideoViewCenterForScene:(unsigned long long)arg1 withDisplaySize:(CGSize)arg2;
- (CGRect)createAnchorMainLocalViewFrameWithDisplaySize:(CGSize)arg1 calculateDisplaySize:(CGSize)arg2 scene:(unsigned long long)arg3;
- (CGPoint)getAnchorMainLocalVideoViewCenterForScene:(unsigned long long)arg1 withDisplaySize:(CGSize)arg2;
- (void)smallVideoSwitchCameraAction;
- (void)layoutConnectMicUsersView;
- (void)checkScreenSharingVideoViewCenterInConnectMicScene;
- (double)windowWidth;
- (void)layoutScreenSharingContainerView;
- (void)showScreenSharingViewWithContentView:(id)arg1;
- (void)hideScreenSharingView;
- (void)regenerateScreenSharingSnapshotViewIfNeeded;
- (void)clearScreenSharingSnapshotViewIfNeeded;
- (void)onLoadImageOK:(id)arg1;
- (CGRect)getNextVideoViewFrame;
- (CGRect)getNormalizedNextVideoViewFrame;
- (BOOL)updateNextCdnPlayerView:(id)arg1 onTheLeftSide:(BOOL)arg2 nextStreamId:(id)arg3;
- (void)updateNextCdnPlayerBlurCoverLoadingViewSize;
- (void)updateNextCdnPlayerBlurCoverViewFrame:(CGRect)arg1;
- (void)updateNextCdnPlayerViewPositionWithTranslationX:(double)arg1;
- (BOOL)switchCdnPlayerViewToNext:(BOOL)arg1;
- (void)updateNextCdnPlayerBlurCoverViewAppearance:(BOOL)arg1;
- (void)updateSubTitleViewHidden:(BOOL)arg1;
- (void)showAdvertisementVideoView:(BOOL)arg1;
- (void)updateAdVideoLoadingShow:(BOOL)arg1;
- (void)advertisementPlayFinish;
- (void)preloadAdvertisementPlayer;
- (void)hideAdvertisementVideoView:(BOOL)arg1;
- (void)updateCdnPlayerView:(id)arg1;
- (void)startLocalVideo;
- (void)refreshImageForBlurBackgroundView;
- (void)switchCamera;
- (void)showTrialTimeoutView;
- (void)hideTrialTimeoutView;
- (void)showFullViewTipsWithText:(id)arg1;
- (void)showFullScreenLoading:(BOOL)arg1 withLoadingText:(id)arg2;
- (void)showFullScreenLoading:(BOOL)arg1 withLoadingText:(id)arg2 hasDelayed:(BOOL)arg3;
- (void)showFullScreenLoadingWithoutDelay;
- (void)showPauseView:(id)arg1;
- (void)updateShowingPauseView:(BOOL)arg1;
- (void)adjustOrientationForPauseViewShowingChanged;
- (void)updatePauseViewForMiniGame;
- (void)hidePauseView;
- (void)updatePauseViewWithAccumulatedTime:(long long)arg1;
- (CGRect)getSmallVideoMixRectRatio;
- (void)updateLocalVideoViewForConnectMic:(BOOL)arg1;
- (BOOL)isShowingMinimizedAudioRoomInfoView;
- (void)createMinimizedAudioRoomInfoViewIfNeeded;
- (void)layoutMinimizedAudioRoomInfoView;
- (void)prepareForMinimizeMode;
- (void)prepareForMaximizeMode;
- (BOOL)isInConnectedMicUI;
- (CGSize)totalSizeForConnectMicViews;
- (CGSize)totalSizeForConnectMicViewsInOperationView;
- (void)clearConnectMicViewsAndDic;
- (void)clearConnectMicViewInfo:(id)arg1;
- (void)notifyConnectMicStateChangedIfNeeded;
- (void)refreshLiveMinimizeAudioMicWidgets;
- (void)updateConnectMicViewsWithMicUsersInfo:(id)arg1;
- (BOOL)shouldConfigureConnectMicViewsForUser:(id)arg1;
- (id)connectMicViewInfoForUser:(id)arg1;
- (void)configureUserViewForConnectMicViewInfo:(id)arg1 belowAnchorView:(BOOL)arg2;
- (void)configureUserViewBorderAndCornerRadiusForConnectMicViewInfo:(id)arg1;
- (void)configureGestureAnimationContainerViewForConnectMicViewInfo:(id)arg1 belowAnchorView:(BOOL)arg2;
- (void)configureCoverImageViewForConnectMicViewInfo:(id)arg1 belowAnchorView:(BOOL)arg2;
- (void)configureMicFocusCdnViewMasks;
- (void)layoutMaskLayerToCoverView:(id)arg1;
- (void)reorderMicUserViewsInPipWithOrderedMicUsers:(id)arg1 anchorZOrder:(unsigned long long)arg2;
- (void)bringMicUserComponentsToFrontInPipWithMicViewInfo:(id)arg1;
- (void)bringAnchorComponentsToFrontInPip;
- (void)updateConnectMicUserAudioModeBackgroundConfigurationForUserWithSdkUserId:(id)arg1;
- (double)getLeftMarginForConnectMicUserContent;
- (double)getTopMarginForConnectMicUserContent;
- (void)checkAndStartRemoteVideoViewWithUserInfo:(id)arg1;
- (void)onDataItemUpdated;
- (void)checkAndUpdateBackgroundBlurView:(BOOL)arg1;
- (void)updateBackgroundBlurView:(id)arg1;
- (void)showVideoBottomViewWithLayoutAction:(id /* block */)arg1;
- (void)dismissVideoBottomView;
- (BOOL)isShowVideoBottomView;
- (void)onOrientationChanged;
- (void)onOperationClearScreenChange:(BOOL)arg1;
- (void)updateGestureAnimationContainerViewAppearance;
- (void)enterNoPrivilegeLiveInterceptMode;
- (BOOL)isNeedClipTo9x16VideoView;
- (BOOL)isShowingVideoView;
- (void)updateLiveVideoViewAppearance:(BOOL)arg1 blurColor:(id)arg2;
- (void)updateLiveVideoViewAppearance:(BOOL)arg1;
- (id)createBackgroundBlurViewWithLiveTaskId:(id)arg1;
- (void)createPlainBackgroundView;
- (double)videoViewTopMarginInConnectedRoomUI;
- (double)videoViewTopMarginInConnectedMicSceneWithFlag:(BOOL)arg1;
- (id)finderLiveTask;
- (id)finderLiveTaskId;
- (id)createAdvertisementPlayerViewModel:(id)arg1 initialPlayTime:(unsigned int)arg2;
- (id)createAdvertisementPlayerViewModel:(id)arg1;
- (BOOL)checkUpdateBackgroundBlurView:(id)arg1;
- (CGRect)normalizedConnectMicUsersViewFrame;
- (id)getLiveViewController;
- (CGRect)currentMainContentFrame;
- (BOOL)isVideoSceneMode;
- (void)setIsLocalAudioMode:(BOOL)arg1;
- (void)updateIsAudioRoomMode:(BOOL)arg1 audioRoomScene:(unsigned long long)arg2;
- (void)handleLiveTaskEnteredRoom;
- (void)handleMicUsersInfoUpdated:(id)arg1;
- (void)startLayoutChangeAnimator;
- (void)makeFaceRectVisibleAboveSheetView:(id)arg1;
- (void)setIsMakeFaceRectVisibleMode:(BOOL)arg1 offsetY:(double)arg2;
- (CGRect)relativeCdnPlayerRestrictedRect;
- (void)onWCLiveVideoViewMoveEnd;
- (void)startLoadingAnimation;
- (void)hideFullScreenLoading;
- (void)stopLoadingAnimation;
- (unsigned long long)currentMainVideoDisplayType;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)insertLiveRoomCoverImageViewForAudienceToPIPRenderLayer;
- (BOOL)insertLiveRoomCoverImageViewForAnchorToPIPRenderLayer;
- (BOOL)insertGameLiveRoomCoverImageViewForAnchorToPIPRenderLayer;
- (BOOL)insertLiveConnectMicViewToPIPRenderLayer:(id)arg1;
- (BOOL)insertLiveAnchorAudioMicCoverImageToPIPRenderLayer:(id)arg1;
- (BOOL)insertLiveAnchorAudioMicBackgroundVideoToPipRenderLayer:(id)arg1;
- (BOOL)insertLiveBlurBackgroundViewToPIPRenderLayer;
- (BOOL)insertBigVideoViewToPIPRenderLayer;
- (BOOL)insertConnectMicVideoViewToPIPRenderLayer:(id)arg1;
- (BOOL)insertCDNPlayerContainerViewToPIPRenderLayer;
- (BOOL)insertAdvertisementPlayerViewToPIPRenderLayer;
- (BOOL)insertAudioModeBackgroundVideoViewToPIPRenderLayer;
- (BOOL)insertPkAtmosphereBackgroundViewToPIPRenderLayer;
- (id)advertisementPlayerView;
- (id)advertisementLoadingView;
- (id)getOpposingAnchorAudioModeBackgroundVideoViewModelList;
- (void)onLiveWcPlayerStatusChanged:(id)arg1 status:(unsigned long long)arg2;
- (void)onLiveWcPlayerShowBufferingView:(id)arg1;
- (void)onLiveWcPlayerHiddenBufferingView:(id)arg1;
- (void)onLiveWcPlayerVideoSizeChange:(id)arg1 videoSize:(CGSize)arg2;
- (void)onLiveWcPlayerVideoPlayFailed:(id)arg1 errorType:(unsigned long long)arg2 error:(int)arg3 localizedErrorDes:(id)arg4;
- (void)onExitLive;
- (void)onGestureAnimationViewWillBeginPlaying:(id)arg1;
- (void)onGestureAnimationViewDidEndPlaying:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onLiveTask:(id)arg1 didChangeViewCapturing:(BOOL)arg2;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(BOOL)arg3;
- (void)onFinderLiveCDNViewerMicDataSrcUpdateCompletely:(id)arg1;
- (void)onLiveKTVModeChanged:(BOOL)arg1 taskId:(id)arg2;
- (void)onScreenshotAssociatedImageRequestedForScreenshotPosterLogic:(id)arg1 asyncBeginBlock:(id /* block */)arg2 asyncEndBlock:(id /* block */)arg3;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (BOOL)addGestureAnimationPagForUserWithId:(id)arg1 withGestureId:(id)arg2 instanceId:(id)arg3 referenceAspectRatio:(double)arg4 translationX:(double)arg5 translationY:(double)arg6 rotation:(double)arg7 scale:(double)arg8 giftSenderNickname:(id)arg9;
- (void)updatePkAtmosphereBackgroundIfNeeded:(BOOL)arg1;
- (void)updatePkAtmosphereBackgroundHidden:(BOOL)arg1;
- (void)updateGameViewFrame;
- (CGRect)getGameViewFrame;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)blurBackgroundView;
- (void)setBlurBackgroundView:(id)arg1;
- (id)localVideoView;
- (void)setLocalVideoView:(id)arg1;
- (id)bigVideoView;
- (void)setBigVideoView:(id)arg1;
- (id)smallLocalVideoView;
- (void)setSmallLocalVideoView:(id)arg1;
- (id)smallRemoteVideoView;
- (void)setSmallRemoteVideoView:(id)arg1;
- (id)otherConnectMicUserVideoView;
- (void)setOtherConnectMicUserVideoView:(id)arg1;
- (id)liveRoomCoverImageViewForAnchor;
- (void)setLiveRoomCoverImageViewForAnchor:(id)arg1;
- (id)gameliveRoomCoverImageViewForAnchor;
- (void)setGameliveRoomCoverImageViewForAnchor:(id)arg1;
- (id)liveRoomCoverImageViewForAudience;
- (void)setLiveRoomCoverImageViewForAudience:(id)arg1;
- (id)cdnPlayerView;
- (void)setCdnPlayerView:(id)arg1;
- (BOOL)isCdnPlayerRectRestricted;
- (void)setIsCdnPlayerRectRestricted:(BOOL)arg1;
- (CGRect)cdnPlayerRestrictedRect;
- (void)setCdnPlayerRestrictedRect:(CGRect)arg1;
- (BOOL)isMakeFaceRectVisibleMode;
- (void)setIsMakeFaceRectVisibleMode:(BOOL)arg1;
- (double)faceVisibleOffsetY;
- (void)setFaceVisibleOffsetY:(double)arg1;
- (BOOL)isLocalAudioMode;
- (BOOL)isAudioRoomMode;
- (void)setIsAudioRoomMode:(BOOL)arg1;
- (id)screenSharingContainerView;
- (void)setScreenSharingContainerView:(id)arg1;
- (id)screenSharingContentView;
- (void)setScreenSharingContentView:(id)arg1;
- (id)smallVideoSwitchCameraButton;
- (void)setSmallVideoSwitchCameraButton:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)smallRemoteVideoViewUserId;
- (void)setSmallRemoteVideoViewUserId:(id)arg1;
- (BOOL)liveDidStart;
- (BOOL)isShowingTips;
- (void)setIsShowingTips:(BOOL)arg1;
- (BOOL)isShowingLoading;
- (void)setIsShowingLoading:(BOOL)arg1;
- (BOOL)isShowingPauseView;
- (void)setIsShowingPauseView:(BOOL)arg1;
- (id)allMicUsersInfo;
- (void)setAllMicUsersInfo:(id)arg1;
- (CGRect)currentMainVideoViewFrame;
- (void)setCurrentMainVideoViewFrame:(CGRect)arg1;
- (CGRect)nextVideoViewFrame;
- (void)setNextVideoViewFrame:(CGRect)arg1;
- (BOOL)shouldShowLiveRoomCoverImageView;
- (BOOL)lastEnableShowLiveRoomCoverImageView;
- (void)setLastEnableShowLiveRoomCoverImageView:(BOOL)arg1;
- (id)micUserViewInfoDic;
- (void)setMicUserViewInfoDic:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (BOOL)shouldLayoutAvatar;
- (void)setShouldLayoutAvatar:(BOOL)arg1;
- (id)videoBottomView;
- (void)setVideoBottomView:(id)arg1;
- (CGRect)gameViewFrame;
- (void)setGameViewFrame:(CGRect)arg1;
- (id)subTitleView;
- (void)setSubTitleView:(id)arg1;
- (id)customComposeRenderView;
- (void)setCustomComposeRenderView:(id)arg1;
- (id /* block */)minTopMarginQueryBlock;
- (void)setMinTopMarginQueryBlock:(id /* block */)arg1;
- (id /* block */)onLayoutChanged;
- (void)setOnLayoutChanged:(id /* block */)arg1;
- (id)layoutChangeAnimator;
- (void)setLayoutChangeAnimator:(id)arg1;
- (id)minimizedAudioRoomInfoView;
- (void)setMinimizedAudioRoomInfoView:(id)arg1;
- (id /* block */)onVideoBottomViewShownOrFrameChanged;
- (void)setOnVideoBottomViewShownOrFrameChanged:(id /* block */)arg1;
- (BOOL)isShowingScreenSharingView;
- (void)setIsShowingScreenSharingView:(BOOL)arg1;
- (BOOL)isInSwitchVideoViewAnimation;
- (void)setIsInSwitchVideoViewAnimation:(BOOL)arg1;
- (id)nextCdnPlayerView;
- (void)setNextCdnPlayerView:(id)arg1;
- (BOOL)isNextCdnPlayerViewFromTheLeftSide;
- (void)setIsNextCdnPlayerViewFromTheLeftSide:(BOOL)arg1;
- (void)setAdvertisementPlayerView:(id)arg1;
- (id)advertisementPlayerViewModel;
- (void)setAdvertisementPlayerViewModel:(id)arg1;
- (id)audioModeBackgroundVideoViewModel;
- (void)setAudioModeBackgroundVideoViewModel:(id)arg1;
- (unsigned long long)liveMode;
- (void)setLiveMode:(unsigned long long)arg1;
- (id)plainBackgroundView;
- (void)setPlainBackgroundView:(id)arg1;
- (id)liveStateContainerView;
- (void)setLiveStateContainerView:(id)arg1;
- (id)landScapeBackGroundView;
- (void)setLandScapeBackGroundView:(id)arg1;
- (id)fullViewTipsLabel;
- (void)setFullViewTipsLabel:(id)arg1;
- (id)fullViewLoadingView;
- (void)setFullViewLoadingView:(id)arg1;
- (id)fullViewLoadingLabel;
- (void)setFullViewLoadingLabel:(id)arg1;
- (id)pauseView;
- (void)setPauseView:(id)arg1;
- (BOOL)isShowingTrialTimeoutView;
- (void)setIsShowingTrialTimeoutView:(BOOL)arg1;
- (id)bigVideoViewDraggableGestureRecognizer;
- (void)setBigVideoViewDraggableGestureRecognizer:(id)arg1;
- (id)screenSharingSnapshotView;
- (void)setScreenSharingSnapshotView:(id)arg1;
- (id)connectMicPkAtmosphereBackgroundView;
- (void)setConnectMicPkAtmosphereBackgroundView:(id)arg1;
- (id)focusedConnectMicUserContainerView;
- (void)setFocusedConnectMicUserContainerView:(id)arg1;
- (id)connectMicUserContainerView;
- (void)setConnectMicUserContainerView:(id)arg1;
- (CGSize)cdnUserConnectedRoomVideoViewSize;
- (void)setCdnUserConnectedRoomVideoViewSize:(CGSize)arg1;
- (id)otherConnectMicUserVideoViewUserId;
- (void)setOtherConnectMicUserVideoViewUserId:(id)arg1;
- (CGRect)currentConnectMicViewFrame;
- (void)setCurrentConnectMicViewFrame:(CGRect)arg1;
- (BOOL)isCdnViewerMicDataSrcCompletely;
- (void)setIsCdnViewerMicDataSrcCompletely:(BOOL)arg1;
- (double)micUnfocusedViewsBottom;
- (void)setMicUnfocusedViewsBottom:(double)arg1;
- (id)backgroudImageUrl;
- (void)setBackgroudImageUrl:(id)arg1;
- (id)liveRoomCoverImageViewContainer;
- (void)setLiveRoomCoverImageViewContainer:(id)arg1;
- (id)liveRoomCoverImageSpamLabelForAudience;
- (void)setLiveRoomCoverImageSpamLabelForAudience:(id)arg1;
- (id)coverImageShadingView;
- (void)setCoverImageShadingView:(id)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (id /* block */)videoBottomViewLayoutAction;
- (void)setVideoBottomViewLayoutAction:(id /* block */)arg1;
- (id)nextStreamId;
- (void)setNextStreamId:(id)arg1;
- (id)nextCdnPlayerBlurCoverView;
- (void)setNextCdnPlayerBlurCoverView:(id)arg1;
- (id)nextCdnPlayerCoverImageView;
- (void)setNextCdnPlayerCoverImageView:(id)arg1;
- (id)nextCdnPlayerBlurContainerView;
- (void)setNextCdnPlayerBlurContainerView:(id)arg1;
- (id)nextCdnPlayerBlurCoverLoadingView;
- (void)setNextCdnPlayerBlurCoverLoadingView:(id)arg1;
- (void)setAdvertisementLoadingView:(id)arg1;
- (id)audioModeBackgroundVideoUri;
- (void)setAudioModeBackgroundVideoUri:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (id)audioModeBackgroundVideoView;
- (void)setAudioModeBackgroundVideoView:(id)arg1;
- (BOOL)curPlayBehaviorFrameUseAdVideoSizeElseMainVideoFrame;
- (void)setCurPlayBehaviorFrameUseAdVideoSizeElseMainVideoFrame:(BOOL)arg1;
- (id)gestureAnimationContainerView;
- (void)setGestureAnimationContainerView:(id)arg1;
- (BOOL)isInNoPrivilegeLiveInterceptMode;
- (void)setIsInNoPrivilegeLiveInterceptMode:(BOOL)arg1;
- (id)bigVideoCustomRenderWrapper;
- (void)setBigVideoCustomRenderWrapper:(id)arg1;
- (BOOL)isStartBigVideoCustomRender;
- (void)setIsStartBigVideoCustomRender:(BOOL)arg1;
- (BOOL)isBigVideoHidden;
- (void)setIsBigVideoHidden:(BOOL)arg1;
- (BOOL)isStartCustomComposeRender;
- (void)setIsStartCustomComposeRender:(BOOL)arg1;
- (id)selectSubItem;
- (void)setSelectSubItem:(id)arg1;
- (id)selectedModeItem;
- (void)setSelectedModeItem:(id)arg1;
- (id)minimizedAudioRoomContainerView;
- (void)setMinimizedAudioRoomContainerView:(id)arg1;
- (BOOL)isInVideoZoomDisplayMode;
- (void)setIsInVideoZoomDisplayMode:(BOOL)arg1;
- (CGPoint)lastPinchGesturePoint;
- (void)setLastPinchGesturePoint:(CGPoint)arg1;
- (double)lastPinchGestureScale;
- (void)setLastPinchGestureScale:(double)arg1;
- (CGPoint)lastPanGesturePoint;
- (void)setLastPanGesturePoint:(CGPoint)arg1;
- (double)currentVideoDisplayScale;
- (void)setCurrentVideoDisplayScale:(double)arg1;
- (CGPoint)currentVideoTranslationVector;
- (void)setCurrentVideoTranslationVector:(CGPoint)arg1;
- (double)cdnPlayerViewScaleMaxValue;
- (void)setCdnPlayerViewScaleMaxValue:(double)arg1;
- (double)cdnPlayerViewScaleMaxValueInGestureProgress;
- (void)setCdnPlayerViewScaleMaxValueInGestureProgress:(double)arg1;
- (double)cdnPlayerViewScaleMinValue;
- (void)setCdnPlayerViewScaleMinValue:(double)arg1;
- (double)cdnPlayerViewScaleMinValueInGestureProgress;
- (void)setCdnPlayerViewScaleMinValueInGestureProgress:(double)arg1;
- (BOOL)isInMinimizeMode;
- (void)setIsInMinimizeMode:(BOOL)arg1;
- (id)videoContainerView;
- (void)setVideoContainerView:(id)arg1;
- (id)connectMicUserWidgetContainerView;
- (void)setConnectMicUserWidgetContainerView:(id)arg1;
- (id)cdnPlayerContainerView;
- (void)setCdnPlayerContainerView:(id)arg1;
- (void).cxx_destruct;
@end
