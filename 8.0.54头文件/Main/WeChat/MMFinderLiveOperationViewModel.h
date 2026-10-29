@interface MMFinderLiveOperationViewModel : NSObject <WCFinderLiveExt, MMFinderLiveBottomButtonStyleManagerDelegate>
{
    BOOL _didJoinLiveRoom; // +0x8
    BOOL _didEnterLiveRoom; // +0x9
    BOOL _isClearScreen; // +0xa
    BOOL _canShowOperationUI; // +0xb
    BOOL _isInputViewShowing; // +0xc
    BOOL _shouldShowGameLiveAngelBtn; // +0xd
    BOOL _isRestrictVideoRectMode; // +0xe
    BOOL _isShouldShowNewHeatValueStyle; // +0xf
    BOOL _shouldShowHeatValue; // +0x10
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
    BOOL _isLiveLotteryButtonEnabled; // +0x1e
    BOOL _isLiveRedPacketButtonEnabled; // +0x1f
    BOOL _isLiveScreenSharingButtonEnabled; // +0x20
    BOOL _isLiveScreenSharingButtonEnableInited; // +0x21
    BOOL _isLiveConnectMicButtonEnabled; // +0x22
    BOOL _isLiveMicTalkingButtonEnabled; // +0x23
    BOOL _isLiveMicTalkingEnabled; // +0x24
    BOOL _isTestLiveMode; // +0x25
    BOOL _isLiveQuickSendGiftButtonEnabled; // +0x26
    BOOL _isShakeForLike; // +0x27
    BOOL _isLiveGameButtonButtonHighLighted; // +0x28
    BOOL _canGameButtonHighlightedByTeamup; // +0x29
    BOOL _canGameButtonHighlightedByPromote; // +0x2a
    BOOL _liveInThreeDimensionalDirecting; // +0x2b
    BOOL _selfIsThreeDimensionalDirector; // +0x2c
    BOOL _isNeverJoinFanclub; // +0x2d
    BOOL _isLiveTrialTimeout; // +0x2e
    BOOL _isLiveTrialTimeoutWhenJoinLive; // +0x2f
    BOOL _isTrialTimeExpand; // +0x30
    BOOL _canShowMultiPlayerPageControl; // +0x31
    BOOL _isLiveKTVSongButtonEnabled; // +0x32
    BOOL _isLiveRoomInteractiveHomePageTransitionEnable; // +0x33
    BOOL _isProductSizeAssistantPanelExtended; // +0x34
    BOOL _hasPreloadRewardGiftList; // +0x35
    unsigned int _liveExtFlag; // +0x38
    unsigned int _liveInfoExtFlag; // +0x3c
    MMFinderLiveOperationView * _operationView; // +0x40
    MMFinderLiveTaskId * _taskId; // +0x48
    WCFinderDataItem * _finderDataItem; // +0x50
    MMFinderJoinLiveContext * _joinLiveContext; // +0x58
    long long _currentOrientation; // +0x60
    unsigned long long _onlineUserCount; // +0x68
    unsigned long long _ktvPlayerCount; // +0x70
    unsigned long long _onlineViewCount; // +0x78
    unsigned long long _rewardWecoinCnt; // +0x80
    unsigned long long _rewardTotalAmountInHeat; // +0x88
    unsigned long long _heatValue; // +0x90
    NSString * _liveHeatValueStr; // +0x98
    unsigned long long _paidUserCount; // +0xa0
    LiveOnlineInfo * _onlineBarInfo; // +0xa8
    NSString * _liveOnlineCountStr; // +0xb0
    MMLiveVoteViewModel * _voteVM; // +0xb8
    MMFinderLiveGoodsItem * _currentDisplayGoodsItem; // +0xc0
    MMFinderLiveAdsItem * _currentDisplayAdsItem; // +0xc8
    FinderShopCouponInfo * _currentDisplayCouponInfo; // +0xd0
    long long _liveToolsButtonState; // +0xd8
    long long _anchorPromoteButtonState; // +0xe0
    FinderLiveCheerInfo * _cheerInfo; // +0xe8
    FinderLiveAdInfo * _liveAdInfo; // +0xf0
    MMLiveHotAnimationViewModel * _hotAnimationVM; // +0xf8
    MMFinderLiveRewardSendingLogic * _rewardSendingLogic; // +0x100
    MMFinderLiveRewardRecievingLogic * _rewardRecievingLogic; // +0x108
    MMFinderLiveRewardFreeGiftManager * _freeGiftManager; // +0x110
    MMFinderLiveLotteryPacketDisplayLogic * _lotteryPacketDisplayLogic; // +0x118
    MMFinderLiveLotteryDisplayLogic * _lotteryDisplayLogic; // +0x120
    MMLiveLikeAnimationUtil * _audienceSelflikeAnimationUtil; // +0x128
    MMLiveLikeAnimationUtil * _audienceOtherLikeAnimationUtil; // +0x130
    MMLiveLikeAnimationUtil * _anchorlikeAnimationUtil; // +0x138
    MMLiveLikePlayUtil * _anchorLikePlayUtil; // +0x140
    MMAudienceLiveLikePlayUtil * _audienceLikePlayUtil; // +0x148
    MMLiveLikeClapVoicePlayQueue * _likeClapVoicePlayQueue; // +0x150
    unsigned long long _maxLikeCountOnce; // +0x158
    long long _likeMode; // +0x160
    FinderLiveGamePlayTogether_AudienceThreeDimensionalTipsInfo * _threeDimensionalTipsInfo; // +0x168
    NSString * _playTogetherBubbleWording; // +0x170
    NSString * _gameFrameSetRootId; // +0x178
    NSString * _gamePkgAppId; // +0x180
    NSString * _gamePkgAppPath; // +0x188
    unsigned long long _livePaymentType; // +0x190
    FinderLiveRewardWishListInfo * _rewardWishListInfo; // +0x198
    FinderLiveGiftWallInfo * _giftWallInfo; // +0x1a0
    NSString * _finderLiveLogoUrl; // +0x1a8
    NSArray * _brandLogoUrls; // +0x1b0
    MMFinderLiveRecommendUserSendGiftInfo * _recommendUserSendGiftInfo; // +0x1b8
    MMFinderLivePackageGiftRecommendInfo * _packageNewGiftRecommendInfo; // +0x1c0
    MMFinderLivePackageGiftRecommendInfo * _packageExpireGiftRecommendInfo; // +0x1c8
    MMFinderLivePackageGiftRecommendInfo * _packageNewFreeGiftRecommendInfo; // +0x1d0
    MMFinderLiveRewardGiftItem * _exposedGiftItem; // +0x1d8
    MMFinderLiveSyncPromotionInfo * _promotionInfo; // +0x1e0
    FinderLiveFunctionReminderNotificationInfo * _reminderNotificationInfo; // +0x1e8
    id /* block */ _getBottomButtonQueryBlock; // +0x1f0
    id /* block */ _getAllBottomButtonsQueryBlock; // +0x1f8
    FinderJumpInfo * _liteAppCardInfo; // +0x200
    FinderJumpInfo * _anchorRealtimeDataPanelInfo; // +0x208
    FinderJumpInfo * _productSizeAssistantPanelInfo; // +0x210
    FinderWindowProductInfo * _productSizeAssistantProductInfo; // +0x218
    id /* block */ _productSizeAssistantExposeBlock; // +0x220
    id /* block */ _productSizeAssistantClickBlock; // +0x228
    id /* block */ _productSizeAssistantContentClickBlock; // +0x230
    double _productSizeAssistantPanelFoldedHeight; // +0x238
    NSData * _lastRecommendProductNotifyLastBuffer; // +0x240
    id <WCFinderRedDotInterfaceProtocol> _redDotMgr; // +0x248
    WCFinderLiveStarterReporter * _starterReporter; // +0x250
    NSMutableSet * _reportedExposePathSet; // +0x258
    NSMutableDictionary * _cachedTipsIdDict; // +0x260
    MMFinderLiveBottomButtonStyleManager * _bottomButtonStyleManager; // +0x268
    MMFinderLiveOperationBottomButtonAnimator * _bottomButtonAnimator; // +0x270
    NSMutableDictionary * _bottomButtonOriginalIconMap; // +0x278
    NSMutableSet * _bannedButtonTypes; // +0x280
    NSMutableSet * _customStyleButtonTypes; // +0x288
    NSMutableDictionary * _bottomButtonStyleConfigReportDict; // +0x290
}
+ (void)initialize;
+ (void)transferLegacyRedDotIfNeeded;
+ (BOOL)transferLegacyRedDotWithPaths:(id)arg1 type:(unsigned int)arg2 groupId:(id)arg3;
+ (BOOL)transferLegacyRedDotWithPaths:(id)arg1 type:(unsigned int)arg2 groupId:(id)arg3 showType:(unsigned long long)arg4;
+ (BOOL)transferLegacyRedDotWithPaths:(id)arg1 type:(unsigned int)arg2 groupId:(id)arg3 showType:(unsigned long long)arg4 exposeCountLimit:(unsigned int)arg5;
- (id)initWithTaskId:(id)arg1;
- (id)liveTask;
- (id)likeMgr;
- (id)likeClapVoicePlayQueue;
- (id)anchorLikePlayUtil;
- (id)audienceLikePlayUtil;
- (id)anchorlikeAnimationUtil;
- (id)audienceSelflikeAnimationUtil;
- (id)audienceOtherLikeAnimationUtil;
- (void)setIsLiveScreenSharingButtonEnabled:(BOOL)arg1;
- (void)setAnchorPromoteButtonState:(long long)arg1;
- (long long)getLiveToolsButtonState;
- (BOOL)isLiveUnpaid;
- (void)updateCheerInfo:(id)arg1 fromGetLiveMsg:(BOOL)arg2;
- (void)onJoinLiveRoom:(id)arg1 finderDataItem:(id)arg2;
- (void)onEnterLiveWithError:(id)arg1;
- (void)onExitLive;
- (void)onLiveMessageReceived:(id)arg1 isFullLiveInfo:(BOOL)arg2 onlineCount:(unsigned int)arg3 onlineViewCount:(unsigned int)arg4 ktvPlayerCount:(unsigned int)arg5 isNeverJoinFanclub:(BOOL)arg6;
- (void)onLiveAnchorStatusUpdated:(id)arg1 preivousAnchorStatusItem:(id)arg2;
- (void)onLiveConnectMicStatusChanged;
- (void)onLiveFreeTalkStatusChanged;
- (void)updateLotteryAndRedPacketButtonEnabled;
- (void)checkAndUpdateLiveScreenSharingButtonEnabled;
- (void)observeKeyPath:(id)arg1 callbackBlock:(id /* block */)arg2;
- (void)unobserveAll;
- (BOOL)isLiveVotingEnabled;
- (void)preloadRewardGiftListIfNeed:(BOOL)arg1;
- (void)preloadRewardGiftListRandomInterval;
- (void)preloadRewardGiftList;
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
- (void)onFinderGetLiveOnlineMember:(id)arg1 taskId:(id)arg2 onlineMemberResult:(id)arg3;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)onFinderLiveUpdateFinderCheerIconWithTaskId:(id)arg1 cheerInfo:(id)arg2;
- (void)onGetFinderLiveAppMsgListWithTaskId:(id)arg1 appMsgList:(id)arg2 isHistoryMsg:(BOOL)arg3;
- (void)onGetButtonStyleInfoWithTaskId:(id)arg1 buttonInfo:(id)arg2;
- (void)onGetFinderLiveGameSysNotifyInfoWithTaskId:(id)arg1 gameSysNotifyInfo:(id)arg2;
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
- (void)reloadBottomButtonColor;
- (void)reloadBottomButtonStyle;
- (void)reloadBottomButtonStyleForButtonType:(unsigned int)arg1;
- (void)bottomButtonDefaultColorDidChange:(id)arg1;
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
- (BOOL)canShowOperationUI;
- (void)setCanShowOperationUI:(BOOL)arg1;
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
- (BOOL)isLiveLotteryButtonEnabled;
- (void)setIsLiveLotteryButtonEnabled:(BOOL)arg1;
- (BOOL)isLiveRedPacketButtonEnabled;
- (void)setIsLiveRedPacketButtonEnabled:(BOOL)arg1;
- (BOOL)isLiveScreenSharingButtonEnabled;
- (BOOL)isLiveScreenSharingButtonEnableInited;
- (void)setIsLiveScreenSharingButtonEnableInited:(BOOL)arg1;
- (BOOL)isLiveConnectMicButtonEnabled;
- (void)setIsLiveConnectMicButtonEnabled:(BOOL)arg1;
- (BOOL)isLiveMicTalkingButtonEnabled;
- (void)setIsLiveMicTalkingButtonEnabled:(BOOL)arg1;
- (BOOL)isLiveMicTalkingEnabled;
- (void)setIsLiveMicTalkingEnabled:(BOOL)arg1;
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
- (BOOL)isLiveKTVSongButtonEnabled;
- (void)setIsLiveKTVSongButtonEnabled:(BOOL)arg1;
- (id)promotionInfo;
- (void)setPromotionInfo:(id)arg1;
- (BOOL)isLiveRoomInteractiveHomePageTransitionEnable;
- (void)setIsLiveRoomInteractiveHomePageTransitionEnable:(BOOL)arg1;
- (id)reminderNotificationInfo;
- (void)setReminderNotificationInfo:(id)arg1;
- (id /* block */)getBottomButtonQueryBlock;
- (void)setGetBottomButtonQueryBlock:(id /* block */)arg1;
- (id /* block */)getAllBottomButtonsQueryBlock;
- (void)setGetAllBottomButtonsQueryBlock:(id /* block */)arg1;
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
- (void).cxx_destruct;
@end

