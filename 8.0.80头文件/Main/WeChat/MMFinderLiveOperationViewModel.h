@interface MMFinderLiveOperationViewModel : NSObject <WCFinderLiveExt, MMFinderLiveBottomButtonStyleManagerDelegate>
{
    BOOL _didJoinLiveRoom; // +0x8
    BOOL _didEnterLiveRoom; // +0x9
    BOOL _isClearScreen; // +0xa
    BOOL _isInputViewShowing; // +0xb
    BOOL _shouldShowGameLiveAngelBtn; // +0xc
    BOOL _isRestrictVideoRectMode; // +0xd
    BOOL _isShouldShowNewHeatValueStyle; // +0xe
    BOOL _shouldShowHeatValue; // +0xf
    BOOL _isKtvPlayerCountExposed; // +0x10
    BOOL _liveRewardEnabled; // +0x11
    BOOL _isEditTopic; // +0x12
    BOOL _isAssumingAudienceCommentEnabled; // +0x13
    BOOL _canShowShoppingTips; // +0x14
    BOOL _canShowShoppingButton; // +0x15
    BOOL _canShowBottomButtons; // +0x16
    BOOL _isMusicSettingButtonEnabled; // +0x17
    BOOL _isCameraOperationButtonEnabled; // +0x18
    BOOL _isAnchorClapButtonEnabled; // +0x19
    BOOL _isLiveShoppingButtonEnabled; // +0x1a
    BOOL _isLiveGiftButtonEnabled; // +0x1b
    BOOL _isLiveGameButtonEnabled; // +0x1c
    BOOL _isLikeButtonEnabled; // +0x1d
    BOOL _isLiveLotteryEnabled; // +0x1e
    BOOL _isLivePrizeButtonEnabled; // +0x1f
    BOOL _isLiveRedPacketButtonEnabled; // +0x20
    BOOL _isLiveScreenSharingButtonEnabled; // +0x21
    BOOL _isLiveScreenSharingButtonEnableInited; // +0x22
    BOOL _isLiveConnectMicButtonEnabled; // +0x23
    BOOL _isTestLiveMode; // +0x24
    BOOL _isLiveQuickSendGiftButtonEnabled; // +0x25
    BOOL _isShakeForLike; // +0x26
    BOOL _isLiveGameButtonButtonHighLighted; // +0x27
    BOOL _canGameButtonHighlightedByTeamup; // +0x28
    BOOL _canGameButtonHighlightedByPromote; // +0x29
    BOOL _liveInThreeDimensionalDirecting; // +0x2a
    BOOL _selfIsThreeDimensionalDirector; // +0x2b
    BOOL _isNeverJoinFanclub; // +0x2c
    BOOL _isLiveTrialTimeout; // +0x2d
    BOOL _isLiveTrialTimeoutWhenJoinLive; // +0x2e
    BOOL _isTrialTimeExpand; // +0x2f
    BOOL _canShowMultiPlayerPageControl; // +0x30
    BOOL _isLiveKTVSongButtonEnabled; // +0x31
    BOOL _needHideKTVLiveMode; // +0x32
    BOOL _isLiveRoomInteractiveHomePageTransitionEnable; // +0x33
    BOOL _isShowAdsIconLiveTimeout; // +0x34
    BOOL _isBottomButtonFontStyleSmall; // +0x35
    BOOL _isProductSizeAssistantPanelExtended; // +0x36
    BOOL _hasPreloadRewardGiftList; // +0x37
    BOOL _hasEventLiveUpdateNotify; // +0x38
    BOOL _anchorFriendLikeOperationPending; // +0x39
    unsigned int _liveExtFlag; // +0x3c
    unsigned int _liveInfoExtFlag; // +0x40
    unsigned int _ktvContentId; // +0x44
    MMFinderLiveOperationView * _operationView; // +0x48
    MMFinderLiveTaskId * _taskId; // +0x50
    WCFinderDataItem * _finderDataItem; // +0x58
    MMFinderJoinLiveContext * _joinLiveContext; // +0x60
    unsigned long long _uiMode; // +0x68
    long long _currentOrientation; // +0x70
    unsigned long long _onlineUserCount; // +0x78
    unsigned long long _ktvPlayerCount; // +0x80
    unsigned long long _onlineViewCount; // +0x88
    unsigned long long _rewardWecoinCnt; // +0x90
    unsigned long long _rewardTotalAmountInHeat; // +0x98
    unsigned long long _heatValue; // +0xa0
    NSString * _liveHeatValueStr; // +0xa8
    unsigned long long _paidUserCount; // +0xb0
    LiveOnlineInfo * _onlineBarInfo; // +0xb8
    NSString * _liveOnlineCountStr; // +0xc0
    MMLiveVoteViewModel * _voteVM; // +0xc8
    MMFinderLiveGoodsItem * _currentDisplayGoodsItem; // +0xd0
    MMFinderLiveAdsItem * _currentDisplayAdsItem; // +0xd8
    FinderShopCouponInfo * _currentDisplayCouponInfo; // +0xe0
    long long _liveToolsButtonState; // +0xe8
    long long _anchorPromoteButtonState; // +0xf0
    FinderLiveCheerInfo * _cheerInfo; // +0xf8
    FinderLiveAdInfo * _liveAdInfo; // +0x100
    MMLiveHotAnimationViewModel * _hotAnimationVM; // +0x108
    MMFinderLiveRewardSendingLogic * _rewardSendingLogic; // +0x110
    MMFinderLiveRewardRecievingLogic * _rewardRecievingLogic; // +0x118
    MMFinderLiveRewardFreeGiftManager * _freeGiftManager; // +0x120
    MMFinderLiveLotteryPacketDisplayLogic * _lotteryPacketDisplayLogic; // +0x128
    MMFinderLiveLotteryDisplayLogic * _lotteryDisplayLogic; // +0x130
    MMLiveLikeAnimationUtil * _audienceSelflikeAnimationUtil; // +0x138
    MMLiveLikeAnimationUtil * _audienceOtherLikeAnimationUtil; // +0x140
    MMLiveLikeAnimationUtil * _anchorlikeAnimationUtil; // +0x148
    MMLiveLikeAnimationUtil * _doubleClickedlikeAnimationUtil; // +0x150
    MMLiveLikePlayUtil * _anchorLikePlayUtil; // +0x158
    MMAudienceLiveLikePlayUtil * _audienceLikePlayUtil; // +0x160
    MMLiveLikeClapVoicePlayQueue * _likeClapVoicePlayQueue; // +0x168
    unsigned long long _maxLikeCountOnce; // +0x170
    long long _likeMode; // +0x178
    FinderLiveGamePlayTogether_AudienceThreeDimensionalTipsInfo * _threeDimensionalTipsInfo; // +0x180
    NSString * _playTogetherBubbleWording; // +0x188
    NSString * _gameFrameSetRootId; // +0x190
    NSString * _gamePkgAppId; // +0x198
    NSString * _gamePkgAppPath; // +0x1a0
    FinderJumpInfo * _playTogetherIconJumpInfo; // +0x1a8
    unsigned long long _livePaymentType; // +0x1b0
    FinderLiveRewardWishListInfo * _rewardWishListInfo; // +0x1b8
    FinderLiveGiftWallInfo * _giftWallInfo; // +0x1c0
    FinderLiveGiftStarBannerInfo * _giftStarBannerInfo; // +0x1c8
    InteractionWishConfig * _currentInteractionWishinfo; // +0x1d0
    FinderLiveBoardEventSubTitle * _boardEventSubTitle; // +0x1d8
    NSString * _finderLiveLogoUrl; // +0x1e0
    NSArray * _brandLogoUrls; // +0x1e8
    MMFinderLiveRecommendUserSendGiftInfo * _recommendUserSendGiftInfo; // +0x1f0
    MMFinderLivePackageGiftRecommendInfo * _packageNewGiftRecommendInfo; // +0x1f8
    MMFinderLivePackageGiftRecommendInfo * _packageExpireGiftRecommendInfo; // +0x200
    MMFinderLivePackageGiftRecommendInfo * _packageNewFreeGiftRecommendInfo; // +0x208
    MMFinderLiveRewardGiftItem * _exposedGiftItem; // +0x210
    MMFinderLiveSyncPromotionInfo * _promotionInfo; // +0x218
    FinderLiveFunctionReminderNotificationInfo * _reminderNotificationInfo; // +0x220
    id /* block */ _getBottomButtonQueryBlock; // +0x228
    id /* block */ _getAllBottomButtonsQueryBlock; // +0x230
    double _bottomButtonOffsetY; // +0x238
    double _bottomLabelHeight; // +0x240
    unsigned long long _curForwardCount; // +0x248
    unsigned long long _curRealnameLikeCount; // +0x250
    NSString * _friendLikeCntString; // +0x258
    double _bottomDescFont; // +0x260
    unsigned long long _friendLikeCountRevision; // +0x268
    FinderJumpInfo * _liteAppCardInfo; // +0x270
    FinderJumpInfo * _anchorRealtimeDataPanelInfo; // +0x278
    FinderJumpInfo * _productSizeAssistantPanelInfo; // +0x280
    FinderWindowProductInfo * _productSizeAssistantProductInfo; // +0x288
    id /* block */ _productSizeAssistantExposeBlock; // +0x290
    id /* block */ _productSizeAssistantClickBlock; // +0x298
    id /* block */ _productSizeAssistantContentClickBlock; // +0x2a0
    double _productSizeAssistantPanelFoldedHeight; // +0x2a8
    NSData * _lastRecommendProductNotifyLastBuffer; // +0x2b0
    NSData * _lastRecommendGameNotifyLastBuffer; // +0x2b8
    NSData * _lastReplaySubscriptionLastBuffer; // +0x2c0
    id <WCFinderRedDotInterfaceProtocol> _redDotMgr; // +0x2c8
    WCFinderLiveStarterReporter * _starterReporter; // +0x2d0
    NSMutableSet * _reportedExposePathSet; // +0x2d8
    NSMutableDictionary * _cachedTipsIdDict; // +0x2e0
    MMFinderLiveBottomButtonStyleManager * _bottomButtonStyleManager; // +0x2e8
    MMFinderLiveOperationBottomButtonAnimator * _bottomButtonAnimator; // +0x2f0
    NSMutableDictionary * _bottomButtonOriginalIconMap; // +0x2f8
    NSMutableSet * _bannedButtonTypes; // +0x300
    NSMutableSet * _customStyleButtonTypes; // +0x308
    NSMutableDictionary * _bottomButtonStyleConfigReportDict; // +0x310
    NSString * _forwardCntString; // +0x318
    NSString * _likeCntString; // +0x320
    double _lastFriendLikeSelfOpTimestamp; // +0x328
    unsigned long long _anchorFriendLikeCountBeforeOperation; // +0x330
}
- (id)initWithTaskId:(id)arg1;
- (id)liveTask;
- (id)likeMgr;
- (id)likeClapVoicePlayQueue;
- (id)anchorLikePlayUtil;
- (id)audienceLikePlayUtil;
- (id)anchorlikeAnimationUtil;
- (id)audienceSelflikeAnimationUtil;
- (id)doubleClickedlikeAnimationUtil;
- (id)audienceOtherLikeAnimationUtil;
- (long long)operationViewLayoutOrientation;
- (void)setIsLiveScreenSharingButtonEnabled:(BOOL)arg1;
- (void)setAnchorPromoteButtonState:(long long)arg1;
- (long long)getLiveToolsButtonState;
- (BOOL)isLiveUnpaid;
- (id)ktvExposedGiftItem;
- (BOOL)showAdsIconLive;
- (unsigned int)adsIconShowDuration;
- (void)updateCheerInfo:(id)arg1 fromGetLiveMsg:(BOOL)arg2;
- (void)updateTestLiveModeWithLiveInfo:(id)arg1;
- (void)onJoinLiveRoom:(id)arg1 finderDataItem:(id)arg2;
- (void)onEnterLiveWithError:(id)arg1;
- (void)onExitLive;
- (void)onLiveMessageReceived:(id)arg1 isFullLiveInfo:(BOOL)arg2 onlineCount:(unsigned int)arg3 onlineViewCount:(unsigned int)arg4 ktvPlayerCount:(unsigned int)arg5 isNeverJoinFanclub:(BOOL)arg6 playTogetherIconJumpInfo:(id)arg7;
- (void)onLiveAnchorStatusUpdated:(id)arg1 preivousAnchorStatusItem:(id)arg2;
- (void)onLiveConnectMicStatusChanged;
- (void)updateLotteryAndRedPacketButtonEnabled;
- (void)checkAndUpdateLiveScreenSharingButtonEnabled;
- (void)observeKeyPath:(id)arg1 callbackBlock:(id /* block */)arg2;
- (void)unobserveAll;
- (BOOL)isLiveVotingEnabled;
- (void)preloadRewardGiftListIfNeed:(BOOL)arg1;
- (void)preloadRewardGiftListRandomInterval;
- (void)preloadRewardGiftList;
- (void)innerPreloadRewardGiftList;
- (void)innerUpdateShareCount:(unsigned long long)arg1 source:(long long)arg2;
- (void)onAnchorShareSucceeded;
- (void)onAudienceLikeCntUpdated:(id)arg1;
- (void)innerUpdateFriendLikeCount:(unsigned long long)arg1;
- (void)markFriendLikeSelfOp;
- (BOOL)isInFriendLikeSelfOpSilentWindow;
- (void)beginAnchorFriendLikeOperation:(BOOL)arg1;
- (void)finishAnchorFriendLikeOperationSucceeded:(BOOL)arg1;
- (void)adjustBottomDescLabelFont;
- (double)getFontThatFit:(id)arg1;
- (void)onLikeButtonFontChanged:(BOOL)arg1 offsetY:(double)arg2 bottomLabelHeight:(double)arg3;
- (BOOL)isGiftStarBannerEnabled;
- (BOOL)isWishBannerEnabled;
- (BOOL)isInteractionWishBannerEnabled;
- (BOOL)isGiftWallEnabled;
- (BOOL)isBoardEventBannerEnabled;
- (void)transferLegacyRedDotIfNeeded;
- (BOOL)transferLegacyRedDotWithPaths:(id)arg1 type:(unsigned int)arg2 groupId:(id)arg3;
- (BOOL)transferLegacyRedDotWithPaths:(id)arg1 type:(unsigned int)arg2 groupId:(id)arg3 showType:(unsigned long long)arg4;
- (BOOL)transferLegacyRedDotWithPaths:(id)arg1 type:(unsigned int)arg2 groupId:(id)arg3 showType:(unsigned long long)arg4 exposeCountLimit:(unsigned int)arg5;
- (id)redDotMgrForPath:(id)arg1;
- (void)removeRedDotShowInfoAtPath:(id)arg1 fromMgr:(id)arg2 clearType:(int)arg3;
- (void)onRedDotClickedAtPath:(id)arg1;
- (void)onRedDotExposedAtPath:(id)arg1;
- (BOOL)_innerOnRedDotExposedAtPath:(id)arg1 fromMgr:(id)arg2 autoSave:(BOOL)arg3;
- (void)onRedDotExposedAtPaths:(id)arg1;
- (id)redDotShowInfoAtPath:(id)arg1;
- (id)redDotCtrlInfoAtPath:(id)arg1;
- (id)allRedDotCtrlInfoAtPath:(id)arg1;
- (void)clearReportRelatedCacheWithRedDotPathPrefix:(id)arg1;
- (void)reportRedDotExposeAtPath:(id)arg1 mgr:(id)arg2;
- (void)reportRedDotClickAtPath:(id)arg1 mgr:(id)arg2;
- (void)_doReportRedDotWithPath:(id)arg1 dict:(id)arg2;
- (id)reportDictAtPath:(id)arg1 mgr:(id)arg2 type:(unsigned long long)arg3;
- (void)onFinderGetLiveOnlineMember:(id)arg1 taskId:(id)arg2 boardType:(unsigned int)arg3 onlineMemberResult:(id)arg4;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 extraClientConfigUpdated:(BOOL)arg14 liveGameData:(id)arg15 respContext:(id)arg16;
- (void)onFinderLiveUpdateFinderCheerIconWithTaskId:(id)arg1 cheerInfo:(id)arg2;
- (void)onGetFinderLiveAppMsgListWithTaskId:(id)arg1 appMsgList:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (void)onGetButtonStyleInfoWithTaskId:(id)arg1 buttonInfo:(id)arg2;
- (void)onGetFinderLiveGameSysNotifyInfoWithTaskId:(id)arg1 gameSysNotifyInfo:(id)arg2;
- (void)onLiveVisibilityStateWithTaskId:(id)arg1 state:(id)arg2;
- (void)onGetFinderLiveGiftAnimationPlayCommandWithTaskId:(id)arg1 playCommand:(id)arg2;
- (void)handleCommentAssistantInfoChanged:(id)arg1;
- (void)initVoteVM;
- (void)setLiveInThreeDimensionalDirecting:(BOOL)arg1;
- (void)setSelfIsThreeDimensionalDirector:(BOOL)arg1;
- (void)setCanGameButtonHighlightedByTeamup:(BOOL)arg1;
- (void)setCanGameButtonHighlightedByPromote:(BOOL)arg1;
- (void)checkIfNeedForbidOrReleaseScroll;
- (void)updateLiveGameButtonHighLightStatus;
- (id)bottomButtonAnimator;
- (id)bottomButtonStyleManager;
- (id)bottomButtonOriginalIconMap;
- (id)liveShoppingButtonBubblePAGPath;
- (id)getImageWithPath:(id)arg1 ext:(id)arg2 targetSize:(CGSize)arg3;
- (id)bottomButtonsBGColor;
- (void)reloadBottomButtonColorIfNeed;
- (void)reloadBottomButtonColor;
- (void)reloadBottomButtonStyle;
- (void)reloadBottomButtonStyleForButtonType:(unsigned int)arg1;
- (void)bottomButtonDefaultColorDidChange:(id)arg1;
- (void)bottomButtonEnhanceAnimationTriggered:(id)arg1;
- (void)bottomButtonStyleDidChange:(unsigned int)arg1 iconResource:(id)arg2 bgResource:(id)arg3;
- (void)bottomButtonShouldStartPlayAnimation:(unsigned int)arg1 animationType:(unsigned int)arg2 filePath:(id)arg3 animationWebUrl:(id)arg4 animationCompletion:(id /* block */)arg5;
- (id)getButtonWithType:(unsigned int)arg1;
- (void)playLiveShoppingButtonBubblePAGIfCan;
- (BOOL)canPlayAnimationOnButton:(unsigned int)arg1;
- (void)disableStyleAnimationOnButtonWithType:(unsigned int)arg1;
- (id)getButtonStyleReportDictWithType:(unsigned int)arg1;
- (id)customStyleButtonTypes;
- (id)bottomButtonStyleConfigReportDict;
- (void)enableStyleAnimationOnButtonWithType:(unsigned int)arg1;
- (void)setupLiteAppCardWith:(id)arg1;
- (id)operationView;
- (void)setOperationView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)joinLiveContext;
- (void)setJoinLiveContext:(id)arg1;
- (unsigned int)liveExtFlag;
- (void)setLiveExtFlag:(unsigned int)arg1;
- (unsigned int)liveInfoExtFlag;
- (void)setLiveInfoExtFlag:(unsigned int)arg1;
- (BOOL)didJoinLiveRoom;
- (void)setDidJoinLiveRoom:(BOOL)arg1;
- (BOOL)didEnterLiveRoom;
- (void)setDidEnterLiveRoom:(BOOL)arg1;
- (BOOL)isClearScreen;
- (void)setIsClearScreen:(BOOL)arg1;
- (unsigned long long)uiMode;
- (void)setUiMode:(unsigned long long)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (BOOL)isInputViewShowing;
- (void)setIsInputViewShowing:(BOOL)arg1;
- (BOOL)shouldShowGameLiveAngelBtn;
- (void)setShouldShowGameLiveAngelBtn:(BOOL)arg1;
- (BOOL)isRestrictVideoRectMode;
- (void)setIsRestrictVideoRectMode:(BOOL)arg1;
- (unsigned long long)onlineUserCount;
- (void)setOnlineUserCount:(unsigned long long)arg1;
- (unsigned long long)ktvPlayerCount;
- (void)setKtvPlayerCount:(unsigned long long)arg1;
- (unsigned long long)onlineViewCount;
- (void)setOnlineViewCount:(unsigned long long)arg1;
- (unsigned long long)rewardWecoinCnt;
- (void)setRewardWecoinCnt:(unsigned long long)arg1;
- (unsigned long long)rewardTotalAmountInHeat;
- (void)setRewardTotalAmountInHeat:(unsigned long long)arg1;
- (unsigned long long)heatValue;
- (void)setHeatValue:(unsigned long long)arg1;
- (id)liveHeatValueStr;
- (void)setLiveHeatValueStr:(id)arg1;
- (unsigned long long)paidUserCount;
- (void)setPaidUserCount:(unsigned long long)arg1;
- (BOOL)isShouldShowNewHeatValueStyle;
- (void)setIsShouldShowNewHeatValueStyle:(BOOL)arg1;
- (BOOL)shouldShowHeatValue;
- (void)setShouldShowHeatValue:(BOOL)arg1;
- (BOOL)isKtvPlayerCountExposed;
- (void)setIsKtvPlayerCountExposed:(BOOL)arg1;
- (id)onlineBarInfo;
- (void)setOnlineBarInfo:(id)arg1;
- (id)liveOnlineCountStr;
- (void)setLiveOnlineCountStr:(id)arg1;
- (BOOL)liveRewardEnabled;
- (void)setLiveRewardEnabled:(BOOL)arg1;
- (BOOL)isEditTopic;
- (void)setIsEditTopic:(BOOL)arg1;
- (BOOL)isAssumingAudienceCommentEnabled;
- (void)setIsAssumingAudienceCommentEnabled:(BOOL)arg1;
- (id)voteVM;
- (void)setVoteVM:(id)arg1;
- (id)currentDisplayGoodsItem;
- (void)setCurrentDisplayGoodsItem:(id)arg1;
- (id)currentDisplayAdsItem;
- (void)setCurrentDisplayAdsItem:(id)arg1;
- (id)currentDisplayCouponInfo;
- (void)setCurrentDisplayCouponInfo:(id)arg1;
- (BOOL)canShowShoppingTips;
- (void)setCanShowShoppingTips:(BOOL)arg1;
- (BOOL)canShowShoppingButton;
- (void)setCanShowShoppingButton:(BOOL)arg1;
- (BOOL)canShowBottomButtons;
- (void)setCanShowBottomButtons:(BOOL)arg1;
- (BOOL)isMusicSettingButtonEnabled;
- (void)setIsMusicSettingButtonEnabled:(BOOL)arg1;
- (BOOL)isCameraOperationButtonEnabled;
- (void)setIsCameraOperationButtonEnabled:(BOOL)arg1;
- (BOOL)isAnchorClapButtonEnabled;
- (void)setIsAnchorClapButtonEnabled:(BOOL)arg1;
- (BOOL)isLiveShoppingButtonEnabled;
- (void)setIsLiveShoppingButtonEnabled:(BOOL)arg1;
- (BOOL)isLiveGiftButtonEnabled;
- (void)setIsLiveGiftButtonEnabled:(BOOL)arg1;
- (BOOL)isLiveGameButtonEnabled;
- (void)setIsLiveGameButtonEnabled:(BOOL)arg1;
- (BOOL)isLikeButtonEnabled;
- (void)setIsLikeButtonEnabled:(BOOL)arg1;
- (BOOL)isLiveLotteryEnabled;
- (void)setIsLiveLotteryEnabled:(BOOL)arg1;
- (BOOL)isLivePrizeButtonEnabled;
- (void)setIsLivePrizeButtonEnabled:(BOOL)arg1;
- (BOOL)isLiveRedPacketButtonEnabled;
- (void)setIsLiveRedPacketButtonEnabled:(BOOL)arg1;
- (BOOL)isLiveScreenSharingButtonEnabled;
- (BOOL)isLiveScreenSharingButtonEnableInited;
- (void)setIsLiveScreenSharingButtonEnableInited:(BOOL)arg1;
- (BOOL)isLiveConnectMicButtonEnabled;
- (void)setIsLiveConnectMicButtonEnabled:(BOOL)arg1;
- (BOOL)isTestLiveMode;
- (void)setIsTestLiveMode:(BOOL)arg1;
- (BOOL)isLiveQuickSendGiftButtonEnabled;
- (void)setIsLiveQuickSendGiftButtonEnabled:(BOOL)arg1;
- (long long)liveToolsButtonState;
- (void)setLiveToolsButtonState:(long long)arg1;
- (long long)anchorPromoteButtonState;
- (id)cheerInfo;
- (void)setCheerInfo:(id)arg1;
- (id)liveAdInfo;
- (void)setLiveAdInfo:(id)arg1;
- (id)hotAnimationVM;
- (void)setHotAnimationVM:(id)arg1;
- (id)rewardSendingLogic;
- (void)setRewardSendingLogic:(id)arg1;
- (id)rewardRecievingLogic;
- (void)setRewardRecievingLogic:(id)arg1;
- (id)freeGiftManager;
- (void)setFreeGiftManager:(id)arg1;
- (id)lotteryPacketDisplayLogic;
- (void)setLotteryPacketDisplayLogic:(id)arg1;
- (id)lotteryDisplayLogic;
- (void)setLotteryDisplayLogic:(id)arg1;
- (void)setAudienceSelflikeAnimationUtil:(id)arg1;
- (void)setAudienceOtherLikeAnimationUtil:(id)arg1;
- (void)setAnchorlikeAnimationUtil:(id)arg1;
- (void)setDoubleClickedlikeAnimationUtil:(id)arg1;
- (void)setAnchorLikePlayUtil:(id)arg1;
- (void)setAudienceLikePlayUtil:(id)arg1;
- (void)setLikeClapVoicePlayQueue:(id)arg1;
- (BOOL)isShakeForLike;
- (void)setIsShakeForLike:(BOOL)arg1;
- (unsigned long long)maxLikeCountOnce;
- (void)setMaxLikeCountOnce:(unsigned long long)arg1;
- (long long)likeMode;
- (void)setLikeMode:(long long)arg1;
- (BOOL)isLiveGameButtonButtonHighLighted;
- (void)setIsLiveGameButtonButtonHighLighted:(BOOL)arg1;
- (BOOL)canGameButtonHighlightedByTeamup;
- (BOOL)canGameButtonHighlightedByPromote;
- (id)threeDimensionalTipsInfo;
- (void)setThreeDimensionalTipsInfo:(id)arg1;
- (BOOL)liveInThreeDimensionalDirecting;
- (BOOL)selfIsThreeDimensionalDirector;
- (id)playTogetherBubbleWording;
- (void)setPlayTogetherBubbleWording:(id)arg1;
- (id)gameFrameSetRootId;
- (void)setGameFrameSetRootId:(id)arg1;
- (id)gamePkgAppId;
- (void)setGamePkgAppId:(id)arg1;
- (id)gamePkgAppPath;
- (void)setGamePkgAppPath:(id)arg1;
- (BOOL)isNeverJoinFanclub;
- (void)setIsNeverJoinFanclub:(BOOL)arg1;
- (id)playTogetherIconJumpInfo;
- (void)setPlayTogetherIconJumpInfo:(id)arg1;
- (unsigned long long)livePaymentType;
- (void)setLivePaymentType:(unsigned long long)arg1;
- (BOOL)isLiveTrialTimeout;
- (void)setIsLiveTrialTimeout:(BOOL)arg1;
- (BOOL)isLiveTrialTimeoutWhenJoinLive;
- (void)setIsLiveTrialTimeoutWhenJoinLive:(BOOL)arg1;
- (BOOL)isTrialTimeExpand;
- (void)setIsTrialTimeExpand:(BOOL)arg1;
- (id)rewardWishListInfo;
- (void)setRewardWishListInfo:(id)arg1;
- (id)giftWallInfo;
- (void)setGiftWallInfo:(id)arg1;
- (id)giftStarBannerInfo;
- (void)setGiftStarBannerInfo:(id)arg1;
- (id)currentInteractionWishinfo;
- (void)setCurrentInteractionWishinfo:(id)arg1;
- (id)boardEventSubTitle;
- (void)setBoardEventSubTitle:(id)arg1;
- (BOOL)canShowMultiPlayerPageControl;
- (void)setCanShowMultiPlayerPageControl:(BOOL)arg1;
- (id)finderLiveLogoUrl;
- (void)setFinderLiveLogoUrl:(id)arg1;
- (id)brandLogoUrls;
- (void)setBrandLogoUrls:(id)arg1;
- (id)recommendUserSendGiftInfo;
- (void)setRecommendUserSendGiftInfo:(id)arg1;
- (id)packageNewGiftRecommendInfo;
- (void)setPackageNewGiftRecommendInfo:(id)arg1;
- (id)packageExpireGiftRecommendInfo;
- (void)setPackageExpireGiftRecommendInfo:(id)arg1;
- (id)packageNewFreeGiftRecommendInfo;
- (void)setPackageNewFreeGiftRecommendInfo:(id)arg1;
- (id)exposedGiftItem;
- (void)setExposedGiftItem:(id)arg1;
- (unsigned int)ktvContentId;
- (void)setKtvContentId:(unsigned int)arg1;
- (BOOL)isLiveKTVSongButtonEnabled;
- (void)setIsLiveKTVSongButtonEnabled:(BOOL)arg1;
- (BOOL)needHideKTVLiveMode;
- (void)setNeedHideKTVLiveMode:(BOOL)arg1;
- (id)promotionInfo;
- (void)setPromotionInfo:(id)arg1;
- (BOOL)isLiveRoomInteractiveHomePageTransitionEnable;
- (void)setIsLiveRoomInteractiveHomePageTransitionEnable:(BOOL)arg1;
- (id)reminderNotificationInfo;
- (void)setReminderNotificationInfo:(id)arg1;
- (BOOL)isShowAdsIconLiveTimeout;
- (void)setIsShowAdsIconLiveTimeout:(BOOL)arg1;
- (id /* block */)getBottomButtonQueryBlock;
- (void)setGetBottomButtonQueryBlock:(id /* block */)arg1;
- (id /* block */)getAllBottomButtonsQueryBlock;
- (void)setGetAllBottomButtonsQueryBlock:(id /* block */)arg1;
- (BOOL)isBottomButtonFontStyleSmall;
- (void)setIsBottomButtonFontStyleSmall:(BOOL)arg1;
- (double)bottomButtonOffsetY;
- (void)setBottomButtonOffsetY:(double)arg1;
- (double)bottomLabelHeight;
- (void)setBottomLabelHeight:(double)arg1;
- (unsigned long long)curForwardCount;
- (void)setCurForwardCount:(unsigned long long)arg1;
- (unsigned long long)curRealnameLikeCount;
- (void)setCurRealnameLikeCount:(unsigned long long)arg1;
- (id)friendLikeCntString;
- (void)setFriendLikeCntString:(id)arg1;
- (double)bottomDescFont;
- (void)setBottomDescFont:(double)arg1;
- (unsigned long long)friendLikeCountRevision;
- (void)setFriendLikeCountRevision:(unsigned long long)arg1;
- (id)liteAppCardInfo;
- (void)setLiteAppCardInfo:(id)arg1;
- (id)anchorRealtimeDataPanelInfo;
- (void)setAnchorRealtimeDataPanelInfo:(id)arg1;
- (id)productSizeAssistantPanelInfo;
- (void)setProductSizeAssistantPanelInfo:(id)arg1;
- (id)productSizeAssistantProductInfo;
- (void)setProductSizeAssistantProductInfo:(id)arg1;
- (BOOL)isProductSizeAssistantPanelExtended;
- (void)setIsProductSizeAssistantPanelExtended:(BOOL)arg1;
- (id /* block */)productSizeAssistantExposeBlock;
- (void)setProductSizeAssistantExposeBlock:(id /* block */)arg1;
- (id /* block */)productSizeAssistantClickBlock;
- (void)setProductSizeAssistantClickBlock:(id /* block */)arg1;
- (id /* block */)productSizeAssistantContentClickBlock;
- (void)setProductSizeAssistantContentClickBlock:(id /* block */)arg1;
- (double)productSizeAssistantPanelFoldedHeight;
- (void)setProductSizeAssistantPanelFoldedHeight:(double)arg1;
- (id)lastRecommendProductNotifyLastBuffer;
- (void)setLastRecommendProductNotifyLastBuffer:(id)arg1;
- (id)lastRecommendGameNotifyLastBuffer;
- (void)setLastRecommendGameNotifyLastBuffer:(id)arg1;
- (id)lastReplaySubscriptionLastBuffer;
- (void)setLastReplaySubscriptionLastBuffer:(id)arg1;
- (id)redDotMgr;
- (void)setRedDotMgr:(id)arg1;
- (id)starterReporter;
- (void)setStarterReporter:(id)arg1;
- (id)reportedExposePathSet;
- (void)setReportedExposePathSet:(id)arg1;
- (id)cachedTipsIdDict;
- (void)setCachedTipsIdDict:(id)arg1;
- (void)setBottomButtonStyleManager:(id)arg1;
- (void)setBottomButtonAnimator:(id)arg1;
- (void)setBottomButtonOriginalIconMap:(id)arg1;
- (id)bannedButtonTypes;
- (void)setBannedButtonTypes:(id)arg1;
- (void)setCustomStyleButtonTypes:(id)arg1;
- (void)setBottomButtonStyleConfigReportDict:(id)arg1;
- (BOOL)hasPreloadRewardGiftList;
- (void)setHasPreloadRewardGiftList:(BOOL)arg1;
- (BOOL)hasEventLiveUpdateNotify;
- (void)setHasEventLiveUpdateNotify:(BOOL)arg1;
- (id)forwardCntString;
- (void)setForwardCntString:(id)arg1;
- (id)likeCntString;
- (void)setLikeCntString:(id)arg1;
- (double)lastFriendLikeSelfOpTimestamp;
- (void)setLastFriendLikeSelfOpTimestamp:(double)arg1;
- (BOOL)anchorFriendLikeOperationPending;
- (void)setAnchorFriendLikeOperationPending:(BOOL)arg1;
- (unsigned long long)anchorFriendLikeCountBeforeOperation;
- (void)setAnchorFriendLikeCountBeforeOperation:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
