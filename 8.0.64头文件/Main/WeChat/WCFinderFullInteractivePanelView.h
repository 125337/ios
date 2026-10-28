@interface WCFinderFullInteractivePanelView : UIView <WCFinderHeadInfoViewDelegate, WCFinderFullToolbarViewDelegate, WCFinderFriendLikeToolbarViewDelegate, WCFinderFeedContentTextClickActionDelegate, WCFinderJumpInfoPanelViewDelegate, WCFinderImageTextContainerViewDelegate, WCFinderPanelRingtoneBubbleViewDelegate, RichTextLayoutDelegate, WCFinderFeedContentVMExt, VideRingModifyExt, WCActionSheetDelegate, WCFinderPanelThumbEnhanceBubbleViewDelegate, WCFinderInteractionExt, WCFinderInteractiveCarouselViewDelegate, MMFinderFeedNoticeLogicDelegate, WCFinderInteractiveImageCommentCarouselViewDelegate>
{
    BOOL _hasAdGuideFollowBtnAppear; // +0x8
    BOOL _isJumpInfoAnimating; // +0x9
    BOOL _carouselAnimating; // +0xa
    BOOL _needGlobalUpdate; // +0xb
    BOOL _liveFeedHideAllWidgets; // +0xc
    id <WCFinderFullInteractivePanelViewDelegate> _delegate; // +0x10
    WCFinderFullScrollTextView * _textView; // +0x18
    WCFinderFeedContentTextView * _innerRecommendReasonTextView; // +0x20
    WCFinderFullToolbarView * _toolBarView; // +0x28
    NSMutableDictionary * _jumpInfoPanelDict; // +0x30
    InteractionLabel * _eventTitleLabel; // +0x38
    WCFinderImageTextContainerView * _poiView; // +0x40
    WCFinderHeadInfoEasyView * _headerView; // +0x48
    UIView<WCFinderFriendLikeToolbarViewProtocol><MMFinderFriendLikeShootingAnimationTargetProtocol> * _friendLikeToolbarView; // +0x50
    WCFinderCommonBottomSuspendView * _commonBottomSuspendView; // +0x58
    UIView * _hardAdCornerView; // +0x60
    UILabel * _createTimeLabel; // +0x68
    UILabel * _topicLabel; // +0x70
    UIImageView * _eventIconView; // +0x78
    InteractionLabel * _eventCountLabel; // +0x80
    WCFinderFeedWarningTipsView * _warningView; // +0x88
    UIImageView * _redPacketLinkIconView; // +0x90
    UILabel * _redPacketLinkLabel; // +0x98
    MMUIButton * _moreActionButton; // +0xa0
    WCFinderShadowBubbleView * _eduShadowBubbleView; // +0xa8
    WCFinderPanelThumbEnhanceBubbleView * _thumbEnhanceBubbleView; // +0xb0
    WCFinderPanelRecommendThankShareView * _recommendThankShareView; // +0xb8
    WCFinderPanelTipsBubbleView * _tipsBubbleView; // +0xc0
    UILabel * _filingNumberLabel; // +0xc8
    WCFinderLiveAudienceNoticeReporter * _liveNoticeReporter; // +0xd0
    MMFinderFeedNoticeLogic * _feedNoticeLogic; // +0xd8
    NSMutableSet * _tempHiddenViewSet; // +0xe0
    UIView * _cnyAdCornerView; // +0xe8
    WCFinderFeedBubbleView * _ringtoneBubbleView; // +0xf0
    double _startCarouselInterval; // +0xf8
    WCFinderInteractiveCarouselView * _carouselView; // +0x100
    WCFinderInteractivePanelConfigParamsModel * _paramsModel; // +0x108
    WCFinderFeedMembershipInfo * _membershipInfo; // +0x110
    WCFinderFriendLikeShootingAnimationLogic * _shootingAnimationLogic; // +0x118
    MMTimer * _carouselTimer; // +0x120
    NSHashTable * _carouselViewSet; // +0x128
    WCFinderShadowTipsView * _feedSourceTipsView; // +0x130
    WCFinderCommonTipsView * _lastTipsView; // +0x138
    MMUIButton * _memberFlagButton; // +0x140
    WCFinderOperateEntranceTipsView * _creatorEntraceDataTips; // +0x148
    UILongPressGestureRecognizer * _longPressGes; // +0x150
    WCFinderInteractiveImageCommentCarouselView * _imageCarouselView; // +0x158
    WCFinderCommonTipsView * _liveToolbarActionEduTips; // +0x160
}
+ (id)buildMemberFlagButton;
+ (id)dateFormatter;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setupGesture;
- (void)setParamsModel:(id)arg1;
- (void)layoutSubviews;
- (void)resetUIViewState;
- (id)accessibilityElements;
- (id)contentVM;
- (unsigned long long)toolBarStyle;
- (void)resetEduShadowBubbleView;
- (double)contentTopInView:(id)arg1;
- (double)contentTopViewY;
- (double)toolBarViewTopY;
- (id)contentTopView;
- (id)cnyAnimationView;
- (id)carouselViewSet;
- (id)eduShadowBubbleView;
- (id)headerView;
- (id)toolBarView;
- (id)createTimeLabel;
- (BOOL)shouldShowAdCorner;
- (id)hardAdCornerView;
- (id)cnyAdCornerView;
- (id)eventIconView;
- (id)feedSourceTipsView;
- (id)eventTitleLabel;
- (id)eventCountLabel;
- (id)poiView;
- (id)topicLabel;
- (id)createTopicLabel;
- (id)thumbEnhanceBubbleView;
- (id)warningView;
- (id)friendLikeToolbarView;
- (id)innerRecommendReasonTextView;
- (id)jumpInfoPanelDict;
- (id)jumpInfoViewList;
- (id)jumpInfoPanelViewOnShowPosition:(int)arg1;
- (id)genJumpInfoPanelViewOnShowPosition:(int)arg1 width:(double)arg2;
- (double)jumpInfoPanelViewMaxWidthOnShowPosition:(int)arg1;
- (void)changeAllJumpInfoPanelViewsAlpha:(double)arg1;
- (id)tempHiddenViewSet;
- (id)ringtoneBubbleView;
- (id)carouselView;
- (id)imageCarouselView;
- (id)jumpInfoCarouselView;
- (CGSize)cellIconSize;
- (id)redPacketLinkLabel;
- (id)redPacketLinkIconView;
- (id)liveNoticeReporter;
- (id)membershipInfo;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)showCollectionContentPrefix;
- (void)onClickEventAction;
- (void)onClickPOILabelAction;
- (void)onClickExtLinkAction;
- (void)onClickRedPacketLinkAction;
- (void)onClickThankForShareActionWithThank:(BOOL)arg1;
- (void)clickAvatar:(id)arg1;
- (void)clickNicknameWithContact:(id)arg1;
- (void)updateContactRegardfulTips;
- (void)showSpamTipsWithString:(id)arg1;
- (void)onHeaderMoreClickAction:(id)arg1;
- (void)onHeaderFollowClickAction:(id)arg1;
- (id)currentContentVM;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(BOOL)arg2 isFromCommentButton:(BOOL)arg3;
- (void)onClickToolbarRetryUploading:(id)arg1;
- (void)onClickToolbarCancelUploading:(id)arg1;
- (void)onRefreshToolbarUI:(id)arg1;
- (void)onRefreshFriendLikeUI:(id)arg1;
- (void)onRefreshToolbarUpdateFavDataFinished:(id)arg1;
- (void)onClickRealNameAction;
- (void)onWillClickToolbarLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)longPressLikeAction:(unsigned long long)arg1 longPressGes:(id)arg2 likeFlag:(int)arg3;
- (void)startLongPressLikeAnimationWithLikeFlag:(int)arg1;
- (void)tryPerformAvatarShootingAnimationAndDelayCarouselWithCompletion:(id /* block */)arg1;
- (void)updateToolbarContentWithContentVM:(id)arg1 privateStateChange:(BOOL)arg2;
- (void)onDidClickToolbarLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (BOOL)likeShootingAnimation;
- (void)updateAsyncRecommendReason;
- (void)updateShadowBubbleViewWithContentVM:(id)arg1 bubbleType:(unsigned int)arg2;
- (void)updateShadowBubbleViewWithContentVM:(id)arg1 bubbleType:(unsigned int)arg2 customTitle:(id)arg3;
- (double)getButtonCenterXWithBubbleType:(unsigned int)arg1;
- (void)reportBubbleViewWithType:(unsigned int)arg1 contentVM:(id)arg2;
- (BOOL)checkShouldShowBubbleViewWithType:(unsigned int)arg1 contentVM:(id)arg2;
- (void)markHasShownBubbleViewWithType:(unsigned int)arg1 contentVM:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onWillClickToolbarCollectionAction:(id)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)onClickToolbarShareAction:(id)arg1 shareButton:(id)arg2;
- (void)onClickToolbarFeedAllLikeAction:(id)arg1;
- (void)onClickToolbarFeedAllFavAction:(id)arg1;
- (void)onClickToolbarFeedAllViewedAction:(id)arg1;
- (BOOL)canShowTriangleShadowViewWithSourceType:(unsigned long long)arg1;
- (void)onClickWeChatFriendDetail:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onFriendLikeToolBarIsnertSelfSuccessful:(id)arg1;
- (void)finderFinderFriendLikeToolbarViewClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(BOOL)arg3;
- (void)onClickLikeToolBarThankState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimation:(unsigned long long)arg1 iconFrame:(CGRect)arg2;
- (void)friendLikeToolBarViewShowComboLikeTips;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)onFeedContentTextView:(id)arg1 clickText:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 longPressedText:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2 isTouchExpand:(BOOL)arg3;
- (double)calcuateToolBarViewWidth;
- (void)updateSubviewsStyle;
- (void)globalUpdateViewWithModel:(id)arg1;
- (void)adjustZPositionLayout;
- (void)hideJumpInfoPanelAboveDescIfNeed;
- (void)setHasReportCleanScreen:(BOOL)arg1;
- (BOOL)hasReportCleanScreen;
- (BOOL)checkShouldHideJumpInfoPanelView:(id)arg1 withRect:(CGRect)arg2;
- (double)_layoutMembershipTagViewFromOffset:(double)arg1;
- (double)cnyAdCornerViewBottom;
- (void)pureLayoutSubviews;
- (void)resetCarouselState;
- (void)setupCarouselAction;
- (void)reportCarouselExpt;
- (BOOL)checkCarouselState;
- (void)showTemplateCommentWordingWithDataItem:(id)arg1 nickname:(id)arg2 scene:(int)arg3 duration:(double)arg4 confirmBlock:(id /* block */)arg5;
- (id)getViewsToBeOverlapDetected;
- (void)setViewsToBeOverlapDetectedUserInteractionEnabled:(BOOL)arg1;
- (void)showGuideCommentSuspendViewByContent:(id)arg1 scene:(int)arg2 duration:(double)arg3;
- (void)showGuideRedPacketCreateSuspendViewByContent:(id)arg1 scene:(int)arg2 duration:(double)arg3;
- (void)showGuideEmotionSuspendViewByContent:(id)arg1 scene:(int)arg2 duration:(double)arg3;
- (void)showGuideCommentSuspendViewByContent:(id)arg1 scene:(int)arg2 duration:(double)arg3 leftImage:(id)arg4 leftWording:(id)arg5 rightTips:(id)arg6 rightTipsBtnBkColor:(id)arg7 rightTipsBtnFontColor:(id)arg8 detailBtnClickBlock:(id /* block */)arg9 reportParams:(id)arg10;
- (void)setCarouselView:(id)arg1 hidden:(BOOL)arg2;
- (void)startCarouseTimerPlayWithDelay:(double)arg1;
- (void)cancelCarouseTimerPlay;
- (void)timerPlayToCarouseAction;
- (void)tryPlayToCarouselNextView:(BOOL)arg1;
- (void)showRegardfulTips;
- (void)resetCarouselImageViewAnimatedStateIfNeeded;
- (void)animatedHideCarouselImageViewAndMarkNeverShow;
- (double)_layoutCarouselViewFromOffset:(double)arg1;
- (double)_layoutImageCommentCarouselViewFromOffset:(double)arg1;
- (double)_layoutJumpInfoBelowCarouselDescFromOffset:(double)arg1;
- (double)_layoutJumpInfoViewBelowDescriptionFromOffset:(double)arg1;
- (void)_layoutJumpInfoViewOnFeedTopLeft;
- (void)_layoutRelativePosJumpInfoView;
- (void)updateRelatedJumpInfoPanelViewFrame;
- (void)_changeTextViewHiddenStateIfNeeded;
- (double)_layoutJumpInfoViewOnFeedBottomFromOffset:(double)arg1;
- (double)_layoutHeaderViewAndToolbarFromOffset:(double)arg1;
- (void)onCellBeginDisplay;
- (void)onCellDidDisplay;
- (void)onCellDidEndDisplay;
- (void)willBeginHalfScreenShow;
- (void)didEndHalfScreenShow;
- (void)setupDiagnosisDataEntranceTips:(BOOL)arg1;
- (void)setAllViewAlphaExceptHeaderViewAndToolBar:(double)arg1;
- (void)setAllViewAlpha:(double)arg1 cxcept:(id)arg2;
- (double)_layoutRedPacketViewFromOffset:(double)arg1;
- (double)_layoutJumpInfoViewInCenterAboveDescriptionFromOffset:(double)arg1;
- (double)_layoutJumpInfoViewAboveDescriptionFromOffset:(double)arg1 showPosition:(int)arg2;
- (double)_layoutPanelRingtoneBubbleViewFromOffset:(double)arg1;
- (double)_layoutThumbLikeRecommendBubbleViewFromOffset:(double)arg1;
- (double)_layoutRecommendThankShareViewFromOffset:(double)arg1;
- (double)_layoutRecommendThankShareBubbleFromOffset:(double)arg1;
- (double)_layoutWarningViewFromOffset:(double)arg1;
- (double)_layoutFeedSourceTipsView:(double)arg1;
- (double)_layoutFriendLikeViewFromOffset:(double)arg1;
- (double)_layoutCNYAdCornerViewFromOffset:(double)arg1;
- (double)_layoutJumpInfoAboveAdCornerFromOffset:(double)arg1;
- (double)_layoutInnerRecommendReasonFromOffset:(double)arg1;
- (double)_layoutHotTopicLabelFromOffset:(double)arg1;
- (double)_layoutTextAreaFromOffset:(double)arg1;
- (void)setDescriptionAreaTransparent:(BOOL)arg1;
- (id)descriptionAreaViewList;
- (void)updateHeaderViewStateWithHiddenAuthorAppendDescLabelWithParamsModel:(id)arg1;
- (BOOL)shouldShowFriendLikeToolbarViewWithContentVM:(id)arg1 toolBarStyle:(unsigned long long)arg2;
- (BOOL)shouldShowNoticeViewWithContentVM:(id)arg1 hiddenLiveNoticeTableView:(BOOL)arg2;
- (BOOL)shouldShowAdEntryViewWithAdItem:(id)arg1 toolBarStyle:(unsigned long long)arg2;
- (void)tryShowHeaderViewFollowAuthorBtnWithParams:(id)arg1;
- (BOOL)shouldShowHeaderViewFollowBtnWithParams:(id)arg1;
- (BOOL)shouldDelayShowAvatarJumpInfo;
- (void)tryShowFriendLikeViewFollowLikeBtnWithParams:(id)arg1;
- (void)updateFriendLikeToolbarViewWithContentVM:(id)arg1;
- (void)_updateHeaderViewWithContact:(id)arg1 showLiveState:(BOOL)arg2;
- (void)updateToolbarContentWithContentVM:(id)arg1 toolbarDisableConfig:(unsigned long long)arg2;
- (void)textViewDismissHighLightText;
- (BOOL)textViewContentLabelEnableResponseReadMoreAction;
- (void)updateLiveNoticeViewWithParamsModel:(id)arg1 showPosition:(int)arg2;
- (void)liveNoticeViewHiddenWithContentVM:(id)arg1 showPosition:(int)arg2;
- (void)onLiveFeedSatisfactionQuestVisibleStateChange:(BOOL)arg1;
- (void)updateAdGuideBtnWithParams:(id)arg1;
- (BOOL)needHighlightAdGuideButton:(id)arg1;
- (BOOL)shouldHiddenHeadInfoViewFollowBtn;
- (void)onVideoPlayStateChanged:(BOOL)arg1;
- (void)tryShowMoreActionEduTips;
- (void)tryShowLongVideoLaterListenEduTips;
- (void)emitCarouselWithTrigger:(unsigned long long)arg1;
- (void)changeAllCarouselViewsAlpha:(double)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)changeJumpInfoViewArrayToShow:(id)arg1 animateDuration:(double)arg2;
- (void)completePlayAction;
- (BOOL)hideHeaderViewWithToolBarStyle:(unsigned long long)arg1;
- (void)updateLastestLiveInfoWithContentVM:(id)arg1;
- (id)interactivePanelConfigParamsModel;
- (BOOL)videoPauseState;
- (id)videoTid;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(unsigned long long)arg2;
- (void)onFinderJumpInfoViewCustomExposure:(id)arg1;
- (void)onFinderJumpInfoViewCustomClicked:(id)arg1;
- (void)onFinderJumpInfoPanelViewHeightChanged:(id)arg1;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 changeToShow:(BOOL)arg3 animated:(BOOL)arg4;
- (void)jumpInfoView:(id)arg1 changToShow:(BOOL)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 needChangeToJumpInfoStyleWithIndex:(unsigned long long)arg3;
- (void)onFinderJumpInfoView:(id)arg1 InPanelView:(id)arg2 needChangeToPhase:(unsigned long long)arg3;
- (void)expandCarouselView:(id)arg1 toPhase:(unsigned long long)arg2;
- (void)onShowBigFollowBtnInJumpInfoPanelView:(id)arg1;
- (void)hiddenBigFollowBtnInJumpInfoPanelView:(id)arg1;
- (id)feedNoticeLogic;
- (id)getFeedNoticeLogicModel;
- (void)onFinderJumpInfoView:(id)arg1 finderUsername:(id)arg2 didClickLiveNoticeInfo:(id)arg3 isShowDetail:(BOOL)arg4;
- (void)preLoadConcertPageSheet:(id)arg1;
- (void)onFeedNoticeLogicHideLiveAppointment:(id)arg1;
- (void)onClickIsLIvingAndEnterAction;
- (void)onJumpInfoPanelViewClickCollectionBubble:(id)arg1;
- (void)onFeedContentWarnWordingChanged:(id)arg1;
- (void)onFeedLastestLiveInfoUpdate:(id)arg1;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedHotCommentChanged:(id)arg1;
- (void)onFeedMediaCommentChanged:(id)arg1;
- (void)bottomScrollUpAndShowMutexFeatureView:(unsigned long long)arg1;
- (void)removeShootingAvatarViewIfNeeded;
- (void)onFeedOriginalSoundInfoChanged:(id)arg1;
- (void)updateRingtoneBubbleView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onFeedContentShowPromoteTips:(id)arg1;
- (void)onFeedWarningTipsChange:(id)arg1;
- (void)onFeedRecommendCommentChange:(id)arg1;
- (void)onClickImageTextView:(long long)arg1;
- (id)userAvatarSnapshot;
- (void)startExposeAction;
- (void)enterTriggerArea;
- (void)leaveTriggerArea;
- (void)resetBootomSuspendView;
- (void)endExposeAction;
- (void)cleanCurrentFeedCarouselState;
- (void)startCarouselTimer;
- (BOOL)carouselTimerRunning;
- (void)pauseCarouselTimer;
- (void)updateCarouselHotCommentWithContentVM:(id)arg1;
- (id)showingHotComment;
- (void)updateCarouselJumpWithContentVM:(id)arg1;
- (void)onClickPanelRingtoneBubbleViewSetRingtoneButton;
- (void)willMoveToWindow:(id)arg1;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (CGPoint)getToolbarFavButtonCenter;
- (id)toolBarActionViewWithType:(unsigned long long)arg1;
- (id)forbidClickColor;
- (id)fontOfSize:(double)arg1;
- (id)dynamicFontOfSize:(double)arg1;
- (void)onFinderFeedInteractionResponse:(id)arg1;
- (void)onCarouselClickSetRingToneButton;
- (void)onCarouselClickHotComment:(id)arg1;
- (void)onCarouselClickMultiImageComment:(id)arg1;
- (void)onCarouselClickBannerJumpInfo:(id)arg1 style:(id)arg2;
- (void)onCarouselClickButtonJumpInfo:(id)arg1 style:(id)arg2;
- (void)onCarouselView:(id)arg1 hidden:(BOOL)arg2;
- (void)onCarouselClickBannerJumpInfo:(id)arg1;
- (void)onCarouselJumpCarouselViewWillShow;
- (void)onLongPress:(id)arg1;
- (void)finderPannelThumbEnhanceBubbleView:(id)arg1 clickAction:(id)arg2;
- (void)finderInteractiveImageCommentCarouselView:(id)arg1 didClickWithCurrentComment:(id)arg2;
- (BOOL)isShowingTips;
- (void)showAutoScrollTips;
- (void)autoScrollTipsClickAction;
- (BOOL)showLiveToolbarActionEducationTips:(unsigned long long)arg1 onClose:(id /* block */)arg2;
- (void)dismissLiveToolbarActionEducationTips;
- (BOOL)pushSwipeGestureShouldBeginWithLocation:(CGPoint)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (void)setInnerRecommendReasonTextView:(id)arg1;
- (void)setToolBarView:(id)arg1;
- (void)setJumpInfoPanelDict:(id)arg1;
- (void)setEventTitleLabel:(id)arg1;
- (void)setPoiView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (BOOL)hasAdGuideFollowBtnAppear;
- (void)setHasAdGuideFollowBtnAppear:(BOOL)arg1;
- (void)setFriendLikeToolbarView:(id)arg1;
- (id)commonBottomSuspendView;
- (void)setCommonBottomSuspendView:(id)arg1;
- (void)setHardAdCornerView:(id)arg1;
- (void)setCreateTimeLabel:(id)arg1;
- (void)setTopicLabel:(id)arg1;
- (void)setEventIconView:(id)arg1;
- (void)setEventCountLabel:(id)arg1;
- (void)setWarningView:(id)arg1;
- (void)setRedPacketLinkIconView:(id)arg1;
- (void)setRedPacketLinkLabel:(id)arg1;
- (id)moreActionButton;
- (void)setMoreActionButton:(id)arg1;
- (void)setEduShadowBubbleView:(id)arg1;
- (void)setThumbEnhanceBubbleView:(id)arg1;
- (id)recommendThankShareView;
- (void)setRecommendThankShareView:(id)arg1;
- (id)tipsBubbleView;
- (void)setTipsBubbleView:(id)arg1;
- (id)filingNumberLabel;
- (void)setFilingNumberLabel:(id)arg1;
- (void)setLiveNoticeReporter:(id)arg1;
- (void)setFeedNoticeLogic:(id)arg1;
- (void)setTempHiddenViewSet:(id)arg1;
- (void)setCnyAdCornerView:(id)arg1;
- (void)setRingtoneBubbleView:(id)arg1;
- (double)startCarouselInterval;
- (void)setStartCarouselInterval:(double)arg1;
- (void)setCarouselView:(id)arg1;
- (BOOL)isJumpInfoAnimating;
- (void)setIsJumpInfoAnimating:(BOOL)arg1;
- (BOOL)carouselAnimating;
- (void)setCarouselAnimating:(BOOL)arg1;
- (BOOL)needGlobalUpdate;
- (void)setNeedGlobalUpdate:(BOOL)arg1;
- (id)paramsModel;
- (void)setMembershipInfo:(id)arg1;
- (id)shootingAnimationLogic;
- (void)setShootingAnimationLogic:(id)arg1;
- (id)carouselTimer;
- (void)setCarouselTimer:(id)arg1;
- (void)setCarouselViewSet:(id)arg1;
- (void)setFeedSourceTipsView:(id)arg1;
- (id)lastTipsView;
- (void)setLastTipsView:(id)arg1;
- (id)memberFlagButton;
- (void)setMemberFlagButton:(id)arg1;
- (BOOL)liveFeedHideAllWidgets;
- (void)setLiveFeedHideAllWidgets:(BOOL)arg1;
- (id)creatorEntraceDataTips;
- (void)setCreatorEntraceDataTips:(id)arg1;
- (id)longPressGes;
- (void)setLongPressGes:(id)arg1;
- (void)setImageCarouselView:(id)arg1;
- (id)liveToolbarActionEduTips;
- (void)setLiveToolbarActionEduTips:(id)arg1;
- (void).cxx_destruct;
@end
