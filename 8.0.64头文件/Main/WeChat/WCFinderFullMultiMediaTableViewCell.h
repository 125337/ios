@interface WCFinderFullMultiMediaTableViewCell : WCFinderTableViewCell <WCFinderHalfScreenProtocol, WCFinderFeedContentMediaActionProtocol, WCFinderFeedContentVMExt, WCFinderFeedContentTextClickActionDelegate, WCFinderMelodyViewDelegate, ILinkEventExt, WCFinderFriendLikeToolbarViewDelegate, WCFinderFullInteractivePanelViewDelegate, WCFinderProgressPanelViewDelegate, WCFinderContactExt, WCFinderCommonBottomViewDelegate, WCFinderBriefIntroCradViewDelegate, MonoServiceMgrExt, WCSessionFlowMonitorExt, WCFinderBulletGroupViewDelegate, MMMenuControllerExt, WCFinderHalfScreenListenProtocol, WCFinderPremovieAdHelperDelegate, WCFinderFeedbackViewDelegate, PAGViewListener, WCFinderMemberShipPaymentGuideViewDelegate, WCFinderMembershipFollowInfoExt, MMFinderLiveAirPlayExtension, WCFinderProgressBarExtendDelegate, WCFinderPortraitProgressPanelViewDelegate, WCFinderFeedHighlightsPanelDelegate, SnapshotPrinterViewProtocol, _TtP6WeChat17WCFinderVolumeExt_, WCFinderFocusCellProtocol, WCGeneralMonitorCellProtocol>
{
    BOOL _isForceDisableLikeAction; // +0x8
    BOOL _isEnableMediaHeaderShowFollowTips; // +0x9
    BOOL _hasReportExpose; // +0xa
    BOOL _disappearForHalfScreen; // +0xb
    BOOL _likeAnimationDynamicPagPlaying; // +0xc
    BOOL _hideProgressBarIfRotateToLandscape; // +0xd
    BOOL _needResumeVideo; // +0xe
    BOOL _didDragProgressBar; // +0xf
    BOOL _bHadCheckNPSSurvey; // +0x10
    BOOL _bHasShownNPSSurvey; // +0x11
    BOOL _bNeedShowNPSSurvey; // +0x12
    BOOL _isShowingTing; // +0x13
    int _scene; // +0x14
    id <WCFinderFullMultiMediaTableViewCellDelegate> _delegate; // +0x18
    id <WCFinderNpsSurveyContextInfoDelegate> _npsDelegate; // +0x20
    WCFinderFeedContentVM * _contentVM; // +0x28
    unsigned long long _landScapeEnterType; // +0x30
    WCFinderCommonBottomBannerView * _commonBottomBannerView; // +0x38
    WCFinderFullNewMultiMediaView * _mediaView; // +0x40
    WCFinderMemberShipPaymentGuideView * _memberPaymentGuideView; // +0x48
    WCFinderTLRedCoverBubbleView * _redCoverBubbleView; // +0x50
    WCFinderFullInteractivePanelView * _interactivePanelView; // +0x58
    WCFinderInteractivePanelConfigParamsModel * _interactivePanelConfigModel; // +0x60
    UIView * _premovieAdView; // +0x68
    UILabel * _premovieAdTipsLabel; // +0x70
    WCFinderFeedbackView * _premovieAdFeedbackView; // +0x78
    CAGradientLayer * _topGradientLayer; // +0x80
    CAGradientLayer * _bottomGradientLayer; // +0x88
    UITapGestureRecognizer * _tapGes; // +0x90
    UIPanGestureRecognizer * _panGes; // +0x98
    WCFinderShortTapGestureRecognizer * _likeGes; // +0xa0
    UILongPressGestureRecognizer * _longPressGes; // +0xa8
    id /* block */ _longPressHandler; // +0xb0
    double _offsetY; // +0xb8
    WCFinderAnimationLoadingView * _loadingView; // +0xc0
    double _videoDuration; // +0xc8
    double _maxPlayVideoTime; // +0xd0
    UILabel * _longVideoEntry; // +0xd8
    NSHashTable * _needRemoveViewSet; // +0xe0
    WCFinderProgressControlPanelConfigParamsModel * _progressControlConfigModel; // +0xe8
    WCFinderTableViewParamModel * _tableViewParamModel; // +0xf0
    WCFinderLandscapeProgressPanelView * _landscapeProgressPanelView; // +0xf8
    WCFinderPortraitProgressPanelView * _portraitProgressPanelView; // +0x100
    WCFinderLongPressRatePlayStateModel * _portraitLongPressRatePlayStateModel; // +0x108
    WCFinderTipBarView * _guideFinderEntranceBarView; // +0x110
    WCFinderProgressGuideView * _progressGuideView; // +0x118
    UIView * _bottomAreaTipsView; // +0x120
    WCFinderMoreRelatedContentView * _bottomAreaTipsButton; // +0x128
    MMUIButton * _moreActionButton; // +0x130
    NSString * _pagDynmicWording; // +0x138
    WCFinderPremovieAdClientHelper * _premovieAdHelper; // +0x140
    NSMutableArray * _picExposeSequence; // +0x148
    NSMutableArray * _picAutoSequence; // +0x150
    NSMutableArray * _picManualSequence; // +0x158
    WCFinderAdReportInfo * _adReportInfo; // +0x160
    UIView * _cellBottomGradientView; // +0x168
    double _beginTouchProgressBarValue; // +0x170
    unsigned long long _panLockState; // +0x178
    unsigned long long _videoReplayCount; // +0x180
    unsigned long long _photoBgmReplayCount; // +0x188
    unsigned long long _feedStayStartTime; // +0x190
    WCFinderFeedSubtitleView * _feedSubtitleView; // +0x198
    WCFinderBulletGroupView * _bulletAnimationView; // +0x1a0
    MMUIButton * _dislikeButton; // +0x1a8
    unsigned long long _feedViewerScene; // +0x1b0
    WCFinderHalfMoveModel * _moveModel; // +0x1b8
    WCFinderPlaybackSpeedView * _playbackSpeedView; // +0x1c0
    unsigned long long _portraitPressSpeedStartTime; // +0x1c8
    WCFinderNativeDramaFeedUnlockView * _nativeDramaUnlockView; // +0x1d0
    UILabel * _nativeDramaFilingNumberLabel; // +0x1d8
    UIView * _interestBottomView; // +0x1e0
    WCFinderCustomPanelSheet * _halfASGuidePanelSheet; // +0x1e8
    long long _latestExposeTimeStamp; // +0x1f0
    NPSFlutterVC * _curNPSFlutterVC; // +0x1f8
    FinderNpsSurveyTaskConf * _curTaskConf; // +0x200
    FinderNpsSurveyQuestion * _curSurveyQuestion; // +0x208
    long long _curTriggerEvent; // +0x210
    unsigned long long _videoPinchState; // +0x218
    WCFinderTingEntryFlutterVC * _curTingEntryFlutterVC; // +0x220
    NSString * _tingEntryTid; // +0x228
    NSString * _realShownTeenagerRestTid; // +0x230
    UIView * _halfScreenFlutterContainerView; // +0x238
    WCFinderLandscapeBackButton * _landScapeBackButton; // +0x240
    UIImageView * _landScapeBackButtonBackgroundView; // +0x248
    WCFinderMagicAnimationLogic * _magicAnimationLogic; // +0x250
    NSMutableArray * _OCRAreaTipsViews; // +0x258
    WCFinderFeedHighlightsPanel * _currentHighlightsPanel; // +0x260
    WCFinderFullSwipEduView * _swipEduView; // +0x268
    CGPoint _hitPoint; // +0x270
    CGPoint _beginTouchPos; // +0x280
    CGRect _oriPlayerViewFrame; // +0x290
    CGRect _curPlayerViewFrame; // +0x2b0
}
+ (CGRect)ocrFrameWithPlayerFrame:(CGRect)arg1 mediaSize:(CGSize)arg2 ocrTextBox:(id)arg3;
+ (double)getInteractiveBottomLineIsSubScene:(BOOL)arg1;
+ (double)getInteractiveBottomLineIsSubScene:(BOOL)arg1 tableViewFrame:(CGRect)arg2;
+ (double)cellHeightWithIsSubScene:(BOOL)arg1;
- (void)_resetHalfScreenState;
- (void)checkFeedHalfInvalidState;
- (void)prepareReuseHalfScreenMoveDataInfo;
- (void)listenNavigationBarAlpha:(BOOL)arg1;
- (void)changeCurNavigationControllerBarAlpha:(double)arg1;
- (double)currentNavigationbarAlpha;
- (BOOL)notResponseToHalfScreenInteracton;
- (void)listenHalfScreenMoveProgress:(double)arg1 heightRatio:(double)arg2;
- (void)listenHalfScreenFrameChanged:(CGRect)arg1;
- (void)listenHalfScreenIsShow:(BOOL)arg1 eventType:(unsigned long long)arg2;
- (void)safeCheckHalfScreenProgressCheckNow:(id)arg1;
- (unsigned long long)listenHalfScreenOption;
- (id)getRegisterKey;
- (id)getCurMediaWidHeightRatioValue;
- (void)triggerHalfStateCheck;
- (id)containingTableView;
- (void)cellStartExposeReportAction;
- (id)_genPicSequenceArray;
- (void)checkFakeSucDataItem;
- (void)reportFinderTextMoreTopicAction;
- (void)cellEndExposeReportAction;
- (void)reportOriginContactEntranceWithEventType:(long long)arg1 originalContact:(id)arg2;
- (void)reportRecommendPOI:(long long)arg1;
- (void)reportPOIWithEventType:(long long)arg1;
- (void)reportEventWithEventType:(long long)arg1;
- (void)reportAvatarWithEventType:(long long)arg1;
- (void)reportReferSomeone:(id)arg1 withEventType:(long long)arg2;
- (void)reportUniversalJumperWithJumperInfoView:(id)arg1 entranceType:(int)arg2 eventType:(unsigned long long)arg3;
- (void)reportJumpCarouselWithJumpInfoView:(id)arg1 eventType:(unsigned long long)arg2;
- (id)jumpInfoStyleToDict:(id)arg1;
- (void)reportAdEntryWithReportType:(long long)arg1;
- (void)reportAdEntryWithJumperInfoView:(id)arg1 reportType:(long long)arg2;
- (void)reportAdEntryWithJumperInfoView:(id)arg1 reportType:(long long)arg2 extraInfo:(id)arg3;
- (id)adEntryViewOnShowPosition:(int)arg1;
- (void)reportAdGuideWithReportType:(unsigned long long)arg1;
- (id)getFeedPlayInfo;
- (void)reportTopicInfo:(id)arg1 withReportType:(unsigned long long)arg2;
- (void)reportExposePauseLikeProgressWithHiddenPauseButton:(BOOL)arg1;
- (void)reportLiveFeedExtStatsWithActionType:(unsigned long long)arg1;
- (void)reportTapEnterLiveCarouselWithActionType:(unsigned long long)arg1;
- (void)reportHotSpotLiveNoticeExposeWithPanelView:(id)arg1;
- (void)reportHotSpotLiveNoticeExposeWithJumpInfoView:(id)arg1;
- (void)reportHotspotLiveNoticeExposeWithNoticeInfo:(id)arg1 bypReportChnlExtra:(id)arg2;
- (void)reportNextLiveNoticeExposeWithPanelView:(id)arg1;
- (void)reportHotSpotLivingIconExposed;
- (void)reportHotSpotLivingIconClicked;
- (void)reportAvatarLivingExposeIfNeeded:(id)arg1;
- (void)reportAvatarLivingClick:(id)arg1;
- (void)markRedDotNotifyBubbleAction:(long long)arg1;
- (void)reportLiveToolbarExpose;
- (void)reportLiveToolbarShareWithActionType:(unsigned long long)arg1;
- (void)reportLiveToolbarLikeWithActionType:(unsigned long long)arg1;
- (id)genLongPressTempSpeedPlayReportDictWithPlayRate:(double)arg1 duration:(double)arg2 isSelectedLockBtn:(BOOL)arg3;
- (void)reportLongPressChangePlayRate:(double)arg1 duration:(double)arg2 isSelectedLockBtn:(BOOL)arg3;
- (void)reportPortraitPressStateWithPressTime:(unsigned long long)arg1 startPressPoint:(CGPoint)arg2 pressView:(id)arg3;
- (void)reportClickToPauseOrResumeVideoWithStartPressPoint:(CGPoint)arg1 pressView:(id)arg2 isPause:(BOOL)arg3;
- (void)reportAutoCleanScreenEventWithTranslucentState:(BOOL)arg1;
- (void)reportLiveFullScreenLikeEducationExpose;
- (id)genLandScapeBtnReportDict;
- (id)genAutoCleanScreenReportDictWithTranslucentState:(BOOL)arg1;
- (BOOL)checkIsOCRTextConflictWithViews;
- (id)getOcrAreasInCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (id)cellBottomGradientView;
- (id)dislikeButton;
- (void)setFeedSubtitleView:(id)arg1;
- (void)openFeedSubtitleSetting;
- (id)landScapeBackButton;
- (id)landScapeBackButtonBackgroundView;
- (id)moreActionButton;
- (id)guideFinderEntranceBarView;
- (id)progressGuideView;
- (id)bottomAreaTipsView;
- (id)bulletAnimationView;
- (id)needRemoveViewSet;
- (void)resetBulletConfig;
- (void)updateBulletAnimationViewWithText:(id)arg1 replyItem:(id)arg2;
- (void)updateBulletAnimationViewWithText:(id)arg1 commentSource:(int)arg2 sucessBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)updateBulletAnimationViewWithText:(id)arg1 commentSource:(int)arg2 replyCommentId:(unsigned long long)arg3 sucessBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (BOOL)needForceHideBulletAnimationView;
- (void)updateBulletAnimationViewHidden:(BOOL)arg1;
- (void)updateBulletAnimationViewHiddenStatus;
- (void)changeBulletSwitch:(BOOL)arg1;
- (void)fetchBulletCommentWithTimestamp:(double)arg1;
- (void)showBulletMenuItems:(id)arg1 targetRect:(CGRect)arg2;
- (void)setupMenuController:(id)arg1 menuItems:(id)arg2 targetRect:(CGRect)arg3;
- (void)onMoreBulletComment:(id)arg1;
- (void)onDeleteBulletComment:(id)arg1;
- (void)onReportBulletComment:(id)arg1;
- (void)_onLikeBulletComment;
- (void)_onReplyBulletComment:(id)arg1;
- (void)onUnBlockBulletComment:(id)arg1;
- (void)onBlockBulletComment:(id)arg1;
- (void)resumeVideoIfNeeded;
- (void)hideInteractivePanelView;
- (id)getBottomTipBarView;
- (id)getRecommendFriendLikeAvatarContainerWithLikeInfoArray:(id)arg1;
- (id)getHeadImageViewWithUrl:(id)arg1;
- (id)longVideoEntry;
- (void)onClicklongVideoEntryAction;
- (void)showLongEntryBubbleIfPossible;
- (id)interactivePanelView;
- (BOOL)progressIsHidden;
- (unsigned long long)getStartImmersiveProgressBarDragStyle;
- (void)checkInteractivePanelViewProgressExtend;
- (void)configProgressPanelViewVisible;
- (id)progressControlPanelView;
- (id)landscapeProgressPanelView;
- (id)portraitProgressPanelView;
- (id)interactivePanelConfigModel;
- (id)progressControlConfigModel;
- (void)dealloc;
- (BOOL)showLiveState;
- (void)_updateMediaViewAccessibilityLabel;
- (void)updateSubviewsStyle;
- (void)updateMediaWith:(id)arg1 scene:(int)arg2 createTime:(id)arg3 topic:(id)arg4 eventInfo:(id)arg5 feedViewerScene:(unsigned long long)arg6 params:(id)arg7;
- (void)tryUpdateOcrTipsViews;
- (BOOL)updateMemberPaymentGuideViewHidden;
- (BOOL)_isNativeDramaLocked;
- (void)_updateNativeDramaGuideView;
- (void)_updateNativeDramaFilingNumberLabel;
- (void)_hiddenFilingNumberIfNeed;
- (void)updateInteractivePanelViewHidden:(BOOL)arg1;
- (void)updateLongVideoEntry;
- (void)updateLongVideoEntryAnimated:(BOOL)arg1;
- (void)updateLongVideoEntryColor;
- (void)updateLongVideoEntryHiddenStatus;
- (void)setLongVideoEntryHidden:(BOOL)arg1;
- (void)updateLongVideoEntryLayout;
- (void)updateLongVideoEntryVideoDuration:(double)arg1 currentPlayPosition:(double)arg2;
- (void)updatePanelViewShowState:(long long)arg1;
- (void)_updateLandScapeBackButtonWithShowState:(long long)arg1;
- (BOOL)_canShowOuterLandScapeBtn;
- (void)manualTriggerPauseVideoAction;
- (void)_manualTriggerPauseVideoAction:(BOOL)arg1;
- (void)_handleBriefCardViewCountdownStateStop:(BOOL)arg1;
- (void)updateVideoState:(BOOL)arg1;
- (void)_triggerAntiAddictCheckLogic;
- (void)pauseMediaPlayBySwitchFeed;
- (BOOL)isCurrentMediaPlaying;
- (BOOL)_canReceiveEdgeSwipGes:(CGPoint)arg1;
- (BOOL)pushSwipeGestureShouldBeginWithLocation:(CGPoint)arg1;
- (BOOL)isAuthorViewer;
- (void)showForwardHalfScreenGuide;
- (void)hideForwardHalfScreenGuide;
- (id)findPanelViewForLivingIcon;
- (id)findPanelViewForLiveNotice;
- (unsigned long long)currentLivingIconViewLiveId;
- (unsigned long long)currentLivingIconViewObjectId;
- (id)noticeJumpInfoAdReportInfo;
- (id)livingIconJumpInfoAdReportInfo;
- (unsigned long long)jumpInfoViewLivingIconType;
- (void)cellViewEnterBackground;
- (void)cellViewEnterForeground;
- (void)checkPlayerViewIsBackground:(BOOL)arg1;
- (void)tryDowngradePlayVideoIfSupport;
- (void)layoutSubviews;
- (void)updatePageControlLayout;
- (void)onEventClick;
- (BOOL)currentSceneIsLandSpace;
- (BOOL)selfViewIsInIPhoneLandscape;
- (CGRect)convertMediaViewRectTo:(id)arg1;
- (CGRect)convertPureMediaViewRectTo:(id)arg1;
- (id)currentBindTid;
- (BOOL)isVaildMediaView;
- (BOOL)isVideoMedia;
- (void)enterTriggerArea;
- (BOOL)canPhotoFeedPlay;
- (void)updatePhotoFeedMuteState;
- (void)startPhotoFeedPlay;
- (void)pausePhotoFeedPlay;
- (void)stopPhotoFeedPlay;
- (void)leaveTriggerArea;
- (void)willBeginDisplay:(long long)arg1;
- (void)didBeginDisplay;
- (void)didEndDisplay:(long long)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willBeginHalfScreenShow;
- (void)didEndHalfScreenShow;
- (BOOL)isSupportVideoProcess;
- (BOOL)canVideoFeedPlay;
- (void)updateVideoFeedMuteState;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)showMemberShipFeedPlayForFreeTips;
- (void)stopVideoIfSupport;
- (BOOL)isLiveFeed;
- (BOOL)currentMediaIsPlay;
- (BOOL)isCurrentMediaSupportPlay;
- (BOOL)checkInterruptMinimizeIfNeeded;
- (id)currentMediaUnSupportPlayToast;
- (BOOL)currentMediaIsMute;
- (id)playerMeidaWrapIdentifier;
- (id)minimizeContentView:(BOOL)arg1;
- (void)restoreMinimizeContentView:(id)arg1 forPlay:(BOOL)arg2;
- (id)fetchCurrentMediaTransferableTarget;
- (id)extractPlayerViewForLandscapeAnimation;
- (void)restorePlayerViewForLandscapeAnimation:(id)arg1;
- (void)refreshToolbarUI:(id)arg1;
- (void)resetPlayProcessToBegin;
- (void)changeVideoSilenceStatue:(BOOL)arg1;
- (double)getCurrentPlayVideoTime;
- (double)getCurrentPlayVideoPercent;
- (double)getPlayVideoTotalTime;
- (double)getActualPlayingTimeInMs;
- (id)playSecondSet;
- (id)progressBarStatus;
- (void)setProgressBarStatus:(id)arg1;
- (void)resetCurrentVideoThumb;
- (id)getCurrendThumb;
- (id)getCurrentMediaThumbImage;
- (id)getCurrendInteractivePanelThumbImage;
- (id)snapshotViewForMeida;
- (id)snapshotImageForMedia;
- (void)updateVideoSnapshot;
- (id)userAvatarSnapshot;
- (unsigned long long)currentPage;
- (unsigned long long)getPreloadTaskStatus;
- (void)updateCurrentVideoThumb;
- (void)setPlayRate:(double)arg1;
- (void)setPlayRate:(double)arg1 resumeMediaPlay:(BOOL)arg2;
- (id)playerView;
- (id)liveCell;
- (BOOL)isLiveRoomCell;
- (id)liveRoomCell;
- (void)resetInteractivePanelEduShadowBubbleView;
- (void)updateJumpInfoReportList;
- (BOOL)getPortraitProgressPanelHiddenState;
- (BOOL)curFeedCanOpenPIP;
- (BOOL)curFeedWillOpenPIP;
- (BOOL)isCurFeedInPIP;
- (id)getTopBubbleView;
- (void)browseCollectionViewLongTime:(unsigned long long)arg1;
- (void)photoContentPageTurning:(unsigned long long)arg1 lastIndex:(unsigned long long)arg2 scrollByManual:(BOOL)arg3;
- (void)array:(id)arg1 incrementItemAtIndex:(unsigned long long)arg2;
- (void)retryLoadingCoverImg;
- (void)retryLoadingVideoResource:(BOOL)arg1;
- (void)didSelectVideoMediaMuteChanged:(BOOL)arg1;
- (void)onImageViewDoubleTapAction:(id)arg1;
- (void)didFeedDoubleTapAction:(CGPoint)arg1;
- (void)handleDoubleTapLikeAction:(CGPoint)arg1;
- (void)afterLikeAction;
- (void)handleDoubleTapThumbLikeAction:(CGPoint)arg1;
- (BOOL)isEnableDoubleLikeAction;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)onCurrentBGMDidEndPlay:(id)arg1;
- (void)updatePlayPanelUIWithState:(unsigned long long)arg1;
- (void)autoPauseIfNeeded;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onClickMoreAction:(id)arg1;
- (void)onVideoStopPlay;
- (void)onPhotoBGMDidPlay;
- (void)onPhotoBGMDidPause;
- (void)stopVideoPlayerWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3;
- (id)getContentFeedUsername;
- (void)onPlayerControlViewTapPauseVideo:(BOOL)arg1;
- (void)onImageViewTapAction;
- (void)onImageViewDidLoadImage:(id)arg1;
- (void)onPlayerControlViewTapToResumePlayVideo;
- (void)onPlayerControlViewPanEndToResumePlayVideoWithPlayPosition:(double)arg1;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3;
- (id)onVideoGetDescTopRightJumpInfoPanelView;
- (id)onVideoGetBottomGuideView;
- (void)onVideoPlayDecoderError:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onLivePhotoVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 mediaInfo:(id)arg3;
- (void)onLivePhotoVideoDidPlayToEndWithMediaInfo:(id)arg1;
- (void)collectionViewDidEndDeceleratingAtIndex:(unsigned long long)arg1;
- (void)setViewsOverLapPlayerIsTranslucent:(BOOL)arg1 userInteractionEnabled:(BOOL)arg2 animated:(BOOL)arg3;
- (void)prefetchUniversalJumperWithMaxPlayTime:(double)arg1 forcePrefetch:(BOOL)arg2;
- (void)prefetchUniversalJumperWithJumpInfoView:(id)arg1 showPosition:(int)arg2 maxPlayTime:(double)arg3 forcePrefetch:(BOOL)arg4;
- (void)destroyMiniGameJsContextIfNeeded;
- (void)updateProgressBarAndPlayTimeLabelWithCurrentPlayDuration:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(BOOL)arg3 manual:(BOOL)arg4;
- (void)onVideoShowBufferingView;
- (void)onVideoHiddenBufferingView;
- (void)updateCurLoading;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isNewLoading;
- (void)startCycleLoading;
- (void)stopCycleLoading;
- (void)liveFeedDidTap:(id)arg1 routeModel:(id)arg2;
- (void)onLiveBeginPlay:(id)arg1;
- (void)onLiveFeedClickWithJumpInfoView:(id)arg1;
- (void)onLiveFeedClickRotateButton;
- (void)onLivePreviewEnoughTimeToShowFollowButton;
- (void)onLiveFeedFriendOpenWeChatProfile:(id)arg1;
- (void)onLiveFeedFriendLikeClickLikeList:(id)arg1;
- (void)onLiveFeedFriendLikeClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(BOOL)arg3;
- (BOOL)showLiveToolbarActionEducationTips:(unsigned long long)arg1 onClose:(id /* block */)arg2;
- (void)dismissLiveToolbarActionEducationTips;
- (void)onMediaScrollViewDidZoom:(id)arg1;
- (void)replayCurrentFocusCell;
- (CGRect)customPlayerViewRect;
- (CGRect)fetchMediaViewRect;
- (CGRect)fetchMediaCollectionViewRect;
- (double)fetchInteractivePanelTop;
- (void)_handleVideoPinchChange:(BOOL)arg1;
- (void)onVideoWithMediaId:(id)arg1 preloadStartTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 preloadFinishTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 startPlayTime:(unsigned long long)arg2;
- (void)_showProgressAnchor:(double)arg1;
- (void)onVideoWithMediaId:(id)arg1 renderSize:(CGSize)arg2;
- (void)contentMediaDidStopPlay:(id)arg1;
- (void)onVideoPipWindowStart:(id)arg1;
- (void)onVideoPipWindowStop:(id)arg1;
- (void)onVideoSeekActionWithDirection:(BOOL)arg1;
- (void)shouldPauseByDeviceUnavailableAction;
- (void)onLiveFeedSatisfactionQuestVisibleStateChange:(BOOL)arg1;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2 isCertificateType:(BOOL)arg3;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)showPostTemplateCommetGuideBubbleViewWithRefDataItem:(id)arg1 commentId:(unsigned long long)arg2;
- (void)showSnsCommentGuideBubbleView:(id)arg1;
- (void)onFeedLiveAppointmentStatusChanged;
- (void)onFeedLiveAppointmentUpdate;
- (void)_updateLiveAppointmentState;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onFeedContentWarnFlagChanged:(id)arg1;
- (void)onFeedContentUserFollowStateChanged:(id)arg1;
- (void)onFeedContent:(id)arg1 privateStateChange:(BOOL)arg2;
- (void)onFinderContentVM:(id)arg1 asyncRecommendInfoUpdatedIncommentScene:(int)arg2;
- (void)postCNYBulletComment:(id)arg1 bulletCommentSource:(int)arg2 completion:(id /* block */)arg3;
- (void)onCNYBulletCommentNeedDisplay;
- (void)addFeedSubtitleViewIfNeeded;
- (void)onFeedSubtitlePermissionChanged:(id)arg1;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4 disableReport:(BOOL)arg5;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLastestLivingItemUpdate:(id)arg1;
- (void)onFeedHotCommentChanged:(id)arg1;
- (void)onFeedJumpCarouselChanged:(id)arg1;
- (void)onFeedContentBeDisliked:(id)arg1;
- (void)onFeedBulletSwitchChangedNeedReflush:(id)arg1;
- (void)onFeedContent:(id)arg1 postTemplateCommentSuccessfulWithCommentId:(unsigned long long)arg2 targetFeedId:(id)arg3 postFeedID:(id)arg4;
- (void)onFinderDataItemDiagnosisDataChange:(id)arg1;
- (void)onFeedProgressAnchorInfoChange:(id)arg1;
- (int)contentVMTargetLikeFlagIsPrivateLike:(BOOL)arg1;
- (void)startLikeAnimationWithLikeFlag:(int)arg1 touchPoint:(CGPoint)arg2;
- (CGPoint)getDoubleLikeDisplayCenter;
- (void)startLikeAnimationWithAnimView:(id)arg1 point:(CGPoint)arg2;
- (id)getLikeAnimationTipsLabelWithTouchPoint:(CGPoint)arg1;
- (void)dynamicLikeAnimationWithTouchPoint:(CGPoint)arg1;
- (void)showColumnSwipEdu;
- (void)tryShowDoubleFavFeedback;
- (void)tryShowDoubleFavEduAnimation;
- (void)tryShowDoubleLikeEduAnimation;
- (void)tryShowFavoriteAnimationWithTouchPoint:(CGPoint)arg1;
- (id)getFavoriteAnimationTipsLabelWithFollowTouchPoint:(BOOL)arg1;
- (BOOL)newFavoriteAnimationShouldShowFriendsCount;
- (id)createMoreFriendLabel;
- (id)createFeedFavoriteAnimationView;
- (id)createdFeedDynamicFavoriteAnimationView;
- (void)onFinderDataItemPlayHistoryInfoUpdateWithTid:(id)arg1 playHistoryInfo:(id)arg2;
- (void)onFeedBottomScrollUpAndShowMutexFeatureView:(unsigned long long)arg1;
- (void)onAirPlayAction:(int)arg1;
- (BOOL)mediaIsOnPlay;
- (BOOL)shouldCaluculateAsFocusCell;
- (CGRect)convertFocusRectToView:(id)arg1;
- (double)minPercentcellCanPlayDisplay;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onApplicationBecomeActive:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)viewableExposeReport;
- (void)doCellEndExposeAction;
- (void)checkShowRedPacketGuideBubble;
- (void)checkShowEmotionGuideBubble;
- (void)checkShowTingEntryIfNeeded;
- (BOOL)isTeenagerRestType;
- (void)showTingEntryFlutterPage;
- (void)dismissTingEntryFlutterView:(BOOL)arg1;
- (void)finishDismissTingEntry;
- (id)getTingEntryTid;
- (id)accessoryDownloadGroupKey;
- (BOOL)canBecomeFirstResponder;
- (void)showTextMenuWithRect:(CGRect)arg1;
- (void)clickLinkAction;
- (CGSize)cellIconSize;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copyText;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)goToFriendLikeListDetail;
- (id)panGes;
- (id)tapGes;
- (id)likeGes;
- (id)longPressGes;
- (void)pauseMediaPlayShowPauseBtn:(BOOL)arg1;
- (void)resumeMediaPlay;
- (void)onPan:(id)arg1;
- (void)_notifyProgressDragState:(unsigned long long)arg1 withPan:(id)arg2;
- (void)onTap:(id)arg1;
- (void)_onTap:(id)arg1;
- (void)reportPauseButtonExpose;
- (void)resetAutoPauseArgs;
- (void)reportAcceleratePlayExpose;
- (void)triggerPauseVideoAction;
- (void)updatePauseLikeProgressPanelHiddenStateTabDeselect;
- (void)reversePauseLikeProgressViewsHiddenState;
- (void)reversePauseLikeProgressViewsHiddenStateWithPauseSelectState:(BOOL)arg1;
- (void)onLikeFeed:(id)arg1;
- (void)onLongPressMedia:(id)arg1;
- (void)handleLandscapeLongPressRateWithGesture:(id)arg1;
- (void)handleLongPressWithGesture:(id)arg1;
- (void)lightImpact;
- (void)_changeSpeedPlayWithPlayRate:(long long)arg1;
- (void)startSpeedPlay;
- (void)_setNecessaryViewUserInteractionEnable:(BOOL)arg1;
- (void)_stopSpeedAdjustWithType:(long long)arg1;
- (void)stopSpeedPlayWithType:(long long)arg1;
- (void)_handlePlayBackSpeedViewStopActionWithType:(long long)arg1 animated:(BOOL)arg2;
- (void)stopSpeedPlayWithType:(long long)arg1 animated:(BOOL)arg2;
- (void)setGradientLayerHidden:(BOOL)arg1;
- (double)bottomGraddientTopY;
- (void)showCellBottomGradientViewHeight:(double)arg1 colors:(id)arg2;
- (void)removeCellBottomGradientView;
- (BOOL)shouldEnablePortraitLongPressSetRate;
- (CGRect)invalidPortraitLongPressRateAreaRect;
- (void)handlePortraitLongPressRateWithGesture:(id)arg1;
- (void)portaintLongPressRateSetNavigationBarHidden:(BOOL)arg1;
- (CGRect)longPressArea;
- (BOOL)isPanGesEnable:(CGPoint)arg1;
- (CGRect)progressHotRect;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)onFinderMemberShipVisitorStatusHasChanged:(unsigned long long)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (CGRect)currentMediaViewFrame;
- (void)interactivePanelVisibleHeightChanged;
- (double)topOfBottomContent;
- (void)interactivePanelBottomGradientHeightChanged;
- (void)interactivePanelClickEventEntry;
- (void)interactivePanelClickBannerJumpCarouselView:(id)arg1 style:(id)arg2;
- (void)onFeedOpenTingPlayerByParamsModel:(id)arg1;
- (void)onListenThumbLikeClicked:(id)arg1 jumpInfo:(id)arg2 style:(id)arg3;
- (void)interactivePanelClickButtonJumpCarouselView:(id)arg1 style:(id)arg2;
- (void)interactivePanelClickJumpCarouselShow;
- (void)interactivePanelClickPOILabel;
- (void)interactivePanelClickRedPacketLink;
- (void)interactivePanelClickMoreAction:(id)arg1;
- (void)interactivePanelClickThankForShareButtonWithThank:(BOOL)arg1;
- (void)interactivePanelHeaderClickAvatar:(id)arg1;
- (void)openAvatarJumpInfoIfNeeded:(id)arg1;
- (void)interactivePanelHeaderClickNickname:(id)arg1;
- (void)interactivePanelHeaderShowSpamTipsWithString:(id)arg1;
- (void)interactivePanelHeaderClickMoreBtn:(id)arg1;
- (void)interactivePanelHeaderClickFollowBtn:(id)arg1;
- (void)interactivePanelToolbarClickViewAllComment:(id)arg1 isActiveInput:(BOOL)arg2 isFromCommentButton:(BOOL)arg3;
- (void)interactivePanelToolbarClickRetryUploading:(id)arg1;
- (void)interactivePanelToolbarClickCancelUploading:(id)arg1;
- (void)interactivePanelToolbarRefreshToolbarUI:(id)arg1;
- (void)interactivePanelToolbarRefreshFriendLikeUI:(id)arg1;
- (void)interactivePanelToolbarFavDataFinished:(id)arg1;
- (void)interactivePanelToolbarClickRealNameAction;
- (void)interactivePanelToolbarClickLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)interactivePanelToolbarWillClickLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)interactivePanelToolbarLikeLongPressAction:(id)arg1 state:(unsigned long long)arg2;
- (void)interactivePanelToolbarLikeLongPressComplection:(id)arg1;
- (void)interactivePanelToolbarClickRecommendUrl:(id)arg1;
- (void)interactivePanelToolbarWillClickCollectionAction:(id)arg1;
- (void)interactivePanelToolbarClickCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)interactivePanelToolbarClickShareAction:(id)arg1 shareButton:(id)arg2;
- (void)showMoreActionSheetWithShareButton:(id)arg1;
- (void)interactivePanelToolbarClickFeedAllLikeAction:(id)arg1;
- (void)interactivePanelToolbarClickFeedAllFavAction:(id)arg1;
- (void)interactivePanelToolbarClickFeedAllViewedAction:(id)arg1;
- (void)interactivePanelToolbarBulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3;
- (void)interactivePanelToolbarBulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)updateBulletCommentLayout:(BOOL)arg1;
- (void)onDeleteBulletComment:(id)arg1 result:(BOOL)arg2;
- (void)onBlockBulletComment:(id)arg1 result:(BOOL)arg2;
- (void)interactivePanelFriendLikeClickLikeList:(id)arg1;
- (void)interactivePanelFriendOpenWeChatProfile:(id)arg1;
- (void)interactivePanelFriendLikeRefreshFriendUI:(id)arg1;
- (void)interactivePanelFriendLikeClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(BOOL)arg3;
- (id)getLikeInfo;
- (void)onClickLikeToolBarThankState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimation:(unsigned long long)arg1 iconFrame:(CGRect)arg2;
- (void)interactivePanelTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)interactivePanelTextView:(id)arg1 clickText:(id)arg2 withRect:(CGRect)arg3;
- (void)interactivePanelTextView:(id)arg1 longPressedText:(id)arg2 withRect:(CGRect)arg3;
- (void)interactivePanelTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)interactivePanelTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)interactivePanelTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)interactivePanelTextView:(id)arg1 clickReadMore:(BOOL)arg2 isTouchExpand:(BOOL)arg3;
- (void)interactivePanelClickExtLink;
- (void)interactivePanelClickHotWord:(id)arg1;
- (void)interactivePanel:(id)arg1 didLongPressWithGesture:(id)arg2;
- (void)interactivePanelLastestLiveInfoClickAction:(id)arg1;
- (void)interactivePanelExposeWithJumpInfoView:(id)arg1;
- (void)interactivePanelClickWithJumpInfoView:(id)arg1 clickArea:(unsigned long long)arg2 entranceType:(int)arg3;
- (void)interactivePanelWithJumpInfoView:(id)arg1 changeToStyleWithIndex:(unsigned long long)arg2;
- (void)interactivePanelJumpInfoCustomExposure:(id)arg1;
- (void)interactivePanelJumpInfoCustomClicked:(id)arg1;
- (void)interactivePanelTapSetRingToneGuideView;
- (void)interactivePanelTapHotComment:(id)arg1;
- (void)interactivePanelTapRecommendComment:(id)arg1;
- (void)interactivePanelTapEmotionCarouselComment:(id)arg1;
- (void)interactivePanelTapMultiImageCarouselComment:(id)arg1;
- (BOOL)interactivePanelMediaPlaying;
- (void)interactivePanelHotCommentCarousel;
- (void)pauseMediaPlayByBullet;
- (void)showBulletInputViewControllerWithReplyItem:(id)arg1;
- (void)clickDislikeButtonAction;
- (void)interactivePanelClickCommentActionComment:(id)arg1 scene:(int)arg2;
- (void)interactivePanelClickRedPacketActionComment:(id)arg1 scene:(int)arg2;
- (void)interactivePanelClickEmotionAction:(id)arg1 scene:(int)arg2;
- (id)getOcrAreasInPanelView:(id)arg1;
- (void)interactivePanelClickCollectionDesc;
- (void)onShowAutoScrollSheet:(id)arg1;
- (BOOL)canShowAutoScrollSheetTips:(id)arg1;
- (void)reserveNextLiveWithBubble:(id)arg1;
- (void)realReserveNextLiveWithBubble:(id)arg1 userName:(id)arg2 isReserve:(BOOL)arg3;
- (void)openPremovieAdWithPlayPos:(double)arg1 videoDuration:(double)arg2 realPlayDuration:(double)arg3 lastDragProgressTime:(double)arg4;
- (BOOL)canShowPremovieAd;
- (BOOL)setupPremovieAdHelperAndViewsIfNeed;
- (void)showPremovieTipsAndAdLater;
- (void)doShowPremovieAd;
- (void)premovieAdOnPlayerStateChanged:(unsigned long long)arg1;
- (void)pauseWillShowPremovieAdIfNeed;
- (void)resumeWillShowPremovieAdIfNeed;
- (void)pausePremovieAdIfShowing;
- (BOOL)restorePremovieAdIfNeed;
- (BOOL)isShowingPremovieAd;
- (void)disposePremovieAdUI;
- (void)finderPremovieAdShouldShow;
- (void)changePremovieRelatedViewAlpha:(double)arg1;
- (void)finderPremovieAdShouldResume;
- (void)finderPremovieAdShouldPause;
- (void)finderPremovieAdShouldClose;
- (void)finderPremovieAdDidClickJumpInfo:(id)arg1;
- (void)finderPremovieAdFeedbackViewShouldShowWithAdLabelFrame:(CGRect)arg1;
- (void)finderPremovieAdFeedbackViewFrameShouldChangeWithAdLabelFrame:(CGRect)arg1;
- (void)finderPremovieAdVideoDidPlayTo:(double)arg1;
- (void)finderPremovieAdVideoOnManualPaused:(BOOL)arg1;
- (id)finderPremovieAdGetFeedContentVM;
- (id)finderPremovieAdGetCommonReportParams;
- (void)onFinderFeedSubtitleShowLanguageChanged:(id)arg1;
- (void)onFinderFeedSubtitleOpenStateChanged:(BOOL)arg1;
- (void)onFinderFeedbackViewLikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewComplainButtonDidClick:(id)arg1;
- (void)onFinderFeedbackView:(id)arg1 shouldCloseWithReasons:(id)arg2;
- (void)onFinderFeedbackViewDidCancel:(id)arg1;
- (void)_closeFeedbackView:(id)arg1 toastText:(id)arg2 autoClosePremovieAd:(BOOL)arg3;
- (id)premovieFeedbackParams;
- (double)immersiveProgressControlBottom;
- (void)progressControlPanelClickPauseButton:(id)arg1;
- (id)progressControlPanelGetMediaCollectionView;
- (id)progressControlPanelGetLongVideoEntry;
- (double)longVideoEntryHeight;
- (void)progressControlPanelClickPlayRateButton:(id)arg1;
- (void)progressControlPanelClickRotateButton:(id)arg1;
- (void)progressControlPanelClickBulletButton:(id)arg1;
- (void)progressControlPanelClickSubtitleButton:(id)arg1;
- (void)progressControlPanelClickBackButton:(id)arg1;
- (void)progressControlPanelLandScapeStateDidHideSelf;
- (void)progressControlPanelClickJumpInfoView:(id)arg1;
- (void)layoutCurProgressBar;
- (void)progressControlPanelCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2 dragType:(unsigned long long)arg3;
- (void)replayAndHideProgressControlPanelView;
- (BOOL)isMediaContentReady;
- (BOOL)hasVideoTemplateBubbleEntrance;
- (void)hideProgressControlPanelView;
- (void)tryMarkPortraitProgressScrolled;
- (void)tryShowProgressGuideIfNeeded;
- (void)showProgressGuide;
- (void)tryShowProgressGuideView:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)dismissProgressGuideView;
- (id)interestBottomView;
- (void)tryShowBottomInterestView;
- (void)showBottomInterestView;
- (void)realShowBottomInterestView;
- (void)tryDismissBottomInterestViewAnimated;
- (void)removeBottomInterestView;
- (void)tryDismissBottomInterestView:(BOOL)arg1;
- (BOOL)showGuideJumpToFinderEntryView;
- (BOOL)_showBottomBannerViewWithShowDuration:(double)arg1;
- (BOOL)showBottomBannerViewWith:(id)arg1;
- (id)showGuideMoreRecommendView:(id)arg1;
- (void)showGuideMoreRelatedView:(id)arg1;
- (void)tryShowScrollUpGuide;
- (BOOL)canShowMoreRelatedTipsView;
- (void)showBottomAreaTips:(id)arg1 showArrow:(BOOL)arg2 forbidDismiss:(BOOL)arg3 identity:(unsigned long long)arg4;
- (void)updateBottomAreaTips:(id)arg1;
- (void)dismissBottomAreaTipsIfNeedAnimated:(BOOL)arg1 identities:(id)arg2;
- (void)_showBottomAreaTipsViewWithForbidDismiss:(BOOL)arg1 identity:(unsigned long long)arg2;
- (void)_dismissBottomAreaTipsWithIdentity:(unsigned long long)arg1;
- (void)moveFeedEntityViewWithOffset:(double)arg1;
- (id /* block */)moveHeaderViewAndDisplayView:(id)arg1 UpwardSpacing:(double)arg2 movAnimDuration:(double)arg3;
- (void)onBottomAreaTipsButtonClicked;
- (void)commonBottomBannerViewonClickAction:(id)arg1;
- (void)commonBottomBannerViewonCloseAction:(id)arg1;
- (id)getOneAvailableSurveyTaskDataWrap;
- (void)checkShowNPSSurveyIfNeeded;
- (void)checkShowNPSSurvey;
- (void)showNPSQuestion:(id)arg1;
- (void)prepareNPSFlutterSurvey;
- (BOOL)realShowNPSSurveyIfNeeded:(BOOL)arg1;
- (void)realShowNPSFlutterSurvey:(BOOL)arg1;
- (void)showNPSFlutterSurvey:(BOOL)arg1;
- (CGRect)createNPSTargetRect:(CGRect)arg1;
- (void)reportNPSWithReportType:(unsigned int)arg1;
- (void)clickNPSQuestion:(id)arg1 surveyAnswer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4;
- (void)dismissNPSFlutterSurveyView:(BOOL)arg1 completed:(BOOL)arg2;
- (void)_dismissNPSFlutterSurveyView:(BOOL)arg1 completed:(BOOL)arg2;
- (void)briefIntroCardViewCountdownOver:(id)arg1;
- (void)setDecorationViewsTranslucent:(BOOL)arg1;
- (void)setMoreActionButtonAlpha:(double)arg1;
- (void)setViewsOverLapPlayerIsTranslucent:(BOOL)arg1;
- (void)setViewsOverLapPlayerUserInteractionEnabled:(BOOL)arg1;
- (void)setAllSubviewsAlphaZero:(BOOL)arg1;
- (void)setAllSubviewsAlphaZeroExceptBullet:(BOOL)arg1;
- (void)setAllSubviewsAlphaZero:(BOOL)arg1 except:(id)arg2;
- (void)_setViews:(id)arg1 isTranslucent:(BOOL)arg2 readDefaultAlpha:(BOOL)arg3 writeDefaultAlpha:(BOOL)arg4;
- (void)_setViews:(id)arg1 isAlphaZero:(BOOL)arg2;
- (void)reportLandscapeWithKVReporter;
- (void)_configPortraitRotateButtonReport;
- (void)_configLandscapeRotateButtonReportWithView:(id)arg1;
- (void)updateProgressControlPanelView:(BOOL)arg1;
- (BOOL)forceHideSubControl;
- (void)updateFeedSubtitleViewUI;
- (BOOL)bulletCommentEnabled;
- (void)updateDislikeButtonUI;
- (BOOL)shouldShowFeedDislikeEntry;
- (void)updateDislikeEntryColor;
- (void)updateDislikeEntryHiddenState;
- (double)rightEntryMaxLeft;
- (void)hiddenBottomBannerView;
- (void)hiddenMoreRelatedTipsView;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)onAudioMonoServiceBussinessRemoved:(id)arg1 inMainScene:(BOOL)arg2;
- (void)onVideoMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)onVideoMonoServiceBussinessRemoved:(id)arg1 inMainScene:(BOOL)arg2;
- (BOOL)needHandleAudioMonoService:(id)arg1 inMainScene:(BOOL)arg2;
- (void)willPresentHalfScreen;
- (void)resumeFromHalfScreen;
- (void)onSendEvent:(id)arg1;
- (id)getGeneralMonitorCellBizId;
- (void)onTapBulletGroupViewDidSelectedItem:(BOOL)arg1;
- (void)onLongPressBulletGroupView:(id)arg1;
- (void)onAddAnimationForItem:(id)arg1 animation:(id)arg2;
- (void)onMenuControllerWillHide;
- (void)onClickNPSQuestion:(id)arg1 answer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4;
- (void)superScrollViewDidScroll;
- (void)feedDidChanged:(id)arg1 toIndexPath:(id)arg2;
- (void)onClickTingEntryJump;
- (void)onClickTingEntryClose;
- (void)muteStateChanged;
- (id)getHalfMoveModel;
- (id)lightWhiteColor;
- (id)dynamicWhiteColor;
- (void)onAnimationStart:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationRepeat:(id)arg1;
- (void)onConfirmButtonClicked;
- (void)finderProgressPanelDidClickExitPinchInButton;
- (BOOL)finderProgressPanelGetIsPinchInState;
- (void)finderProgressPanelClickPlayAnchor:(double)arg1;
- (BOOL)isInGesturePinchState;
- (void)_setIsClickingLandscapeBtn:(BOOL)arg1;
- (BOOL)isRotateToLandscapeTriggerByButton;
- (void)willResetToPortrait;
- (void)didResetToPortrait;
- (void)didRotateToLandscape;
- (void)onFinderFeedHighlightsPanelShowing:(id)arg1;
- (void)onFinderFeedHighlightsPanelDidDisappear:(id)arg1;
- (void)onFinderFeedHighlightsPanelSelectItemJumpToPlayTimestamp:(double)arg1;
- (id)extInfoForSnapshotPrinter;
- (BOOL)isForceDisableLikeAction;
- (void)setIsForceDisableLikeAction:(BOOL)arg1;
- (BOOL)isEnableMediaHeaderShowFollowTips;
- (void)setIsEnableMediaHeaderShowFollowTips:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)npsDelegate;
- (void)setNpsDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (CGPoint)hitPoint;
- (void)setHitPoint:(CGPoint)arg1;
- (BOOL)hasReportExpose;
- (void)setHasReportExpose:(BOOL)arg1;
- (unsigned long long)landScapeEnterType;
- (void)setLandScapeEnterType:(unsigned long long)arg1;
- (BOOL)disappearForHalfScreen;
- (void)setDisappearForHalfScreen:(BOOL)arg1;
- (id)commonBottomBannerView;
- (void)setCommonBottomBannerView:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (id)memberPaymentGuideView;
- (void)setMemberPaymentGuideView:(id)arg1;
- (id)redCoverBubbleView;
- (void)setInteractivePanelView:(id)arg1;
- (void)setInteractivePanelConfigModel:(id)arg1;
- (id)premovieAdView;
- (void)setPremovieAdView:(id)arg1;
- (id)premovieAdTipsLabel;
- (void)setPremovieAdTipsLabel:(id)arg1;
- (id)premovieAdFeedbackView;
- (void)setPremovieAdFeedbackView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setTapGes:(id)arg1;
- (void)setPanGes:(id)arg1;
- (void)setLikeGes:(id)arg1;
- (void)setLongPressGes:(id)arg1;
- (id /* block */)longPressHandler;
- (void)setLongPressHandler:(id /* block */)arg1;
- (double)offsetY;
- (void)setOffsetY:(double)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (double)maxPlayVideoTime;
- (void)setMaxPlayVideoTime:(double)arg1;
- (void)setLongVideoEntry:(id)arg1;
- (void)setNeedRemoveViewSet:(id)arg1;
- (void)setProgressControlConfigModel:(id)arg1;
- (id)tableViewParamModel;
- (void)setTableViewParamModel:(id)arg1;
- (void)setLandscapeProgressPanelView:(id)arg1;
- (void)setPortraitProgressPanelView:(id)arg1;
- (id)portraitLongPressRatePlayStateModel;
- (void)setPortraitLongPressRatePlayStateModel:(id)arg1;
- (void)setGuideFinderEntranceBarView:(id)arg1;
- (void)setProgressGuideView:(id)arg1;
- (void)setBottomAreaTipsView:(id)arg1;
- (id)bottomAreaTipsButton;
- (void)setBottomAreaTipsButton:(id)arg1;
- (void)setMoreActionButton:(id)arg1;
- (BOOL)likeAnimationDynamicPagPlaying;
- (void)setLikeAnimationDynamicPagPlaying:(BOOL)arg1;
- (id)pagDynmicWording;
- (void)setPagDynmicWording:(id)arg1;
- (id)premovieAdHelper;
- (void)setPremovieAdHelper:(id)arg1;
- (id)picExposeSequence;
- (void)setPicExposeSequence:(id)arg1;
- (id)picAutoSequence;
- (void)setPicAutoSequence:(id)arg1;
- (id)picManualSequence;
- (void)setPicManualSequence:(id)arg1;
- (BOOL)hideProgressBarIfRotateToLandscape;
- (void)setHideProgressBarIfRotateToLandscape:(BOOL)arg1;
- (id)adReportInfo;
- (void)setAdReportInfo:(id)arg1;
- (void)setCellBottomGradientView:(id)arg1;
- (CGPoint)beginTouchPos;
- (void)setBeginTouchPos:(CGPoint)arg1;
- (double)beginTouchProgressBarValue;
- (void)setBeginTouchProgressBarValue:(double)arg1;
- (unsigned long long)panLockState;
- (void)setPanLockState:(unsigned long long)arg1;
- (unsigned long long)videoReplayCount;
- (void)setVideoReplayCount:(unsigned long long)arg1;
- (unsigned long long)photoBgmReplayCount;
- (void)setPhotoBgmReplayCount:(unsigned long long)arg1;
- (unsigned long long)feedStayStartTime;
- (void)setFeedStayStartTime:(unsigned long long)arg1;
- (id)feedSubtitleView;
- (void)setBulletAnimationView:(id)arg1;
- (void)setDislikeButton:(id)arg1;
- (unsigned long long)feedViewerScene;
- (void)setFeedViewerScene:(unsigned long long)arg1;
- (BOOL)needResumeVideo;
- (void)setNeedResumeVideo:(BOOL)arg1;
- (BOOL)didDragProgressBar;
- (void)setDidDragProgressBar:(BOOL)arg1;
- (id)moveModel;
- (void)setMoveModel:(id)arg1;
- (id)playbackSpeedView;
- (void)setPlaybackSpeedView:(id)arg1;
- (unsigned long long)portraitPressSpeedStartTime;
- (void)setPortraitPressSpeedStartTime:(unsigned long long)arg1;
- (id)nativeDramaUnlockView;
- (void)setNativeDramaUnlockView:(id)arg1;
- (id)nativeDramaFilingNumberLabel;
- (void)setNativeDramaFilingNumberLabel:(id)arg1;
- (void)setInterestBottomView:(id)arg1;
- (id)halfASGuidePanelSheet;
- (void)setHalfASGuidePanelSheet:(id)arg1;
- (long long)latestExposeTimeStamp;
- (void)setLatestExposeTimeStamp:(long long)arg1;
- (id)curNPSFlutterVC;
- (void)setCurNPSFlutterVC:(id)arg1;
- (id)curTaskConf;
- (void)setCurTaskConf:(id)arg1;
- (id)curSurveyQuestion;
- (void)setCurSurveyQuestion:(id)arg1;
- (long long)curTriggerEvent;
- (void)setCurTriggerEvent:(long long)arg1;
- (CGRect)oriPlayerViewFrame;
- (void)setOriPlayerViewFrame:(CGRect)arg1;
- (CGRect)curPlayerViewFrame;
- (void)setCurPlayerViewFrame:(CGRect)arg1;
- (BOOL)bHadCheckNPSSurvey;
- (void)setBHadCheckNPSSurvey:(BOOL)arg1;
- (BOOL)bHasShownNPSSurvey;
- (void)setBHasShownNPSSurvey:(BOOL)arg1;
- (BOOL)bNeedShowNPSSurvey;
- (void)setBNeedShowNPSSurvey:(BOOL)arg1;
- (unsigned long long)videoPinchState;
- (void)setVideoPinchState:(unsigned long long)arg1;
- (id)curTingEntryFlutterVC;
- (void)setCurTingEntryFlutterVC:(id)arg1;
- (id)tingEntryTid;
- (void)setTingEntryTid:(id)arg1;
- (BOOL)isShowingTing;
- (void)setIsShowingTing:(BOOL)arg1;
- (id)realShownTeenagerRestTid;
- (void)setRealShownTeenagerRestTid:(id)arg1;
- (id)halfScreenFlutterContainerView;
- (void)setHalfScreenFlutterContainerView:(id)arg1;
- (void)setLandScapeBackButton:(id)arg1;
- (void)setLandScapeBackButtonBackgroundView:(id)arg1;
- (id)magicAnimationLogic;
- (void)setMagicAnimationLogic:(id)arg1;
- (id)OCRAreaTipsViews;
- (void)setOCRAreaTipsViews:(id)arg1;
- (id)currentHighlightsPanel;
- (void)setCurrentHighlightsPanel:(id)arg1;
- (id)swipEduView;
- (void)setSwipEduView:(id)arg1;
- (void).cxx_destruct;
@end
