@interface WCFinderFeedLiveCollectionViewCell : WCFinderFeedLiveBaseCollectionViewCell <MMLiveCDNPlayerViewDelegate, WCFinderFeedCollectionViewCellProtocol, WCFinderFeedContentVMExt, WCFinderPanelTapToEnterLivingViewDelegate, MMLiveCDNPlayerViewExt, WCFinderHalfScreenListenProtocol, MMFinderLiveFeedDataLogicDelegate, MMFinderLiveFeedStreamProductStyleViewDelegate, PAGViewListener, WCFinderJumpInfoPanelViewDelegate, MMFinderLiveFeedStreamCarouselViewDelegate, WCFinderFriendLikeToolbarViewDelegate, MMFinderLiveFeedStreamBarrageCommentViewDelegate, MMLiveCDNPlayerViewPIPModeDelegate>
{
    BOOL _hideLiveTipsView; // +0x8
    BOOL _pauseAfterFirstKeyframe; // +0x9
    BOOL _isFirstPlayByPreplay; // +0xa
    BOOL _likeShootingAnimation; // +0xb
    BOOL _isMediaContentReady; // +0xc
    BOOL _canPlayInMinimizeMode; // +0xd
    BOOL _isMultiStyleAppearing; // +0xe
    BOOL _hideProductView; // +0xf
    BOOL _hideWidgetViews; // +0x10
    BOOL _showingNPS; // +0x11
    BOOL _npsSuppressesBarrage; // +0x12
    BOOL _keepDataLogicBeforeChangeToMinimizeMode; // +0x13
    BOOL _keepDataLogicDelayInLineBeforeRestoreFromPIPMode; // +0x14
    id <WCFinderFeedContentMediaActionProtocol> _delegate; // +0x18
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate; // +0x20
    id <WCFinderFeedLiveCollectionViewCellBottomLineOffsetProvider> _bottomLineOffsetProvider; // +0x28
    MMLiveCDNPlayerView * _playerView; // +0x30
    WCFinderPanelTapToEnterLivingView * _tapToEnterLivingView; // +0x38
    UIImageView * _containerView; // +0x40
    UIView * _interactContainerView; // +0x48
    UIView * _universalContainerView; // +0x50
    WCFinderFriendLikeToolbarView * _friendLikeView; // +0x58
    unsigned long long _userActionBeginTimestamp; // +0x60
    unsigned long long _userActionEndTimestamp; // +0x68
    MMLiveCDNPlayerView * _pipRootPlayerView; // +0x70
    MMLiveFeedStreamTaskId * _reuseFeedStreamTaskId; // +0x78
    WCFinderLiveNowView * _liveTipsView; // +0x80
    UIView * _overMaskView; // +0x88
    WCFinderLiveNowView * _overTipsView; // +0x90
    WCFinderFeedContentVM * _contentVM; // +0x98
    unsigned long long _style; // +0xa0
    unsigned long long _startPlayTimestamp; // +0xa8
    unsigned long long _realStartPlayTimestamp; // +0xb0
    unsigned long long _playerConnectTimestamp; // +0xb8
    MMFinderLiveFeedPreviewLogic * _previewLogic; // +0xc0
    UIView * _mediaContainerView; // +0xc8
    NSHashTable * _hiddenOnHalfHashTable; // +0xd0
    MMFinderFeedStreamSatisfactionQuestView * _questView; // +0xd8
    MMTimer * _questDelayShowTimer; // +0xe0
    MMFinderLiveFeedDataLogic * _dataLogic; // +0xe8
    MMFinderLiveFeedLikeAnimationView * _likeAnimationView; // +0xf0
    MMFinderLiveFeedStreamProductStyleView * _productStyleView; // +0xf8
    MMFinderLiveFeedStreamCommentView * _commentView; // +0x100
    id <MMLiveCommentWidthProvider> _commentWidthProvider; // +0x108
    MMFinderLiveFeedStreamConnectMicUserInfoView * _connectMicView; // +0x110
    UIImageView * _connectMicPkAtmosphereBackgroundView; // +0x118
    WCFinderFullScrollTextView * _textView; // +0x120
    CAGradientLayer * _bottomGradientLayer; // +0x128
    MMLiveAvatarBackgroundView * _blurBackgroundView; // +0x130
    MMWebImageView * _blurBackgroundCoverImgView; // +0x138
    MMWebImageView * _blurBackgroundAdImgView; // +0x140
    MMTimer * _productDelayShowTimer; // +0x148
    MMTimer * _productDelayHideTimer; // +0x150
    MMTimer * _commentViewDelayTimer; // +0x158
    MMTimer * _barrageCommentViewDelayTimer; // +0x160
    unsigned long long _enterTriggerTime; // +0x168
    WCFinderDynamicRichTextView * _recommendReasonTextView; // +0x170
    MMTimer * _recommendDelayShowTimer; // +0x178
    MMTimer * _recommendDelayHideTimer; // +0x180
    MMTimer * _tapToEnterLiveDelayShowTimer; // +0x188
    UIView * _hardAdCornerView; // +0x190
    PAGView * _pagPacketView; // +0x198
    UILabel * _pagPacketTipLabel; // +0x1a0
    MMTimer * _pagPacketDelayPlayTimer; // +0x1a8
    MMFinderLiveGenericFullTapEducationView * _tapEducationView; // +0x1b0
    MMFinderLiveGenericLongPressEducationView * _longPressEducationView; // +0x1b8
    WCFinderJumpInfoPanelView * _textTLJumpinfoView; // +0x1c0
    MMFinderLiveFeedPreviewSearchComponentView * _searchComponentView; // +0x1c8
    MMFinderLiveFeedStreamCarouselView * _carouselView; // +0x1d0
    WCFinderFriendLikeShootingAnimationLogic * _shootingAnimationLogic; // +0x1d8
    MMFinderLiveFeedStreamBarrageCommentView * _barrageCommentView; // +0x1e0
    MMLivePanEnterPreviewRenderSource * _panEnterPreviewRenderSource; // +0x1e8
    UIButton * _rotateButton; // +0x1f0
    RichTextView * _innerRecommendReasonTextView; // +0x1f8
    MMUILabel * _innerRecommendExpandActionLabel; // +0x200
    UIView * _innerRecommendReasonContainerView; // +0x208
    long long _innerRecommendLabelState; // +0x210
    NSString * _innerRecommendReason; // +0x218
    WCFinderInteractivePanelConfigParamsModel * _interactivePanelConfigParamsModel; // +0x220
    MMXp2pWrapper * _p2pManagerInstance; // +0x228
    CGSize _playerItemSize; // +0x230
    CGRect _currPlayerViewRect; // +0x240
}
+ (BOOL)shouldPlayOnUserInteractionBegin;
+ (BOOL)shouldPreRender;
- (id)initWithFrame:(CGRect)arg1;
- (void)syncPlayerRenderModeIfNeed;
- (void)dealloc;
- (id)dataItem;
- (id)hiddenOnHalfHashTable;
- (void)initializeOrUpdateViews;
- (void)checkAndInitPlayerView;
- (void)initInnerRecommendReasonView;
- (BOOL)isSpaciousLayout;
- (BOOL)isPhoneLandscapeModeForSize:(CGSize)arg1;
- (void)updateLayout;
- (void)updateInnerRecommendation;
- (void)layoutPacketView;
- (void)layoutRotateButton;
- (double)layoutProductAndTextView:(double)arg1 contentWidth:(double)arg2 containerWidth:(double)arg3 horizontalMargin:(double)arg4 oldContainerSize:(CGSize)arg5;
- (TextWidgetVerticalLayoutAttrs)textWidgetLayoutHierarchyWithView:(id)arg1;
- (BOOL)isProductBubbleStyle;
- (BOOL)isProductGuideStyle;
- (double)layoutVerticalTextWidgets:(id)arg1 currentOffsetY:(double)arg2 containerWidth:(double)arg3 margin:(double)arg4;
- (double)layoutVerticalTextWidget:(id)arg1 currentOffsetY:(double)arg2 containerWidth:(double)arg3 margin:(double)arg4;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)playVideo:(double)arg1 silencePlay:(BOOL)arg2 shouldResetTime:(BOOL)arg3 playerView:(id)arg4;
- (id)getPlayerView;
- (void)checkPreviewRightNow;
- (void)previewLive;
- (void)pauseVideoIfSupport:(BOOL)arg1;
- (void)stopVideoIfSupport;
- (void)handleDataLogic:(BOOL)arg1;
- (void)enterTriggerArea;
- (void)leaveTriggerArea;
- (id)liveTask;
- (void)refreshMultiStyleVisibleState:(BOOL)arg1;
- (void)tryDelayShowLikeEducation;
- (void)cancelDelayShowLikeEducation;
- (void)showLikeEducation;
- (void)showToolbarActionEducation:(unsigned long long)arg1;
- (void)onToolbarEducationTipsShow:(unsigned long long)arg1;
- (void)onToolbarEducationTipsClose:(unsigned long long)arg1;
- (void)tryDelayShowMoreEducation;
- (void)cancelDelayShowMoreEducation;
- (void)showMoreEducation;
- (void)tryDelayHideToolbarActionEducation;
- (void)cancelDelayHideToolbarActionEducation;
- (void)dissmissToolbarActionEducation;
- (void)resetUIOnToolbarEducationTipsShowUpdate:(BOOL)arg1 animation:(BOOL)arg2;
- (void)tryDelayShowFollowButton;
- (void)cancelDelayShowFollowButton;
- (void)showFollowButtonIfNeeded;
- (void)tryDelayShowBreatheAnimation;
- (void)cancelDelayShowBreatheAnimation;
- (void)showBreatheAnimation;
- (void)reportMultiStyleWidgetsExpose;
- (void)reportMultiStyleWidgetsExposeEnd;
- (void)invalidateUIDelayTimer;
- (void)muteVideo:(BOOL)arg1;
- (void)updateLoadingViewToCenter;
- (void)updateCoverViewBlurStateFeed;
- (CGSize)containerViewSize;
- (double)contentWidth;
- (double)bottomLine;
- (id)styleInfo;
- (void)updateDataSourceWithFeedContentVM:(id)arg1 style:(unsigned long long)arg2;
- (void)updateUIStyle;
- (void)updateProductStyleViewData;
- (BOOL)showTextViewTitle;
- (BOOL)showTitleLine;
- (BOOL)showCommentView;
- (BOOL)realShowBarrageCommentView;
- (BOOL)showProductView;
- (BOOL)showRecommendReason;
- (void)updateBackgoundAdImage;
- (void)refreshCommentViewVisibleState;
- (void)notifyShowCommentView;
- (void)refreshBarrageCommentViewVisibleState;
- (void)notifyShowBarrageCommentView;
- (void)notifyHideBarrageCommentView;
- (void)refreshProductPlugin;
- (void)notifyShowProductView;
- (void)delayHideProductStyleView;
- (void)notifyHideProductStyleView;
- (void)updateProductGuideRecommendTag;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (void)tapToEnterLivingViewDidTap:(id)arg1;
- (void)recommendReasonViewDidTap:(id)arg1;
- (void)liveTopicViewDidTap:(id)arg1;
- (void)mediaContainerViewDidTap:(id)arg1;
- (void)maskViewDidTap;
- (void)showLiveWithEnterAction:(long long)arg1 productInfo:(id)arg2 showSelfParams:(id)arg3;
- (void)showLiveWithEnterAction:(long long)arg1 productInfo:(id)arg2 showSelfParams:(id)arg3 enterFromSource:(unsigned long long)arg4;
- (void)showLiveWithEnterAction:(long long)arg1 productInfo:(id)arg2 showSelfParams:(id)arg3 jumpInfo:(id)arg4 enterFromSource:(unsigned long long)arg5;
- (void)willMoveToWindow:(id)arg1;
- (void)initDataLogic;
- (void)updateTitleLine;
- (void)updateTitleWidth;
- (unsigned long long)textViewTitleLineNumber;
- (void)lotteryInfoViewDidTap;
- (void)setupPanEnterPreviewParameters:(id)arg1;
- (void)didMoveToWindow;
- (void)pauseLive;
- (BOOL)isFullScreenLiveFeedAudioModuleActive;
- (void)setUserActionBeginTimestamp:(unsigned long long)arg1;
- (void)setUserActionEndTimestamp:(unsigned long long)arg1;
- (void)setPauseAfterFirstKeyframe:(BOOL)arg1;
- (void)setPipRootPlayerView:(id)arg1;
- (BOOL)enableFullScreenLockScreenPlay;
- (id)p2pManagerInstance;
- (BOOL)enableP2P;
- (void)onPlayBegin;
- (void)reportPlayPerformanceIfCan;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayChangeSize:(CGSize)arg1;
- (void)refreshForPlayChangeSize:(CGSize)arg1 force:(BOOL)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 pixelBufferRendered:(__CVBuffer *)arg2;
- (void)onNPSSurveyShowingInTargetRect:(CGRect)arg1 inCoordinateOfView:(id)arg2 isShowing:(BOOL)arg3;
- (void)applyNPSContainerTransformToTargetRect:(CGRect)arg1 inCoordinateOfView:(id)arg2;
- (double)npsSurveyFocusAspectRatio;
- (CGRect)npsSurveyFocusRectInMediaContainer;
- (BOOL)isLiveClosed;
- (void)updateLiveSize:(CGSize)arg1 force:(BOOL)arg2;
- (void)updatePlayerViewFrame:(CGRect)arg1;
- (void)updatePlayerViewFrame:(CGRect)arg1 force:(BOOL)arg2;
- (void)updatePlayerViewRect:(CGRect)arg1;
- (void)onPlayMuteForExternalPlaybackMode;
- (void)onPlayEventRecvAnchorSEIInfo:(id)arg1;
- (void)onPlayEventRecvLiveStreamServerTimeJsonDict:(id)arg1;
- (void)onPlayEventRecvLiveConnectMicSubTitleSeiData:(id)arg1;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)onLiveCDNPlayerViewEnterMinimizeMode:(id)arg1;
- (void)onLiveCDNPlayerViewEnterPIPMode:(id)arg1;
- (void)onLiveCDNPlayerViewExitPIPMode:(id)arg1;
- (CGRect)getLiveCDNPlayerViewPIPCurrentRenderViewFrame:(id)arg1;
- (double)getLiveCDNPlayerViewPIPRenderSizeHeightWidthPercent:(id)arg1;
- (void)onLiveCDNPlayerViewPlayStateChangedTo:(unsigned long long)arg1;
- (void)loadingRetry;
- (BOOL)finderFeedCellIsCurrentMediaPlaying;
- (BOOL)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (id)finderFeedCellUnSupportMinimizePlayToast;
- (id)finderFeedCellPlayerMeidaWrapIdentifier;
- (BOOL)finderFeedCellIsCurrentMediaMute;
- (id)finderFeedCellMinimizeContentView:(BOOL)arg1;
- (void)finderFeedCellRestoreMinimizeContentView:(id)arg1 forPlay:(BOOL)arg2;
- (void)onFinderFeedCellRestoreMinimizeCompleted;
- (void)recoverPlayerView:(id)arg1;
- (void)reAttachCurrentPlayerView;
- (void)onLongPressFinderFeedCellMedia;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedContentFeedbackSatisfactionQuestUpdate:(id)arg1;
- (void)onFeedContentFeedbackSatisfactionQuestFetchFail:(id)arg1;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4 disableReport:(BOOL)arg5;
- (void)onFinderContentLiveFriendLikeFeatureEnableUpdate:(id)arg1;
- (void)onFinderLiveFeedLikeCountUpdate:(unsigned long long)arg1;
- (void)onFinderLiveFeedLikeContactsListUpdate:(id)arg1;
- (void)onFinderLiveFeedLikeCheerIconUpdate;
- (void)onFinderLiveFeedAnchorStatusUpdate;
- (void)onFinderLiveFeedProductInfoUpdate;
- (void)onFinderLiveFeedSyncExtraMultiStyleInfoForProductCouponOrHotSelling;
- (void)onFinderLiveFeedSyncExtraMultiStyleInfoForBuyTogether;
- (void)onFinderLiveFeedSyncSearchComponent;
- (void)onFinderLiveFeedHotSellingThresholdUpdate;
- (void)onFinderLiveFeedLotteryInfoUpdate;
- (void)onFinderLiveFeedCarouselCommentRemoveAll;
- (void)onFinderLiveFeedCarouselCommentReceiveNew;
- (void)onFinderLiveFeedCarouselHighlightSummaryUpdate;
- (void)onFinderLiveFeedEnterLiveRoom;
- (void)onFinderLiveFeedQuitLiveRoom;
- (void)onFinderLiveFeedEnableRotateUpdate;
- (void)updateRotateButton;
- (void)onFinderLiveFeedBarrageCommentConfigUpdate;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (void)onPaidLiveTrialEndedForLiveId:(unsigned long long)arg1;
- (CGRect)getMediaViewFrame;
- (CGRect)getMediaCollectionViewFrame;
- (CGRect)getPlayerViewRectWithPlayerItemSize:(CGSize)arg1 playViewSize:(CGSize)arg2;
- (CGRect)getPlayerViewRect;
- (void)halfScreenMoveProgressChanged;
- (void)halfScreenShowStateChanged;
- (void)onLiveFeedStreamProductStyleViewClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
- (void)refreshRecommendReasonVisibleState;
- (void)notifyShowRecommendReason;
- (void)delayHideRecommendReason;
- (void)notifyHideRecommendReason;
- (void)updateRecommendReason;
- (void)onRecommendExpandActionTapped;
- (void)refreshTapEnterLiveViewVisibleState;
- (void)notifyShowTapEnterLiveView;
- (void)showTapEnterLiveView:(BOOL)arg1;
- (void)tryDelayDismissTapToEnterLiveView;
- (void)cancelDelayDismissTapToEnterLiveView;
- (void)dismissTapEnterLiveView;
- (void)tryDelayChangeTapToEnterButtonStyle;
- (void)cancelDelayChangeTapToEnterButtonStyle;
- (void)changeTapToEnterButtonStyle;
- (void)changeTapToEnterButtonStyle:(BOOL)arg1;
- (void)onSatisfactionQuestUpdated;
- (void)selectSatisfactionQuest:(id)arg1;
- (void)startDelayShowSatisfactionQuestTimerIfNeeded;
- (void)notifyShowSatisfactionQuestView;
- (void)notifyHideSatisfactionQuestView;
- (void)onSatisfactionQuestViewVisibleStateChange:(BOOL)arg1;
- (void)showBottomToastOnSatisfactionQuestAction:(int)arg1;
- (id)hardAdCornerView;
- (BOOL)isAdCornerInTextView;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)delayStartPlayPagPacketAnimation;
- (void)restartPagPacketAnimation;
- (unsigned long long)currentHighestEducationViewPriority;
- (void)showTapEducationView;
- (void)removeTapEducationView;
- (void)tryDelayShowTapToEnterEducation;
- (void)cancelDelayShowTapToEnterEducation;
- (void)tryDelayHideTapToEnterEducation;
- (void)cancelDelayHideTapToEnterEducation;
- (void)tryDelayShowLongPressEducationViewForSwitchIdentity;
- (void)cancelDelayShowLongPressEducationViewForSwitchIdentity;
- (void)showLongPressEducationViewForSwitchIdentity;
- (void)tryDelayHideLongPressEducationViewForSwitchIdentity;
- (void)removeLongPressEducationViewForSwitchIdentity;
- (void)tryDelayShowLongPressEducationViewForRepostShare;
- (void)cancelDelayShowLongPressEducationViewForRepostShare;
- (void)showLongPressEducationViewForRepostShare;
- (void)tryDelayHideLongPressEducationViewForRepostShare;
- (void)removeLongPressEducationViewForRepostShare;
- (BOOL)realShowLongPressEducationViewWithType:(unsigned long long)arg1;
- (void)realRemoveLongPressEducationView;
- (id)genJumpInfoPanelViewOnShowPosition:(int)arg1 width:(double)arg2;
- (BOOL)showTextPOIJumpInfoView;
- (void)updateTextPOIJumpInfoView;
- (BOOL)showSearchComponentView;
- (void)updateSearchComponentView;
- (double)jumpInfoPanelViewMaxWidth;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(int)arg2;
- (id)interactivePanelConfigParamsModel;
- (void)updateCarouselView;
- (BOOL)showCarouselView;
- (id)getCarouselViewReportDic;
- (void)onFeedStreamCarouselViewProductStyleClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
- (void)onFeedStreamCarouselViewTextLineStyleClicked;
- (void)onFeedStreamCarouselViewCommentStyleClicked;
- (void)onFeedStreamCarouselViewBuyTogetherClicked:(id)arg1;
- (void)onFeedStreamCarouselViewHeightUpdated;
- (void)onFeedStreamCarouselViewCarouselFinish:(id)arg1;
- (void)onFeedStreamCarouselViewContentUpdated;
- (void)reloadFriendLikeUI;
- (void)onFriendLikeViewChangeShowing;
- (void)removeShootingAnimation;
- (BOOL)updateFriendLikeData;
- (BOOL)showFriendLikeList;
- (double)friendLikeBarHeight;
- (BOOL)likeShootingAnimation;
- (void)tryPerformAvatarShootingAnimationAndDelayCarouselWithCompletion:(id /* block */)arg1 startView:(id)arg2 containerView:(id)arg3;
- (void)reportFriendLikeActionClick;
- (void)reportForwardActionClick;
- (void)onClickWeChatFriendDetail:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onRefreshFriendUI:(id)arg1;
- (void)finderFinderFriendLikeToolbarViewClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(BOOL)arg3;
- (void)clickRecommendUrl:(id)arg1;
- (id)barrageCommentViewContainer;
- (void)onBarrageCommentViewClose;
- (void)onBarrageCommentViewRequestReJoinLiveWithCompletion:(id /* block */)arg1;
- (void)reclaimPlayerView;
- (void)onSearchComponentClicked;
- (CGRect)getLiveCDNPlayerPIPFullScreenRenderViewFrame:(id)arg1;
- (void)onLiveCDNPlayerWillExitPIPMode:(id)arg1;
- (BOOL)checkEnableAutoStartPIPInBackground;
- (void)onLiveCDNPlayerPIPWillStartDisplay:(id)arg1;
- (void)onLiveCDNPlayerPIPDidStartDisplay:(id)arg1;
- (void)onLiveCDNPlayerPIPStopDisplay:(id)arg1 recover:(BOOL)arg2;
- (BOOL)checkLiveCDNPlayerViewSupportLockScreenPlay:(id)arg1;
- (id)onLiveCDNPlayerPIPGetContentVM;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)halfScreenDelegate;
- (void)setHalfScreenDelegate:(id)arg1;
- (id)bottomLineOffsetProvider;
- (void)setBottomLineOffsetProvider:(id)arg1;
- (BOOL)hideLiveTipsView;
- (void)setHideLiveTipsView:(BOOL)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)tapToEnterLivingView;
- (void)setTapToEnterLivingView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)interactContainerView;
- (void)setInteractContainerView:(id)arg1;
- (id)universalContainerView;
- (void)setUniversalContainerView:(id)arg1;
- (id)friendLikeView;
- (void)setFriendLikeView:(id)arg1;
- (unsigned long long)userActionBeginTimestamp;
- (unsigned long long)userActionEndTimestamp;
- (BOOL)pauseAfterFirstKeyframe;
- (BOOL)isFirstPlayByPreplay;
- (void)setIsFirstPlayByPreplay:(BOOL)arg1;
- (void)setLikeShootingAnimation:(BOOL)arg1;
- (BOOL)isMediaContentReady;
- (void)setIsMediaContentReady:(BOOL)arg1;
- (id)pipRootPlayerView;
- (id)reuseFeedStreamTaskId;
- (void)setReuseFeedStreamTaskId:(id)arg1;
- (CGRect)currPlayerViewRect;
- (void)setCurrPlayerViewRect:(CGRect)arg1;
- (id)liveTipsView;
- (void)setLiveTipsView:(id)arg1;
- (id)overMaskView;
- (void)setOverMaskView:(id)arg1;
- (id)overTipsView;
- (void)setOverTipsView:(id)arg1;
- (BOOL)canPlayInMinimizeMode;
- (void)setCanPlayInMinimizeMode:(BOOL)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)startPlayTimestamp;
- (void)setStartPlayTimestamp:(unsigned long long)arg1;
- (unsigned long long)realStartPlayTimestamp;
- (void)setRealStartPlayTimestamp:(unsigned long long)arg1;
- (unsigned long long)playerConnectTimestamp;
- (void)setPlayerConnectTimestamp:(unsigned long long)arg1;
- (id)previewLogic;
- (void)setPreviewLogic:(id)arg1;
- (id)mediaContainerView;
- (void)setMediaContainerView:(id)arg1;
- (CGSize)playerItemSize;
- (void)setPlayerItemSize:(CGSize)arg1;
- (void)setHiddenOnHalfHashTable:(id)arg1;
- (id)questView;
- (void)setQuestView:(id)arg1;
- (id)questDelayShowTimer;
- (void)setQuestDelayShowTimer:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (BOOL)isMultiStyleAppearing;
- (void)setIsMultiStyleAppearing:(BOOL)arg1;
- (id)likeAnimationView;
- (void)setLikeAnimationView:(id)arg1;
- (id)productStyleView;
- (void)setProductStyleView:(id)arg1;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (id)commentWidthProvider;
- (void)setCommentWidthProvider:(id)arg1;
- (id)connectMicView;
- (void)setConnectMicView:(id)arg1;
- (id)connectMicPkAtmosphereBackgroundView;
- (void)setConnectMicPkAtmosphereBackgroundView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (id)blurBackgroundView;
- (void)setBlurBackgroundView:(id)arg1;
- (id)blurBackgroundCoverImgView;
- (void)setBlurBackgroundCoverImgView:(id)arg1;
- (id)blurBackgroundAdImgView;
- (void)setBlurBackgroundAdImgView:(id)arg1;
- (id)productDelayShowTimer;
- (void)setProductDelayShowTimer:(id)arg1;
- (id)productDelayHideTimer;
- (void)setProductDelayHideTimer:(id)arg1;
- (id)commentViewDelayTimer;
- (void)setCommentViewDelayTimer:(id)arg1;
- (id)barrageCommentViewDelayTimer;
- (void)setBarrageCommentViewDelayTimer:(id)arg1;
- (unsigned long long)enterTriggerTime;
- (void)setEnterTriggerTime:(unsigned long long)arg1;
- (id)recommendReasonTextView;
- (void)setRecommendReasonTextView:(id)arg1;
- (id)recommendDelayShowTimer;
- (void)setRecommendDelayShowTimer:(id)arg1;
- (id)recommendDelayHideTimer;
- (void)setRecommendDelayHideTimer:(id)arg1;
- (BOOL)hideProductView;
- (void)setHideProductView:(BOOL)arg1;
- (id)tapToEnterLiveDelayShowTimer;
- (void)setTapToEnterLiveDelayShowTimer:(id)arg1;
- (BOOL)hideWidgetViews;
- (void)setHideWidgetViews:(BOOL)arg1;
- (void)setHardAdCornerView:(id)arg1;
- (id)pagPacketView;
- (void)setPagPacketView:(id)arg1;
- (id)pagPacketTipLabel;
- (void)setPagPacketTipLabel:(id)arg1;
- (id)pagPacketDelayPlayTimer;
- (void)setPagPacketDelayPlayTimer:(id)arg1;
- (id)tapEducationView;
- (void)setTapEducationView:(id)arg1;
- (id)longPressEducationView;
- (void)setLongPressEducationView:(id)arg1;
- (id)textTLJumpinfoView;
- (void)setTextTLJumpinfoView:(id)arg1;
- (id)searchComponentView;
- (void)setSearchComponentView:(id)arg1;
- (id)carouselView;
- (void)setCarouselView:(id)arg1;
- (id)shootingAnimationLogic;
- (void)setShootingAnimationLogic:(id)arg1;
- (BOOL)showingNPS;
- (void)setShowingNPS:(BOOL)arg1;
- (BOOL)npsSuppressesBarrage;
- (void)setNpsSuppressesBarrage:(BOOL)arg1;
- (id)barrageCommentView;
- (void)setBarrageCommentView:(id)arg1;
- (id)panEnterPreviewRenderSource;
- (void)setPanEnterPreviewRenderSource:(id)arg1;
- (id)rotateButton;
- (void)setRotateButton:(id)arg1;
- (id)innerRecommendReasonTextView;
- (void)setInnerRecommendReasonTextView:(id)arg1;
- (id)innerRecommendExpandActionLabel;
- (void)setInnerRecommendExpandActionLabel:(id)arg1;
- (id)innerRecommendReasonContainerView;
- (void)setInnerRecommendReasonContainerView:(id)arg1;
- (long long)innerRecommendLabelState;
- (void)setInnerRecommendLabelState:(long long)arg1;
- (id)innerRecommendReason;
- (void)setInnerRecommendReason:(id)arg1;
- (BOOL)keepDataLogicBeforeChangeToMinimizeMode;
- (void)setKeepDataLogicBeforeChangeToMinimizeMode:(BOOL)arg1;
- (BOOL)keepDataLogicDelayInLineBeforeRestoreFromPIPMode;
- (void)setKeepDataLogicDelayInLineBeforeRestoreFromPIPMode:(BOOL)arg1;
- (void)setInteractivePanelConfigParamsModel:(id)arg1;
- (void)setP2pManagerInstance:(id)arg1;
- (void).cxx_destruct;
@end
