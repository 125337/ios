@interface MMLiveRewardGiftRecievingAnimationView : MMLiveRewardGiftNotificationContainerView <PAGViewListener, RfxPagViewListener, MMFinderLiveGestureLogicExt, MMLiveTaskMgrExt, _TtP6WeChat15IMRViewListener_, MMLiveMagicRewardExt, _TtP6WeChat18IMRViewResListener_, MMLiveConnectMicExt, MMFinderLiveConnectMicAllUserInfoViewGiftNotificationDelegate, MMFinderLiveAudioRoomInfoViewGiftNotificationDelegate>
{
    BOOL _disableTopSlotNotification; // +0x8
    BOOL _isUseRfxPagView; // +0x9
    BOOL _isFullPagAnimating; // +0xa
    BOOL _isFullRfxAnimating; // +0xb
    BOOL _isFullMagicEngineAnimating; // +0xc
    BOOL _isFullEffectAnimationInterrupted; // +0xd
    BOOL _isLandscape; // +0xe
    BOOL _isInteractionGiftAnimating; // +0xf
    BOOL _currentResourcePlayingState; // +0x10
    BOOL _allow30FpsAnimation; // +0x11
    BOOL _hasSetupGiftPlayerRenderStat; // +0x12
    BOOL _isForbidMagicRewardGiftPlayEffect; // +0x13
    unsigned int _fullEffectAnimatingTicks; // +0x14
    id <MMLiveRewardGiftRecievingAnimationViewDelegate> _delegate; // +0x18
    double _notificationBottom; // +0x20
    id /* block */ _didTapNotificationBlock; // +0x28
    id /* block */ _didShowNotificationBlock; // +0x30
    id /* block */ _getKTVSingerHeaderRectBlock; // +0x38
    MMFinderLiveTaskId * _liveTaskId; // +0x40
    MMTimer * _scheduleTimer; // +0x48
    NSMutableArray * _displayingGiftNotificationViewList; // +0x50
    NSMutableArray * _freeGiftNotificationViewList; // +0x58
    NSMutableDictionary * _rewardRecipientToGiftNotificationViewDict; // +0x60
    NSDictionary * _rewardRecipientToGiftNotificationContainerViewDict; // +0x68
    NSMutableArray * _displayingGiftComboItemList; // +0x70
    NSMutableDictionary * _comboId2ComboItem; // +0x78
    MMFinderLiveGiftPlayItem * _currentAnimatingPlayItem; // +0x80
    UIView * _giftAnimatingEffectContainerView; // +0x88
    PAGView * _currentGiftAnimatingPlayerView; // +0x90
    RfxPagView * _currentGiftAnimatingRfxPlayerView; // +0x98
    _TtC6WeChat15MagicRewardView * _magicRewardView; // +0xa0
    MMLiveGiftMagicRewardHandler * _magicRewardHandler; // +0xa8
    UIView * _clearGiftEffectEducationGradientView; // +0xb0
    CAGradientLayer * _clearGiftEffectEducationGradientLayer; // +0xb8
    MMUILabel * _clearGiftEffectEducationLabel; // +0xc0
    double _lastFullPagEndTime; // +0xc8
    double _lastFullMagicEngineEndTime; // +0xd0
    double _lastFullEffectEndTime; // +0xd8
    double _currMagicRewardAnimationInterval; // +0xe0
    long long _currentOrientation; // +0xe8
    MMFinderLiveGiftPlayItem * _currentInteractionGiftItem; // +0xf0
    long long _currInteractionGiftRenderType; // +0xf8
    MMLiveInteractionGiftRenderLogic * _interactionGiftRenderLogic; // +0x100
    NSMutableDictionary * _giftAttackAnimatingPlayItemDict; // +0x108
    UIView * _gestureHintContainerView; // +0x110
    UIImageView * _gestureHintIconView; // +0x118
    UILabel * _gestureHintLabel; // +0x120
    unsigned long long _gestureHintHideTime; // +0x128
    NSString * _lastGestureHintComboId; // +0x130
    MMFinderLivePlayGiftAnimationCommand * _currentGiftAnimationPlayCommand; // +0x138
    MMFinderLiveGiftAttackRenderLogic * _giftAttackRenderLogic; // +0x140
    MMFinderLiveNotifyGiftNotificationView * _giftAttackUpgradeNotificationView; // +0x148
    MMLiveHapticsPlayer * _hapticsPlayer; // +0x150
    MMFinderLiveBatchRewardAnimationWeVisionRenderer * _batchRewardAnimationWeVisionRenderer; // +0x158
    NSString * _viewId; // +0x160
    NSMutableDictionary * _pagAudioFileOverWriteCounters; // +0x168
    NSMutableDictionary * _usernameToLatestAttackedInfoDic; // +0x170
}
+ (double)getHeightWithGiftCount:(unsigned long long)arg1 isAudience:(BOOL)arg2;
+ (double)getMaxContentHeightWithRole:(BOOL)arg1;
+ (double)giftNotificationHeightWithRole:(BOOL)arg1;
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupNotifications;
- (void)setupViews;
- (void)checkRenderStatShouldUseStrategy;
- (void)setupRenderStatForGiftPlayer;
- (void)setupRenderStatForPAGGiftPlayer;
- (void)setupRenderStatForRfxGiftPlayer;
- (void)clearRenderStatForGiftPlayer;
- (void)setupGiftAnimatingPlayerView;
- (void)createGiftRfxPlayerView;
- (void)createGiftPAGPlayerView;
- (void)addMagicRewardViewToEffectContainerView;
- (void)updateGiftAnimatingEffectContainerViewFrame:(CGRect)arg1;
- (void)updateAnimationContainerViewFrameWithEffectResolutionPercent:(double)arg1;
- (void)setupGiftNotificationView;
- (void)setupgestureHintView;
- (void)layoutGiftNotificationViews;
- (id)getGiftNotificationViewWithUserName:(id)arg1;
- (void)removeGiftNotificationViewWithUserName:(id)arg1;
- (void)removeUnusedGiftNotificationView;
- (void)reloadGiftNotificationViews;
- (void)reloadDataForNotificationView:(id)arg1;
- (id)getGiftNotificationViewWithComboId:(id)arg1;
- (void)setNotificationBottom:(double)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)updateForbidMagicRewardGiftPlayEffect:(BOOL)arg1;
- (void)updateExtraValueItem:(id)arg1 rewardAppMsgInfo:(id)arg2;
- (void)stopScheduleTimer;
- (void)pauseScheduleTimer;
- (void)resumeScheduleTimer;
- (void)startScheduleTimer:(double)arg1;
- (void)startScheduleTimerIfNeed:(double)arg1;
- (void)tryToProcessNextGiftCombo;
- (BOOL)canRetriveNextGiftComboForSerialDisplay;
- (BOOL)canRetriveNextInteractionGiftComboForSerialDisplay;
- (BOOL)canRetriveNextGiftComboForDisplay;
- (BOOL)canRetriveNextGiftComboForDisplayWithRewardRecipient:(id)arg1;
- (BOOL)canRetriveNextPKAttackGiftGiftComboForDisplayWithRewardRecipient:(id)arg1;
- (void)playNextBatchRewardAppMsgInfo:(id)arg1;
- (BOOL)executeGiftAnimationPlayCommand:(id)arg1;
- (void)checkAndShowGestureHintForComboItem:(id)arg1 renewal:(BOOL)arg2;
- (long long)getRewardPlaySumDurationInSecond:(id)arg1;
- (void)reloadRandomGiftListWithRewardAppMsgInfo:(id)arg1;
- (void)reloadDataWithRewardAppMsgInfo:(id)arg1;
- (BOOL)stopDisplayingGiftComboWithCombId:(id)arg1;
- (BOOL)stopDisplayingAnimatedGift;
- (BOOL)stopDisplayingGiftComboForLocalCombo:(BOOL)arg1;
- (void)stopDisplayingGiftComboWithRewardRecipientUserName:(id)arg1;
- (id)onGetRandomItem:(id)arg1 playItemIndex:(unsigned long long)arg2;
- (id)liveTask;
- (BOOL)isFullGiftPlayerAnimating;
- (id)batchRewardAnimationWeVisionRenderer;
- (id)giftAttackRenderLogic;
- (id)viewId;
- (void)startGiftAnimationForPKAttackGift:(id)arg1;
- (void)startGiftAttackAnimation:(id)arg1;
- (void)handleForGiftAttackAnimationEndWithGiftPlayItem:(id)arg1;
- (void)endGiftAttackAnimationWithComboId:(id)arg1;
- (void)tryStopCustomRenderAfterGiftAttackRewardEnd:(id)arg1 context:(id)arg2;
- (id)getRenderContextForGiftAttackToAnchor:(id)arg1 playItem:(id)arg2;
- (id)getTrtcRenderContextForGiftAttackToAnchor:(id)arg1 giftPlayItem:(id)arg2;
- (id)getTrtcRenderContextToSelfAnchor:(id)arg1;
- (id)getTrtcRenderContextForGiftAttackToAnchor:(id)arg1 selfLiveAnchor:(BOOL)arg2 playItem:(id)arg3;
- (id)getCdnRenderContextForGiftAttackToAnchor:(id)arg1 selfLiveAnchor:(BOOL)arg2 playItem:(id)arg3;
- (BOOL)useTrtcCustomComposeAbility;
- (id)getRenderRegionForGiftAttackToAnchor:(id)arg1 selfLiveAnchor:(BOOL)arg2;
- (id)getStartPosForGiftAttackToAnchor:(id)arg1 selfLiveAnchor:(BOOL)arg2 playItem:(id)arg3;
- (id)getTrtcStartPosForGiftAttackToAnchor:(id)arg1 selfLiveAnchor:(BOOL)arg2 playItem:(id)arg3;
- (CGRect)getGiftAttackFromNormalizedFrame:(id)arg1;
- (id)getTrtcStartPosForGiftAttack:(id)arg1;
- (CGPoint)backupStartPosForForGiftAttack:(id)arg1;
- (id)getCdnStartPosForGiftAttack:(id)arg1;
- (id)getSdkUserIdForAnchor:(id)arg1;
- (BOOL)isShowingMultiRecipientsRewards;
- (double)giftNotificationHeight;
- (BOOL)isRecipientAnchorFromSelf:(id)arg1;
- (BOOL)isRecipientConnectedMicAudience:(id)arg1;
- (BOOL)isFullEffectAnimating;
- (id)currentGiftAnimatingEffectView;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)updateGiftAnimatingEffectViewHidden;
- (void)updateGiftEffectContainerViewHidden;
- (void)updateGiftAnimatingPlayerView:(id)arg1 hidden:(BOOL)arg2;
- (void)updateMagicRewardViewHidden:(BOOL)arg1;
- (void)updateCurrentGiftAnimatingEffectViewHidden:(BOOL)arg1;
- (void)updateMagicRewardViewAlpha:(double)arg1;
- (void)scheduleGiftBatchAnimation;
- (void)precacheGiftPagFileIfNeed;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)forceDismissCurrentGiftAnimation;
- (void)loadAndPlayGiftAnimationWithPAGFile:(id)arg1;
- (void)loadAndPlayGiftAnimationWithRfxPagFile:(id)arg1;
- (void)startGiftAnimationForLiveGift:(id)arg1;
- (void)startGiftAnimationByEngine:(id)arg1;
- (void)resetPreviousParamsBeforeStart;
- (void)endCurrentGiftAnimatingEffectView:(long long)arg1;
- (void)stopGiftAnimationRfxView;
- (void)stopGiftAnimationPAGView;
- (void)handleForAnimationEnd;
- (void)handleForAnimationEndWithGiftPlayItem:(id)arg1;
- (void)startGiftAnimationByPag:(id)arg1;
- (void)playPagAnimationEx:(id)arg1;
- (void)playRfxPagAnimationEx:(id)arg1;
- (void)playPagAnimationAudio:(id)arg1 audioStartTime:(long long)arg2 pagFilePath:(id)arg3;
- (void)onAnimationEnd:(id)arg1;
- (void)onRfxAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onRfxAnimationCancel:(id)arg1;
- (void)onAnimationTimeout:(id)arg1;
- (void)onRfxAnimationTimeout:(id)arg1;
- (void)startGiftAnimationByMagicEngine:(id)arg1;
- (void)playMagicRewardAnimationEx:(id)arg1;
- (BOOL)isGiftSendFromSelf:(id)arg1;
- (void)onAnimationStartWithView:(id)arg1;
- (void)onAnimationEndWithView:(id)arg1;
- (void)onAnimationTimeoutWithView:(id)arg1;
- (void)onAnimationCancelWithView:(id)arg1;
- (void)onAnimationRepeatWithView:(id)arg1;
- (void)onResLoadedWithView:(id)arg1;
- (void)onResUnloadedWithView:(id)arg1;
- (void)onMMLivePriorMagicRewardStart;
- (void)onMMLivePriorMagicRewardEnd;
- (id)getInteractionGiftRenderLogicAutoCreateIfNotExist:(BOOL)arg1;
- (void)startInteractionGiftForLiveGift:(id)arg1;
- (void)onInteractionGiftStartShow:(id)arg1;
- (void)onInteractionGiftTimeout;
- (void)onInteractionGiftPlayingTimeout;
- (void)onInteractionGiftEndShow:(id)arg1;
- (void)showClearEffectEducationIfNeeded;
- (void)showClearEffectEducationLabel;
- (BOOL)canShowClearEffectEducationView;
- (void)saveClearEffectEducationRecord;
- (void)onMMFinderLiveConnectMicAllUserInfoViewDidChangedGiftNotificationContainerViews:(id)arg1;
- (void)onMMFinderLiveAudioRoomInfoViewDidChangedGiftNotificationContainerViews:(id)arg1;
- (void)setDisableTopSlotNotification:(BOOL)arg1;
- (void)startGiftNotification:(id)arg1;
- (unsigned long long)getNextNotificationSlot;
- (void)endGiftNotification:(id)arg1;
- (void)onGiftNotificationEnd:(id)arg1;
- (void)showGiftNotificationViews;
- (void)hideGiftNotificationViews;
- (void)showAttackEffectUpgradeSubNotification:(id)arg1 underGiftNotificationView:(id)arg2;
- (void)updateAttackEffectUpgradeSubNotificationIfNeed:(id)arg1 underGiftNotificationView:(id)arg2;
- (void)adjustContentScaleFactorWithState:(long long)arg1 playerView:(id)arg2;
- (void)onMatrixPerfWarning:(id)arg1;
- (void)onGestureAnimationInvokedForGestureId:(id)arg1 taskId:(id)arg2;
- (void)animateWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)animateWithDuration:(double)arg1 animations:(id /* block */)arg2;
- (void)onPagPerfHangModeStandardTrigger:(id)arg1;
- (double)getGiftAnimationIntervalForPagPerfState;
- (double)getGiftAnimationIntervalForPerfWithStatistics:(id)arg1;
- (void)onLiveTask:(id)arg1 isLargeLiveFlagUpdated:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 enterLiveRoom:(id)arg2;
- (void)onLiveTask:(id)arg1 exitLiveRoom:(long long)arg2 error:(id)arg3;
- (void)onLiveConnectMicPkStatusChange:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)notificationBottom;
- (BOOL)disableTopSlotNotification;
- (id /* block */)didTapNotificationBlock;
- (void)setDidTapNotificationBlock:(id /* block */)arg1;
- (id /* block */)didShowNotificationBlock;
- (void)setDidShowNotificationBlock:(id /* block */)arg1;
- (id /* block */)getKTVSingerHeaderRectBlock;
- (void)setGetKTVSingerHeaderRectBlock:(id /* block */)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)scheduleTimer;
- (void)setScheduleTimer:(id)arg1;
- (id)displayingGiftNotificationViewList;
- (void)setDisplayingGiftNotificationViewList:(id)arg1;
- (id)freeGiftNotificationViewList;
- (void)setFreeGiftNotificationViewList:(id)arg1;
- (id)rewardRecipientToGiftNotificationViewDict;
- (void)setRewardRecipientToGiftNotificationViewDict:(id)arg1;
- (id)rewardRecipientToGiftNotificationContainerViewDict;
- (void)setRewardRecipientToGiftNotificationContainerViewDict:(id)arg1;
- (id)displayingGiftComboItemList;
- (void)setDisplayingGiftComboItemList:(id)arg1;
- (id)comboId2ComboItem;
- (void)setComboId2ComboItem:(id)arg1;
- (id)currentAnimatingPlayItem;
- (void)setCurrentAnimatingPlayItem:(id)arg1;
- (BOOL)isUseRfxPagView;
- (void)setIsUseRfxPagView:(BOOL)arg1;
- (id)giftAnimatingEffectContainerView;
- (void)setGiftAnimatingEffectContainerView:(id)arg1;
- (id)currentGiftAnimatingPlayerView;
- (void)setCurrentGiftAnimatingPlayerView:(id)arg1;
- (id)currentGiftAnimatingRfxPlayerView;
- (void)setCurrentGiftAnimatingRfxPlayerView:(id)arg1;
- (id)magicRewardView;
- (void)setMagicRewardView:(id)arg1;
- (id)magicRewardHandler;
- (void)setMagicRewardHandler:(id)arg1;
- (id)clearGiftEffectEducationGradientView;
- (void)setClearGiftEffectEducationGradientView:(id)arg1;
- (id)clearGiftEffectEducationGradientLayer;
- (void)setClearGiftEffectEducationGradientLayer:(id)arg1;
- (id)clearGiftEffectEducationLabel;
- (void)setClearGiftEffectEducationLabel:(id)arg1;
- (BOOL)isFullPagAnimating;
- (void)setIsFullPagAnimating:(BOOL)arg1;
- (BOOL)isFullRfxAnimating;
- (void)setIsFullRfxAnimating:(BOOL)arg1;
- (BOOL)isFullMagicEngineAnimating;
- (void)setIsFullMagicEngineAnimating:(BOOL)arg1;
- (double)lastFullPagEndTime;
- (void)setLastFullPagEndTime:(double)arg1;
- (double)lastFullMagicEngineEndTime;
- (void)setLastFullMagicEngineEndTime:(double)arg1;
- (double)lastFullEffectEndTime;
- (void)setLastFullEffectEndTime:(double)arg1;
- (double)currMagicRewardAnimationInterval;
- (void)setCurrMagicRewardAnimationInterval:(double)arg1;
- (unsigned int)fullEffectAnimatingTicks;
- (void)setFullEffectAnimatingTicks:(unsigned int)arg1;
- (BOOL)isFullEffectAnimationInterrupted;
- (void)setIsFullEffectAnimationInterrupted:(BOOL)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (BOOL)isInteractionGiftAnimating;
- (void)setIsInteractionGiftAnimating:(BOOL)arg1;
- (id)currentInteractionGiftItem;
- (void)setCurrentInteractionGiftItem:(id)arg1;
- (long long)currInteractionGiftRenderType;
- (void)setCurrInteractionGiftRenderType:(long long)arg1;
- (id)interactionGiftRenderLogic;
- (void)setInteractionGiftRenderLogic:(id)arg1;
- (id)giftAttackAnimatingPlayItemDict;
- (void)setGiftAttackAnimatingPlayItemDict:(id)arg1;
- (id)gestureHintContainerView;
- (void)setGestureHintContainerView:(id)arg1;
- (id)gestureHintIconView;
- (void)setGestureHintIconView:(id)arg1;
- (id)gestureHintLabel;
- (void)setGestureHintLabel:(id)arg1;
- (unsigned long long)gestureHintHideTime;
- (void)setGestureHintHideTime:(unsigned long long)arg1;
- (id)lastGestureHintComboId;
- (void)setLastGestureHintComboId:(id)arg1;
- (BOOL)currentResourcePlayingState;
- (void)setCurrentResourcePlayingState:(BOOL)arg1;
- (BOOL)allow30FpsAnimation;
- (void)setAllow30FpsAnimation:(BOOL)arg1;
- (BOOL)hasSetupGiftPlayerRenderStat;
- (void)setHasSetupGiftPlayerRenderStat:(BOOL)arg1;
- (id)currentGiftAnimationPlayCommand;
- (void)setCurrentGiftAnimationPlayCommand:(id)arg1;
- (BOOL)isForbidMagicRewardGiftPlayEffect;
- (void)setIsForbidMagicRewardGiftPlayEffect:(BOOL)arg1;
- (void)setGiftAttackRenderLogic:(id)arg1;
- (id)giftAttackUpgradeNotificationView;
- (void)setGiftAttackUpgradeNotificationView:(id)arg1;
- (id)hapticsPlayer;
- (void)setHapticsPlayer:(id)arg1;
- (void)setBatchRewardAnimationWeVisionRenderer:(id)arg1;
- (void)setViewId:(id)arg1;
- (id)pagAudioFileOverWriteCounters;
- (void)setPagAudioFileOverWriteCounters:(id)arg1;
- (id)usernameToLatestAttackedInfoDic;
- (void)setUsernameToLatestAttackedInfoDic:(id)arg1;
- (void).cxx_destruct;
@end
