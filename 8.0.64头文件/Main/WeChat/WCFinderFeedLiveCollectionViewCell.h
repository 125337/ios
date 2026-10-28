@interface WCFinderFeedLiveCollectionViewCell : WCFinderFeedLiveBaseCollectionViewCell <MMLiveCDNPlayerViewDelegate, WCFinderFeedCollectionViewCellProtocol, WCFinderFeedContentVMExt, WCFinderPanelTapToEnterLivingViewDelegate, MMLiveCDNPlayerViewExt, WCFinderHalfScreenListenProtocol, MMFinderLiveFeedDataLogicDelegate, MMFinderLiveFeedStreamProductStyleViewDelegate, PAGViewListener, WCFinderJumpInfoPanelViewDelegate, MMFinderLiveFeedStreamCarouselViewDelegate, WCFinderFriendLikeToolbarViewDelegate, MMFinderLiveFeedStreamBarrageCommentViewDelegate>
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
    BOOL _keepDataLogicBeforeChangeToMinimizeMode; // +0x12
    id <WCFinderFeedContentMediaActionProtocol> _delegate; // +0x18
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate; // +0x20
    MMLiveCDNPlayerView * _playerView; // +0x28
    WCFinderPanelTapToEnterLivingView * _tapToEnterLivingView; // +0x30
    UIImageView * _containerView; // +0x38
    UIView * _interactContainerView; // +0x40
    UIView * _universalContainerView; // +0x48
    WCFinderFriendLikeToolbarView * _friendLikeView; // +0x50
    unsigned long long _userActionBeginTimestamp; // +0x58
    unsigned long long _userActionEndTimestamp; // +0x60
    WCFinderLiveNowView * _liveTipsView; // +0x68
    UIView * _overMaskView; // +0x70
    WCFinderLiveNowView * _overTipsView; // +0x78
    WCFinderFeedContentVM * _contentVM; // +0x80
    unsigned long long _style; // +0x88
    unsigned long long _startPlayTimestamp; // +0x90
    unsigned long long _realStartPlayTimestamp; // +0x98
    unsigned long long _playerConnectTimestamp; // +0xa0
    MMFinderLiveFeedPreviewLogic * _previewLogic; // +0xa8
    UIView * _mediaContainerView; // +0xb0
    NSHashTable * _hiddenOnHalfHashTable; // +0xb8
    MMFinderFeedStreamSatisfactionQuestView * _questView; // +0xc0
    MMTimer * _questDelayShowTimer; // +0xc8
    MMFinderLiveFeedDataLogic * _dataLogic; // +0xd0
    MMFinderLiveFeedLikeAnimationView * _likeAnimationView; // +0xd8
    MMFinderLiveFeedStreamProductStyleView * _productStyleView; // +0xe0
    MMFinderLiveFeedStreamCommentView * _commentView; // +0xe8
    MMFinderLiveFeedStreamConnectMicUserInfoView * _connectMicView; // +0xf0
    UIImageView * _connectMicPkAtmosphereBackgroundView; // +0xf8
    WCFinderFullScrollTextView * _textView; // +0x100
    CAGradientLayer * _bottomGradientLayer; // +0x108
    MMLiveAvatarBackgroundView * _blurBackgroundView; // +0x110
    MMWebImageView * _blurBackgroundCoverImgView; // +0x118
    MMWebImageView * _blurBackgroundAdImgView; // +0x120
    MMTimer * _productDelayShowTimer; // +0x128
    MMTimer * _productDelayHideTimer; // +0x130
    MMTimer * _commentViewDelayTimer; // +0x138
    MMTimer * _barrageCommentViewDelayTimer; // +0x140
    unsigned long long _enterTriggerTime; // +0x148
    WCFinderDynamicRichTextView * _recommendReasonTextView; // +0x150
    MMTimer * _recommendDelayShowTimer; // +0x158
    MMTimer * _recommendDelayHideTimer; // +0x160
    MMTimer * _tapToEnterLiveDelayShowTimer; // +0x168
    UIView * _hardAdCornerView; // +0x170
    PAGView * _pagPacketView; // +0x178
    UILabel * _pagPacketTipLabel; // +0x180
    MMTimer * _pagPacketDelayPlayTimer; // +0x188
    MMFinderLiveGenericFullTapEducationView * _tapEducationView; // +0x190
    MMFinderLiveGenericLongPressEducationView * _longPressEducationView; // +0x198
    WCFinderJumpInfoPanelView * _textTLJumpinfoView; // +0x1a0
    WCFinderJumpInfoPanelView * _rightBottomJumpInfoView; // +0x1a8
    MMFinderLiveFeedStreamCarouselView * _carouselView; // +0x1b0
    WCFinderFriendLikeShootingAnimationLogic * _shootingAnimationLogic; // +0x1b8
    MMFinderLiveFeedStreamBarrageCommentView * _barrageCommentView; // +0x1c0
    MMLivePanEnterPreviewRenderSource * _panEnterPreviewRenderSource; // +0x1c8
    UIButton * _rotateButton; // +0x1d0
    RichTextView * _innerRecommendReasonTextView; // +0x1d8
    MMUILabel * _innerRecommendExpandActionLabel; // +0x1e0
    UIView * _innerRecommendReasonContainerView; // +0x1e8
    long long _innerRecommendLabelState; // +0x1f0
    NSString * _innerRecommendReason; // +0x1f8
    WCFinderInteractivePanelConfigParamsModel * _interactivePanelConfigParamsModel; // +0x200
    CGSize _playerItemSize; // +0x208
}
+ (BOOL)shouldPlayOnUserInteractionBegin;
+ (BOOL)shouldPreRender;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)dataItem;
- (id)hiddenOnHalfHashTable;
- (void)initializeOrUpdateViews;
- (void)checkAndInitPlayerView;
- (void)initInnerRecommendReasonView;
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
- (BOOL)showBarrageCommentView;
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
- (void)setUserActionBeginTimestamp:(unsigned long long)arg1;
- (void)setUserActionEndTimestamp:(unsigned long long)arg1;
- (void)setPauseAfterFirstKeyframe:(BOOL)arg1;
- (void)onPlayBegin;
- (void)reportPlayPerformanceIfCan;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayChangeSize:(CGSize)arg1;
- (void)onLiveCDNPlayerItem:(id)arg1 pixelBufferRendered:(__CVBuffer *)arg2;
- (void)onNPSSurveyChangingFrame:(CGRect)arg1 isShowing:(BOOL)arg2;
- (BOOL)isLiveClosed;
- (void)updateLiveSize:(CGSize)arg1;
- (void)updatePlayerViewFrame:(CGRect)arg1;
- (void)updatePlayerViewFrame:(CGRect)arg1 force:(BOOL)arg2;
- (void)onPlayMuteForExternalPlaybackMode;
- (void)onPlayEventRecvAnchorSEIInfo:(id)arg1;
- (void)onPlayEventRecvLiveStreamServerTimeJsonDict:(id)arg1;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)onLiveCDNPlayerViewEnterMinimizeMode:(id)arg1;
- (void)loadingRetry;
- (BOOL)finderFeedCellIsCurrentMediaPlaying;
- (BOOL)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (id)finderFeedCellUnSupportMinimizePlayToast;
- (id)finderFeedCellPlayerMeidaWrapIdentifier;
- (BOOL)finderFeedCellIsCurrentMediaMute;
- (id)finderFeedCellMinimizeContentView:(BOOL)arg1;
- (void)finderFeedCellRestoreMinimizeContentView:(id)arg1 forPlay:(BOOL)arg2;
- (void)onLongPressFinderFeedCellMedia;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedContentFeedbackSatisfactionQuestUpdate:(id)arg1;
- (void)onFeedContentFeedbackSatisfactionQuestFetchFail:(id)arg1;
- (void)onFeedLiveContentDislikeAction:(id)arg1;
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
- (void)onFinderLiveFeedHotSellingThresholdUpdate;
- (void)onFinderLiveFeedLotteryInfoUpdate;
- (void)onFinderLiveFeedCarouselCommentRemoveAll;
- (void)onFinderLiveFeedCarouselCommentReceiveNew;
- (void)onFinderLiveFeedEnterLiveRoom;
- (void)onFinderLiveFeedQuitLiveRoom;
- (void)onFinderLiveFeedEnableRotateUpdate;
- (void)updateRotateButton;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (void)onPaidLiveTrialEndedForLiveId:(unsigned long long)arg1;
- (CGRect)getMediaViewFrame;
- (CGRect)getMediaCollectionViewFrame;
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
- (BOOL)showRightBottomJumpInfoView;
- (void)updateRightBottomJumpInfoView;
- (double)jumpInfoPanelViewMaxWidth;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(unsigned long long)arg2;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 changeToShow:(BOOL)arg3 animated:(BOOL)arg4;
- (id)interactivePanelConfigParamsModel;
- (void)updateCarouselView;
- (BOOL)showCarouselView;
- (void)onFeedStreamCarouselViewProductStyleClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
- (void)onFeedStreamCarouselViewTextLineStyleClicked;
- (void)onFeedStreamCarouselViewCommentStyleClicked;
- (void)onFeedStreamCarouselViewBuyTogetherClicked:(id)arg1;
- (void)onFeedStreamCarouselViewHeightUpdated;
- (void)onFeedStreamCarouselViewCarouselFinish:(id)arg1;
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
- (void)reclaimPlayerView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)halfScreenDelegate;
- (void)setHalfScreenDelegate:(id)arg1;
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
- (id)rightBottomJumpInfoView;
- (void)setRightBottomJumpInfoView:(id)arg1;
- (id)carouselView;
- (void)setCarouselView:(id)arg1;
- (id)shootingAnimationLogic;
- (void)setShootingAnimationLogic:(id)arg1;
- (BOOL)showingNPS;
- (void)setShowingNPS:(BOOL)arg1;
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
- (void)setInteractivePanelConfigParamsModel:(id)arg1;
- (void).cxx_destruct;
@end
