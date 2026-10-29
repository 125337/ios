@interface WCFinderFeedLiveCollectionViewCell : UICollectionViewCell <MMLiveCDNPlayerViewDelegate, WCFinderFeedCollectionViewCellProtocol, WCFinderFeedContentVMExt, WCFinderPanelTapToEnterLivingViewDelegate, MMLiveCDNPlayerViewExt, WCFinderHalfScreenListenProtocol, MMFinderLiveFeedDataLogicDelegate, MMFinderLiveFeedStreamProductStyleViewDelegate, PAGViewListener, WCFinderJumpInfoPanelViewDelegate, MMFinderLiveFeedStreamCarouselViewDelegate>
{
    BOOL _hideLiveTipsView; // +0x8
    BOOL _pauseAfterFirstKeyframe; // +0x9
    BOOL _isFirstPlayByPreplay; // +0xa
    BOOL _isMediaContentReady; // +0xb
    BOOL _isAppearing; // +0xc
    BOOL _hideProductView; // +0xd
    BOOL _hideWidgetViews; // +0xe
    id <WCFinderFeedContentMediaActionProtocol> _delegate; // +0x10
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate; // +0x18
    MMLiveCDNPlayerView * _playerView; // +0x20
    WCFinderPanelTapToEnterLivingView * _tapToEnterLivingView; // +0x28
    UIImageView * _containerView; // +0x30
    WCFinderFullNewMultiMediaView * _mediaView; // +0x38
    unsigned long long _userActionBeginTimestamp; // +0x40
    unsigned long long _userActionEndTimestamp; // +0x48
    WCFinderLiveNowView * _liveTipsView; // +0x50
    UIView * _overMaskView; // +0x58
    WCFinderLiveNowView * _overTipsView; // +0x60
    WCFinderFeedContentVM * _contentVM; // +0x68
    unsigned long long _style; // +0x70
    unsigned long long _startPlayTimestamp; // +0x78
    unsigned long long _realStartPlayTimestamp; // +0x80
    unsigned long long _playerConnectTimestamp; // +0x88
    MMFinderLiveFeedPreviewLogic * _previewLogic; // +0x90
    UIView * _mediaContainerView; // +0x98
    UIView * _interactContainerView; // +0xa0
    NSHashTable * _hiddenOnHalfHashTable; // +0xa8
    MMFinderFeedStreamSatisfactionQuestView * _questView; // +0xb0
    MMTimer * _questDelayShowTimer; // +0xb8
    MMFinderLiveFeedDataLogic * _dataLogic; // +0xc0
    MMFinderLiveFeedLikeAnimationView * _likeAnimationView; // +0xc8
    MMFinderLiveFeedStreamProductStyleView * _productStyleView; // +0xd0
    MMFinderLiveFeedStreamCommentView * _commentView; // +0xd8
    MMFinderLiveFeedStreamConnectMicUserInfoView * _connectMicView; // +0xe0
    UIImageView * _connectMicPkAtmosphereBackgroundView; // +0xe8
    WCFinderFullScrollTextView * _textView; // +0xf0
    CAGradientLayer * _bottomGradientLayer; // +0xf8
    MMLiveAvatarBackgroundView * _blurBackgroundView; // +0x100
    MMWebImageView * _blurBackgroundCoverImgView; // +0x108
    MMWebImageView * _blurBackgroundAdImgView; // +0x110
    RichTextView * _innerRecommendReasonTextView; // +0x118
    UIView * _innerRecommendReasonContainerView; // +0x120
    MMTimer * _productDelayShowTimer; // +0x128
    MMTimer * _productDelayHideTimer; // +0x130
    MMTimer * _commentViewDelayTimer; // +0x138
    unsigned long long _enterTriggerTime; // +0x140
    WCFinderDynamicRichTextView * _recommendReasonTextView; // +0x148
    MMTimer * _recommendDelayShowTimer; // +0x150
    MMTimer * _recommendDelayHideTimer; // +0x158
    MMTimer * _tapToEnterLiveDelayShowTimer; // +0x160
    UIView * _hardAdCornerView; // +0x168
    PAGView * _pagPacketView; // +0x170
    UILabel * _pagPacketTipLabel; // +0x178
    MMTimer * _pagPacketDelayPlayTimer; // +0x180
    MMFinderLiveGenericFullTapEducationView * _tapEducationView; // +0x188
    MMFinderLiveGenericLongPressEducationView * _longPressEducationView; // +0x190
    WCFinderJumpInfoPanelView * _textTLJumpinfoView; // +0x198
    MMFinderLiveFeedStreamCarouselView * _carouselView; // +0x1a0
    CGSize _playerItemSize; // +0x1a8
}
+ (BOOL)shouldPlayOnUserInteractionBegin;
+ (BOOL)shouldPreRender;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)dataItem;
- (id)hiddenOnHalfHashTable;
- (void)initializeOrUpdateViews;
- (void)updateInnerReason;
- (void)updateLayout;
- (void)layoutPacketView;
- (double)layoutProductAndTextView:(double)arg1 contentWidth:(double)arg2 containerWidth:(double)arg3 horizontalMargin:(double)arg4;
- (TextWidgetVerticalLayoutAttrs)textWidgetLayoutHierarchyWithView:(id)arg1;
- (BOOL)isProductBubbleStyle;
- (BOOL)isProductGuideStyle;
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
- (void)refreshVisibleState:(BOOL)arg1;
- (void)tryDelayShowFollowButton;
- (void)cancelDelayShowFollowButton;
- (void)showFollowButtonIfNeeded;
- (void)tryDelayShowBreatheAnimation;
- (void)cancelDelayShowBreatheAnimation;
- (void)showBreatheAnimation;
- (void)reportWidgetsExposeEnd;
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
- (BOOL)showProductView;
- (BOOL)showRecommendReason;
- (void)updateBackgoundAdImage;
- (void)refreshCommentViewVisibleState;
- (void)notifyShowCommentView;
- (void)refreshProductPlugin;
- (void)notifyShowProductView;
- (void)delayHideProductStyleView;
- (void)notifyHideProductStyleView;
- (void)updateProductGuideRecommendTag;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (void)tipsViewDidTap;
- (void)maskViewDidTap;
- (void)showLiveWithEnterAction:(long long)arg1 productInfo:(id)arg2 showSelfParams:(id)arg3;
- (void)willMoveToWindow:(id)arg1;
- (void)initDataLogic;
- (void)updateTitleLine;
- (unsigned long long)textViewTitleLineNumber;
- (void)lotteryInfoViewDidTap;
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
- (void)updateLiveSize:(CGSize)arg1;
- (void)updatePlayerViewFrame:(CGRect)arg1;
- (void)onPlayMuteForExternalPlaybackMode;
- (void)onPlayEventRecvAnchorSEIInfo:(id)arg1;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)loadingRetry;
- (BOOL)finderFeedCellIsCurrentMediaPlaying;
- (BOOL)finderFeedCellIsCurrentMediaSupportMinimizePlay;
- (id)finderFeedCellUnSupportMinimizePlayToast;
- (id)finderFeedCellPlayerMeidaWrapIdentifier;
- (BOOL)finderFeedCellIsCurrentMediaMute;
- (id)finderFeedCellMinimizeContentView:(BOOL)arg1;
- (void)onLongPressFinderFeedCellMedia;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedContentFeedbackSatisfactionQuestUpdate:(id)arg1;
- (void)onFeedContentFeedbackSatisfactionQuestFetchFail:(id)arg1;
- (void)onFeedLiveContentDislikeAction:(id)arg1;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4 disableReport:(BOOL)arg5;
- (void)onFinderLiveFeedLikeCountUpdate:(unsigned long long)arg1;
- (void)onFinderLiveFeedLikeContactsListUpdate:(id)arg1;
- (void)onFinderLiveFeedLikeCheerIconUpdate;
- (void)onFinderLiveFeedAnchorStatusUpdate;
- (void)onFinderLiveFeedProductInfoUpdate;
- (void)onFinderLiveFeedSyncExtraMultiStyleInfo;
- (void)onFinderLiveFeedHotSellingThresholdUpdate;
- (void)onFinderLiveFeedLotteryInfoUpdate;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (void)onPaidLiveTrialEndedForLiveId:(unsigned long long)arg1;
- (CGRect)getPlayerViewRect;
- (void)halfScreenMoveProgressChanged;
- (void)halfScreenShowStateChanged;
- (void)onLiveFeedStreamProductStyleViewClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
- (void)refreshRecommendReasonVisibleState;
- (void)notifyShowRecommendReason;
- (void)delayHideRecommendReason;
- (void)notifyHideRecommendReason;
- (void)updateRecommendReason;
- (void)refreshTapEnterLiveViewVisibleState;
- (void)notifyShowTapEnterLiveView;
- (void)showTapEnterLiveView:(BOOL)arg1;
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
- (void)removeLongPressEducationViewForSwitchIdentity;
- (void)tryDelayShowLongPressEducationViewForRepostShare;
- (void)cancelDelayShowLongPressEducationViewForRepostShare;
- (void)showLongPressEducationViewForRepostShare;
- (void)removeLongPressEducationViewForRepostShare;
- (BOOL)realShowLongPressEducationViewWithType:(unsigned long long)arg1;
- (void)realRemoveLongPressEducationView;
- (void)tryDelayShowToolBarShareBtn;
- (void)cancelDelayShowToolBarShareBtn;
- (void)updateToolBarShareBtnVisible:(id)arg1;
- (id)genJumpInfoPanelViewOnShowPosition:(int)arg1 width:(double)arg2;
- (BOOL)showJumpInfoView;
- (void)updateJumpInfoView;
- (double)jumpInfoPanelViewMaxWidth;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(unsigned long long)arg2;
- (void)updateCarouselView;
- (BOOL)showCarouselView;
- (void)onFeedStreamCarouselViewProductStyleClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
- (void)onFeedStreamCarouselViewHeightUpdated;
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
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (unsigned long long)userActionBeginTimestamp;
- (unsigned long long)userActionEndTimestamp;
- (BOOL)pauseAfterFirstKeyframe;
- (BOOL)isFirstPlayByPreplay;
- (void)setIsFirstPlayByPreplay:(BOOL)arg1;
- (BOOL)isMediaContentReady;
- (void)setIsMediaContentReady:(BOOL)arg1;
- (id)liveTipsView;
- (void)setLiveTipsView:(id)arg1;
- (id)overMaskView;
- (void)setOverMaskView:(id)arg1;
- (id)overTipsView;
- (void)setOverTipsView:(id)arg1;
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
- (id)interactContainerView;
- (void)setInteractContainerView:(id)arg1;
- (CGSize)playerItemSize;
- (void)setPlayerItemSize:(CGSize)arg1;
- (void)setHiddenOnHalfHashTable:(id)arg1;
- (id)questView;
- (void)setQuestView:(id)arg1;
- (id)questDelayShowTimer;
- (void)setQuestDelayShowTimer:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (BOOL)isAppearing;
- (void)setIsAppearing:(BOOL)arg1;
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
- (id)innerRecommendReasonTextView;
- (void)setInnerRecommendReasonTextView:(id)arg1;
- (id)innerRecommendReasonContainerView;
- (void)setInnerRecommendReasonContainerView:(id)arg1;
- (id)productDelayShowTimer;
- (void)setProductDelayShowTimer:(id)arg1;
- (id)productDelayHideTimer;
- (void)setProductDelayHideTimer:(id)arg1;
- (id)commentViewDelayTimer;
- (void)setCommentViewDelayTimer:(id)arg1;
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
- (id)carouselView;
- (void)setCarouselView:(id)arg1;
- (void).cxx_destruct;
@end

