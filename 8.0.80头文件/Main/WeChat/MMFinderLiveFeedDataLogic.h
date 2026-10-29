@interface MMFinderLiveFeedDataLogic : NSObject <WCFinderLiveExt, MMLiveBaseTaskDelegate, MMLiveTaskMgrExt, MMFinderLiveFeedStreamCommentLogicDelegate, MMFinderLiveFeedStreamHighlightSummaryLogicDelegate>
{
    BOOL _forbidAppendSvrComment; // +0x8
    BOOL _hasReceivePollingExtraInfo; // +0x9
    BOOL _hasReceiveGetLiveMsg; // +0xa
    int _commentScene; // +0xc
    id <MMFinderLiveFeedDataLogicDelegate> _delegate; // +0x10
    NSString * _logicID; // +0x18
    unsigned long long _state; // +0x20
    MMLiveFeedStreamTask * _liveTask; // +0x28
    MMFinderLiveFeedTransferLogic * _transferLogic; // +0x30
    unsigned long long _likeCount; // +0x38
    unsigned long long _displayLikeCount; // +0x40
    FinderLiveCheerInfo * _cheerInfo; // +0x48
    FinderWindowProductInfo * _productInfo; // +0x50
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo * _hotSellingBubble; // +0x58
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo * _couponBubble; // +0x60
    id /* block */ _onTaskReady; // +0x68
    id /* block */ _onTaskStop; // +0x70
    id /* block */ _onTaskJoinLiveFinished; // +0x78
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x80
    FinderLiveMilestoneLotteryInfo * _milestoneLotteryInfo; // +0x88
    MMFinderLiveFeedStreamCarouselConfig * _carouselConf; // +0x90
    MMFinderLiveFeedStreamCommentLogic * _carouselCommentLogic; // +0x98
    MMFinderLiveFeedStreamHighlightSummaryLogic * _carouselHighlightSummaryLogic; // +0xa0
    id /* block */ _getReuseTaskIdBlock; // +0xa8
    id /* block */ _getCacheMicUsersListBlock; // +0xb0
    WCFinderFeedContentVM * _contentVM; // +0xb8
    WCFinderDataItem * _dataItem; // +0xc0
    WCFinderFeedStreamPreviewLiveCGI * _joinLiveCgi; // +0xc8
    WCFinderGetFeedAsyncInfoCGI * _asyncLoadInfoCgi; // +0xd0
    unsigned long long _uiStyle; // +0xd8
    long long _previewDelaySec; // +0xe0
    NSData * _multiStyleInfoData; // +0xe8
    FeedsPreviewLiveMultiStyleInfo * _multiStyleInfo; // +0xf0
    unsigned long long _inlineTime; // +0xf8
    unsigned long long _lastTapEducationTs; // +0x100
    MMFinderLiveAnchorStatusItem * _anchorStatusItem; // +0x108
    FinderLivePromoteMsgInfo * _curPromoteMsgInfo; // +0x110
    NSData * _currentExtBuffer; // +0x118
    NSData * _currentSyncContext; // +0x120
    WCFinderLiveElectronicCommerceRoomConfigCGI * _fetchECConfigCgi; // +0x128
    FinderLiveEcGetLiveConfigResponse * _ecConfigResp; // +0x130
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_BuyTogetherInfo * _buyTogetherBubble; // +0x138
    _TtC6WeChat36MMFinderLiveUIComponentLoadingReport * _componentLoadingReporter; // +0x140
    unsigned long long _loadingReportedFlag; // +0x148
    MMTimer * _fetchSearchComponentTimer; // +0x150
}
- (id)init;
- (void)prepareForReuse;
- (void)dealloc;
- (void)prepare:(id)arg1 scene:(int)arg2;
- (id)dataItem;
- (BOOL)enable;
- (void)start;
- (void)setInline;
- (void)setOffline;
- (void)stop;
- (void)onEnterLiveRoom;
- (void)onQuitLiveRoom;
- (BOOL)isBanComment;
- (BOOL)isBanLike;
- (id)finderTaskId;
- (void)handleSEIMsg:(id)arg1;
- (void)handleAnchorSEIInfo:(id)arg1;
- (void)handleLiveStreamServerTimeJsonDict:(id)arg1;
- (void)handleLiveConnectMicSubTitleSeiData:(id)arg1;
- (id)transferLogic;
- (BOOL)enableProductGuideRecommendTag;
- (id)recommendReasonConf;
- (BOOL)enableRecommendReason;
- (BOOL)enableRecommendReasonShowWithFriendLike;
- (unsigned long long)recommendReasonDelayShowSec;
- (unsigned long long)recommendReasonDelayHideSec;
- (id)poiConf;
- (BOOL)enableShowPoiJumpInfo;
- (unsigned long long)hotSellingThreshold;
- (void)internalGetECRoomConfig;
- (BOOL)productDataValidToShow;
- (id)reuseFeedStreamTaskId;
- (id)cacheMicUsersList;
- (void)reJoinLiveWithCompletion:(id /* block */)arg1;
- (void)internalJoinLive;
- (void)internalJoinLiveWithCompletion:(id /* block */)arg1;
- (id)productGuideStyleConf;
- (id)productCardStyleConf;
- (id)commentStyleConf;
- (id)connectMicStyleConf;
- (id)productExpandedCardStyleConf;
- (id)productCouponOrHotSellingStyleConf;
- (BOOL)enableCarouselBuyTogether;
- (id)carouselTitleConf;
- (id)carouselCommentConf;
- (id)searchComponentConf;
- (id)carouselHighlightSummaryConf;
- (BOOL)carouselHasSubStyle:(unsigned long long)arg1;
- (id)carouselSubStyleCtrl:(unsigned long long)arg1;
- (BOOL)enableCarouselStyle;
- (id)carouselModels;
- (id)carouselProductGuideStyleAddModel;
- (id)carouselProductGuideStyleRemoveModel;
- (id)carouselProductCouponOrhotSellingModel;
- (id)carouselBuyTogetherModel;
- (id)carouselHighlightSummaryModel;
- (id)guideStyleRecommendTag;
- (BOOL)hasShownEducationInDays:(unsigned long long)arg1;
- (id)likeEducationConf;
- (BOOL)enableShowLikeEducation;
- (unsigned long long)likeEducationDelaySeconds;
- (id)moreEducationConf;
- (BOOL)enableShowMoreEducation;
- (unsigned long long)moreEducationDelaySeconds;
- (id)barrageCommentConf;
- (BOOL)enableShowBarrageComment;
- (BOOL)isServerEnableFeedBarrage;
- (BOOL)isUserEnableFeedBarrage;
- (void)updateUserEnableFeedBarrage:(BOOL)arg1;
- (unsigned long long)barrageCommentRowCount;
- (unsigned long long)barrageCommentDisplayMilliseconds;
- (id)tableCommentConf;
- (BOOL)enableShowTableComment;
- (unsigned long long)delayShowTableCommentSecond;
- (void)startGetLiveMsgIfNeeded;
- (void)setForbidAppendSvrComment:(BOOL)arg1;
- (void)internalAsyncLoadInfo;
- (void)startPollingIfNeeded;
- (void)stopPollingIfNeeded;
- (id)pollingFetchRequestBufferByCmdId:(long long)arg1;
- (void)prepareFetchSearchComponentTimerIfNeeded;
- (void)fetchSearchComponent;
- (void)fetchSearchComponentForBackToPreviewIfNeeded;
- (void)handleFinderLivePromoteMsgInfoUpdate:(id)arg1;
- (void)handleGetLiveMsgPollingAdjust:(id)arg1;
- (void)handleAnchorStatusUpdate:(id)arg1 layerDisplayInfo:(id)arg2 fromJoinLive:(BOOL)arg3;
- (void)handleLikeCountChanged:(unsigned long long)arg1;
- (void)handleLiveTemplateInfoList:(id)arg1 fromJoinLive:(BOOL)arg2;
- (void)handleLiveAppMsgList:(id)arg1;
- (void)handleFinderLiveLotteryInfo:(id)arg1;
- (void)handleFinderLiveMilestoneLotteryInfo:(id)arg1;
- (void)handleFinderLiveMicInfo:(id)arg1;
- (void)handleGetLiveMsgExtraClientConfigUpdated;
- (void)handleFinderLiveConnectMicNewApply:(id)arg1 applyAnchor:(id)arg2 acceptorAnchor:(id)arg3 pkroomAnchors:(id)arg4 applyId:(id)arg5 randomMicBuffer:(id)arg6 expiredTime:(unsigned long long)arg7 applyFinderObject:(id)arg8;
- (void)handleFinderLiveConnectMicNewAccept:(id)arg1 pkroomAnchors:(id)arg2 sessionId:(id)arg3 vroomId:(id)arg4 vroomIdVersion:(unsigned long long)arg5;
- (void)handleFinderLiveConnectMicNewClose:(id)arg1 sdkUserId:(id)arg2 applyId:(id)arg3 sessionId:(id)arg4;
- (void)handleFinderLiveConnectMicBattleStatusInfo:(id)arg1 serverUnixEpochTimeInSeconds:(unsigned long long)arg2;
- (void)handleFinderLiveConnectMicPkStatusInfo:(id)arg1 fromFinderContact:(id)arg2 connectMicFinderContact:(id)arg3 liveRoomImages:(id)arg4 anchorConnectMicStatus:(long long)arg5 sessionId:(id)arg6;
- (void)checkOtherRoomMicAudienceList:(id)arg1 anchorSdkUserId:(id)arg2;
- (void)handleFinderLiveConnectMicAcceptInfo:(id)arg1 sessionId:(id)arg2 withVideo:(BOOL)arg3;
- (void)handleLiveSDKInfoInJoinLiveResp:(id)arg1;
- (void)handleFinderLiveMicConfigInLiveMicInfo:(id)arg1 fromFirstJoinLive:(BOOL)arg2;
- (void)checkBattleSettingsInLiveMicInfo:(id)arg1;
- (void)handleLikeCheerInfo:(id)arg1 fromGetLiveMsg:(BOOL)arg2;
- (void)handleFinderLiveConnectMicCloseInfo:(id)arg1 sessionId:(id)arg2 closeMicInfo:(id)arg3;
- (void)handleLiveMicInfoInJoinLiveResponse:(id)arg1 isMultiAnchorMicEnabled:(BOOL)arg2 isAudiencePkEnable:(BOOL)arg3 isDisplayMicLocationEnabled:(BOOL)arg4;
- (void)handleLiveMicAnchorBattleInfoInJoinLiveResponse:(id)arg1 micSessionId:(id)arg2 vroomId:(id)arg3;
- (void)handleOtherRoomMicAudienceListInJoinLiveResponse:(id)arg1 anchorSdkUserId:(id)arg2;
- (void)handleFinderLiveCommentHotWordInfo:(id)arg1;
- (void)onGetPollingFetchEventWithTaskId:(id)arg1 cmdId:(long long)arg2 respBuffer:(id)arg3 ret:(unsigned int)arg4 requestIntervalSec:(double)arg5;
- (void)handleFinderLiveFeedFriendLikeInfo:(id)arg1;
- (void)handleFinderLiveFeedPreviewMultiStyle:(id)arg1;
- (void)updateFinderLiveFeedPreviewMultiStyleForProductCouponOrHotSelling:(id)arg1;
- (void)updateFinderLiveFeedPreviewMultiStyleForBuyTogether:(id)arg1;
- (void)handleSearchComponentInfo:(id)arg1 nextInterval:(double)arg2;
- (void)onGetPollingFetchFinishWithTaskId:(id)arg1 errorCode:(int)arg2 errorDesc:(id)arg3;
- (void)onGetFinderLiveFeedStreamMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 nextRequestInterval:(unsigned int)arg11 currentLikeCount:(unsigned long long)arg12 extraClientConfigUpdated:(BOOL)arg13 liveGameData:(id)arg14 liveMicInfo:(id)arg15 respContext:(id)arg16 finderLiveAppMsgList:(id)arg17 templateInfoList:(id)arg18 commentArray:(id)arg19;
- (unsigned long long)delayShowProductSecond;
- (unsigned long long)delayHideProductSecond;
- (unsigned long long)delayShowCommentSecond;
- (id)styleSevenConf;
- (unsigned long long)delayShowTapEnterLiveViewSecond;
- (unsigned long long)delayDismissTapEnterLiveViewSecond;
- (double)tapToEnterBtnStrongStyleDelayInterval;
- (BOOL)showTitleLine;
- (double)showFollowBtnDelay;
- (BOOL)enableBreatheAnimation;
- (double)breatheAnimationPreviewDelay;
- (double)breatheAnimationDuration;
- (double)breatheAnimationInterval;
- (void)updateLastTapEducationShowTs;
- (id)styleNineConf;
- (BOOL)enableShowTapToEnterEduView;
- (double)tapToEnterEducationPreviewDelay;
- (double)tapToEnterEducationDuration;
- (id)styleFourteenConf;
- (BOOL)enableShowLongPressSwitchIdentityEduView;
- (void)reportShowLongPressSwitchIdentityEduView;
- (double)longPressSwitchIdentityEducationDelayedShowDuration;
- (double)longPressSwitchIdentityEducationDelayedDismissDuration;
- (id)styleSixTeenConf;
- (BOOL)enableShowLongPressShareEduView;
- (void)reportShowLongPressShareEducation;
- (double)longPressShareEducationDelayedShowDuration;
- (double)longPressShareEducationDelayedDismissDuration;
- (id)styleEighteenConf;
- (BOOL)enableShowLottery;
- (id)supportLotteryPrizeTypes;
- (void)reuseLiveRoomDataToFeedStreamIfNeeded;
- (void)reuseLiveRoomConnectToFeedStreamIfNeeded:(id)arg1;
- (void)reuseLiveRoomCommentToFeedStreamIfNeeded:(id)arg1;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 SEIMicMsgInfoUpdated:(id)arg2 listChanged:(BOOL)arg3 showMicTopic:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 otherConnectMicAnchor:(id)arg2 anchorSeiStatus:(unsigned int)arg3 anchorSEIInfo:(id)arg4;
- (void)onLiveTask:(id)arg1 SEIConnectMicUserInfoListUpdated:(id)arg2 listChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 audioRoomSceneChangedTo:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 audioRoomSEIMicMsgInfoUpdated:(id)arg2 listChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 didChangeViewCapturing:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 liveStreamServerTimeUpdated:(unsigned long long)arg2;
- (void)onLiveTaskLandScapeEnabledChanged:(id)arg1;
- (BOOL)enableSatisfactionQuest;
- (unsigned long long)delayShowSatisfactionQuestMs;
- (void)fetchSatisfactionQuestIfNeeded;
- (void)commitSatisfactionQuest:(int)arg1;
- (void)reportRecommendReasonExpose;
- (void)reportBrandLogoExpose;
- (void)reportTapEnterLiveBtnExposeStart;
- (void)reportTapEnterLiveBtnExposeEnd;
- (void)reportSatisfactionQuestExposeStart;
- (void)reportSatisfactionQuestExposeEnd;
- (void)reportLotteryExposeStart:(id)arg1;
- (void)reportLotteryExposeEnd;
- (void)reportLotteryClick;
- (void)reportTextJumpInfoViewExposeStart;
- (void)reportTextJumpInfoViewExposeEnd;
- (void)reportTextJumpInfoViewExposeClick;
- (void)reportSearchJumpInfoViewExpose;
- (void)reportSearchJumpInfoViewClicked;
- (void)reportWidgetUILoading_Product:(id)arg1;
- (void)reportWidgetUILoading_Comment:(unsigned long long)arg1;
- (void)reportWidgetUILoading_Mic;
- (void)reportTapEducationExposeStart;
- (void)reportTapEducationExposeEnd;
- (void)reportEnterLiveAnimationType:(unsigned long long)arg1 actionType:(unsigned long long)arg2;
- (void)reportToolbarActionEducationExposeStart:(unsigned long long)arg1;
- (void)reportToolbarActionEducationExposeEnd:(unsigned long long)arg1;
- (void)reportRotateButtonExpose;
- (void)reportRotateButtonClick:(BOOL)arg1;
- (void)reportRotateLandscapeStart;
- (void)reportRotateLandscapeEnd:(unsigned long long)arg1;
- (BOOL)enableFriendLike;
- (BOOL)showFriendLikeList;
- (void)onFeedStreamCommentLogicReceiveNewCarouselItems;
- (void)onFeedStreamCommentLogicRemoveAll;
- (void)onFeedStreamHighlightSummaryLogicUpdate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)logicID;
- (void)setLogicID:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (void)setTransferLogic:(id)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (unsigned long long)displayLikeCount;
- (void)setDisplayLikeCount:(unsigned long long)arg1;
- (id)cheerInfo;
- (void)setCheerInfo:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)hotSellingBubble;
- (void)setHotSellingBubble:(id)arg1;
- (id)couponBubble;
- (void)setCouponBubble:(id)arg1;
- (id /* block */)onTaskReady;
- (void)setOnTaskReady:(id /* block */)arg1;
- (id /* block */)onTaskStop;
- (void)setOnTaskStop:(id /* block */)arg1;
- (id /* block */)onTaskJoinLiveFinished;
- (void)setOnTaskJoinLiveFinished:(id /* block */)arg1;
- (BOOL)forbidAppendSvrComment;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)milestoneLotteryInfo;
- (void)setMilestoneLotteryInfo:(id)arg1;
- (id)carouselConf;
- (void)setCarouselConf:(id)arg1;
- (id)carouselCommentLogic;
- (void)setCarouselCommentLogic:(id)arg1;
- (id)carouselHighlightSummaryLogic;
- (void)setCarouselHighlightSummaryLogic:(id)arg1;
- (id /* block */)getReuseTaskIdBlock;
- (void)setGetReuseTaskIdBlock:(id /* block */)arg1;
- (id /* block */)getCacheMicUsersListBlock;
- (void)setGetCacheMicUsersListBlock:(id /* block */)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void)setDataItem:(id)arg1;
- (id)joinLiveCgi;
- (void)setJoinLiveCgi:(id)arg1;
- (id)asyncLoadInfoCgi;
- (void)setAsyncLoadInfoCgi:(id)arg1;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
- (long long)previewDelaySec;
- (void)setPreviewDelaySec:(long long)arg1;
- (id)multiStyleInfoData;
- (void)setMultiStyleInfoData:(id)arg1;
- (id)multiStyleInfo;
- (void)setMultiStyleInfo:(id)arg1;
- (unsigned long long)inlineTime;
- (void)setInlineTime:(unsigned long long)arg1;
- (unsigned long long)lastTapEducationTs;
- (void)setLastTapEducationTs:(unsigned long long)arg1;
- (id)anchorStatusItem;
- (void)setAnchorStatusItem:(id)arg1;
- (id)curPromoteMsgInfo;
- (void)setCurPromoteMsgInfo:(id)arg1;
- (id)currentExtBuffer;
- (void)setCurrentExtBuffer:(id)arg1;
- (id)currentSyncContext;
- (void)setCurrentSyncContext:(id)arg1;
- (id)fetchECConfigCgi;
- (void)setFetchECConfigCgi:(id)arg1;
- (id)ecConfigResp;
- (void)setEcConfigResp:(id)arg1;
- (id)buyTogetherBubble;
- (void)setBuyTogetherBubble:(id)arg1;
- (id)componentLoadingReporter;
- (void)setComponentLoadingReporter:(id)arg1;
- (BOOL)hasReceivePollingExtraInfo;
- (void)setHasReceivePollingExtraInfo:(BOOL)arg1;
- (BOOL)hasReceiveGetLiveMsg;
- (void)setHasReceiveGetLiveMsg:(BOOL)arg1;
- (unsigned long long)loadingReportedFlag;
- (void)setLoadingReportedFlag:(unsigned long long)arg1;
- (id)fetchSearchComponentTimer;
- (void)setFetchSearchComponentTimer:(id)arg1;
- (void).cxx_destruct;
@end
