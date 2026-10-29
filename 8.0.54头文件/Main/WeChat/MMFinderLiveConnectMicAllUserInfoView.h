@interface MMFinderLiveConnectMicAllUserInfoView : UIView <MMFinderLiveConnectMicOperationViewDelegate, TXPIPManagerExt, MMFinderLiveConnectMicUnoccupiedSeatViewDelegate, MMFinderLivePkTaskedBonusBarViewDelegate>
{
    BOOL _needHidden; // +0x8
    BOOL _isInGenericPkIndicatorContainerAnimation; // +0x9
    BOOL _isInDrawAnimation; // +0xa
    BOOL _isInStartPkAnimation; // +0xb
    BOOL _isHiddenSmallWidgets; // +0xc
    BOOL _isInSuperfanPKStyle; // +0xd
    unsigned int _lastDisplayedTime; // +0x10
    id <MMFinderLiveConnectMicAllUserInfoViewDelegate> _actionDelegate; // +0x18
    id <MMFinderLiveConnectMicAllUserInfoViewGiftNotificationDelegate> _giftNotificationDelegate; // +0x20
    id <MMFinderLiveConnectMicAllUserInfoViewLotteryPacketDelegate> _lotteryPacketDelegate; // +0x28
    id <MMFinderLiveConnectMicAllUserInfoViewLayoutInfoDelegate> _layoutInfoDelegate; // +0x30
    UIView<MMFinderLiveConnectMicOperationViewBase> * _currentAnchorInfoView; // +0x38
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x40
    double _operationViewAlpha; // +0x48
    unsigned long long _anchorPkState; // +0x50
    unsigned long long _lastAnchorPkState; // +0x58
    NSString * _lastPlayedStartAnimationPkSessionId; // +0x60
    MMFinderLiveConnectMicPkProgressTimeIndicator * _timeIndicator; // +0x68
    UIView * _audiencePkSoloIndicatorContainer; // +0x70
    UIImageView * _genericPkIndicatorContainer; // +0x78
    UIView * _topPkProgressView; // +0x80
    MMUIButton * _topPkLeftProgressBar; // +0x88
    CAGradientLayer * _topPkLeftProgressGradientLayer; // +0x90
    MMUIButton * _topPkRightProgressBar; // +0x98
    CAGradientLayer * _topPkRightProgressGradientLayer; // +0xa0
    PAGView * _topPkProgressIndicator; // +0xa8
    UIImageView * _topPkLeftRewardIcon; // +0xb0
    UIImageView * _topPkRightRewardIcon; // +0xb8
    UILabel * _topPkLeftRewardLabel; // +0xc0
    UILabel * _topPkRightRewardLabel; // +0xc8
    PAGView * _drawAnimationView; // +0xd0
    PAGView * _startPkPAGAnimationView; // +0xd8
    UIView * _startPkAnimationLeftContainerView; // +0xe0
    UILabel * _startPkAnimationLeftLabel; // +0xe8
    WCFinderHeadImageView * _startPkAnimationLeftAvatar; // +0xf0
    UIView * _startPkAnimationRightContainerView; // +0xf8
    UILabel * _startPkAnimationRightLabel; // +0x100
    WCFinderHeadImageView * _startPkAnimationRightAvatar; // +0x108
    MMFinderLivePkTaskedBonusBarBackgroundFrenzyView * _pkFrenzyView; // +0x110
    UIImageView * _multiAnchorsPkStartAnimationView; // +0x118
    double _victoryViewExtraTopMargin; // +0x120
    NSMutableArray * _unoccupiedSeatViewList; // +0x128
    NSMutableArray * _cachedUnoccupiedSeatViewList; // +0x130
    MMFinderLivePkTaskedBonusBarView * _taskedBonusBarView; // +0x138
    MMFinderLiveCommonOnlineMemberSheet * _onlineMemberSheet; // +0x140
    NSMutableDictionary * _userViewWrapDic; // +0x148
    MMFinderLiveConnectMicUsersInfo * _allMicUsersInfo; // +0x150
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (id)initWithTaskId:(id)arg1;
- (void)updateTaskId:(id)arg1;
- (void)dealloc;
- (void)clearForExitLive;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)clearUserViewWrapDicAndConnectMicUserViews;
- (void)clearConnectMicUserViewWithViewWrap:(id)arg1;
- (void)clearOtherConnectMicAnchorUserInfo;
- (void)updateConnectMicUserViewsWithMicUsersInfo:(id)arg1;
- (void)updateUnoccupiedSeatViews;
- (void)clearCurrentUnoccupiedSeatViewList;
- (BOOL)configureDirtyHandleForUserViews;
- (id)generateGiftNotificationContainerViewsDic;
- (void)configCurrentAnchorInfoViewWithUsersInfo:(id)arg1;
- (void)layoutUI;
- (void)showWithConnectMicUsersInfo:(id)arg1;
- (void)clearAndHide;
- (double)getHeightByWidth:(double)arg1;
- (id)liveTask;
- (BOOL)isFeedStreamTask;
- (BOOL)disableStartPkAnimation;
- (BOOL)disableStartPkAnimWhenFeedStreamHasPlayed:(id)arg1;
- (void)updateOperationViewsAlpha:(double)arg1;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateUserViewExtraTopInset;
- (void)updateAnotherAnchorUserViewExtraLeftTopInset;
- (void)toggleSuperfanPKProgressStyle:(BOOL)arg1;
- (id)getTopPKProgressIndicatorPAGPath;
- (void)updateUserPkState;
- (void)updateVictoryViewExtraTopMargin:(double)arg1;
- (double)getTopProgressViewHeight;
- (double)getTopProgressViewAndPKAnimationMaxHeight;
- (CGRect)getCurrentAnchorPureAudioTipRelatedFrame;
- (CGPoint)relatedOriginForWidgetContainer;
- (id)getAudienceAudioMicUserOperationViewList;
- (id)micUserOperationViewUnderPoint:(CGPoint)arg1;
- (id)micUserOperationViewForUser:(id)arg1;
- (void)tapMicUserOperationView:(id)arg1;
- (void)imageWithEssentialInfoViewsWithCompletionBlock:(id /* block */)arg1;
- (void)clearAllPkViewsAnimation;
- (void)configGenericPkIndicatorContainer;
- (void)updatePkInfoUIConf;
- (void)configTopPkProgressView;
- (void)configDrawAnimationView;
- (void)setIsInDrawAnimation:(BOOL)arg1;
- (void)configStartPkAnimationView;
- (void)invokeNewStartPkAnimation;
- (BOOL)showTopProgress;
- (BOOL)showAudienceTimeIndicator;
- (BOOL)showGenericTimeIndicator;
- (BOOL)isTimeIndicatorPermanentInPk;
- (BOOL)showTimeIndicator;
- (BOOL)useNewStartAnim;
- (void)doStartPkAnimationFirstPhase;
- (void)doStartPkAnimationSecondPhase;
- (void)updatePkDetailViewsWhenStartAnimationEnd;
- (id)allMicOperationViews;
- (void)clearStartPkAnimation;
- (void)updateUserPkViews;
- (void)invokeTopProgressFadeAnimation;
- (void)updateTimeIndicator;
- (void)updateTopPkProgressView;
- (BOOL)isInTopStartPkAnimation;
- (id)leftPkTeam;
- (id)rightPkTeam;
- (id)anotherAnchorInfoView;
- (void)layoutPkViews;
- (void)layoutGenericTimeIndicator;
- (void)layoutAudienceTimeIndicator;
- (CGRect)firstAudienceViewPivotRect;
- (double)genericPkIndicatorContainerTop;
- (void)layoutTopPkProgressView;
- (void)layoutDrawAnimationView;
- (void)layoutStartPkPAGAnimationView;
- (void)layoutStartPkAnimationContainerView;
- (void)layoutPkTaskedBonusBarView;
- (void)onClickAcceptPk;
- (CGRect)anchorRect;
- (void)updateLiveHeatValueForUsername:(id)arg1;
- (void)configSuperfanExtraPkCreditLabelWithDiffCount:(unsigned long long)arg1;
- (void)onHideSuperfanExtraCountLabel;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isInFullScreenPKStyle;
- (void)updateSmallWidgetsHidden:(BOOL)arg1;
- (CGRect)onMMFinderLiveConnectMicOperationViewNormalizedFrameAspectRatioConversionRequested:(CGRect)arg1;
- (void)onMMFinderLiveConnectMicOperationViewTapAvatarWithUserInfo:(id)arg1 targetMicOperationView:(id)arg2;
- (void)onMMFinderLiveConnectMicOperationViewTapMicMutedButtonWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationViewTapBackgroundWithUserInfo:(id)arg1 targetMicOperationView:(id)arg2;
- (void)onMMFinderLiveConnectMicOperationViewTapVote;
- (void)onMMFinderLiveConnectMicOperationViewTapAcceptPk;
- (void)onMMFinderLiveConnectMicOperationViewHeatValueViewUpdateLayout;
- (void)onMMFinderLiveConnectMicOperationViewMicModeGiftNotificationViewShowingChanged;
- (void)onMMFinderLiveConnectMicOperationViewPkHeatViewTappedForPkUser:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationViewTapCurrentAnchorMuteMicButton;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onNotifyGlobalLevelUpdated:(unsigned int)arg1 forContact:(id)arg2;
- (void)onPIPHandleLogicConfig:(id)arg1;
- (void)onMMFinderLiveConnectMicUnoccupiedSeatViewTappedWithMicSeatInfo:(id)arg1;
- (void)onGiftingRequestedByTaskedBonusBar:(id)arg1 withPreferredGiftId:(id)arg2;
- (void)configAudiencePkSoloIndicatorContainer;
- (void)configTimeIndicator;
- (double)getExtraTopMarginToLiveView;
- (void)updateSeatName;
- (void)showOnlineMemberSheetOpenParamsWithTeam:(id)arg1 currentPkUser:(id)arg2;
- (BOOL)isDoubleSidePK:(id)arg1;
- (id)currentPkUser;
- (void)topPkLeftClick:(id)arg1;
- (void)topPkRightClick:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)giftNotificationDelegate;
- (void)setGiftNotificationDelegate:(id)arg1;
- (id)lotteryPacketDelegate;
- (void)setLotteryPacketDelegate:(id)arg1;
- (id)layoutInfoDelegate;
- (void)setLayoutInfoDelegate:(id)arg1;
- (BOOL)needHidden;
- (void)setNeedHidden:(BOOL)arg1;
- (id)currentAnchorInfoView;
- (void)setCurrentAnchorInfoView:(id)arg1;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (double)operationViewAlpha;
- (void)setOperationViewAlpha:(double)arg1;
- (unsigned long long)anchorPkState;
- (void)setAnchorPkState:(unsigned long long)arg1;
- (unsigned long long)lastAnchorPkState;
- (void)setLastAnchorPkState:(unsigned long long)arg1;
- (unsigned int)lastDisplayedTime;
- (void)setLastDisplayedTime:(unsigned int)arg1;
- (id)lastPlayedStartAnimationPkSessionId;
- (void)setLastPlayedStartAnimationPkSessionId:(id)arg1;
- (id)timeIndicator;
- (void)setTimeIndicator:(id)arg1;
- (id)audiencePkSoloIndicatorContainer;
- (void)setAudiencePkSoloIndicatorContainer:(id)arg1;
- (id)genericPkIndicatorContainer;
- (void)setGenericPkIndicatorContainer:(id)arg1;
- (BOOL)isInGenericPkIndicatorContainerAnimation;
- (void)setIsInGenericPkIndicatorContainerAnimation:(BOOL)arg1;
- (id)topPkProgressView;
- (void)setTopPkProgressView:(id)arg1;
- (id)topPkLeftProgressBar;
- (void)setTopPkLeftProgressBar:(id)arg1;
- (id)topPkLeftProgressGradientLayer;
- (void)setTopPkLeftProgressGradientLayer:(id)arg1;
- (id)topPkRightProgressBar;
- (void)setTopPkRightProgressBar:(id)arg1;
- (id)topPkRightProgressGradientLayer;
- (void)setTopPkRightProgressGradientLayer:(id)arg1;
- (id)topPkProgressIndicator;
- (void)setTopPkProgressIndicator:(id)arg1;
- (id)topPkLeftRewardIcon;
- (void)setTopPkLeftRewardIcon:(id)arg1;
- (id)topPkRightRewardIcon;
- (void)setTopPkRightRewardIcon:(id)arg1;
- (id)topPkLeftRewardLabel;
- (void)setTopPkLeftRewardLabel:(id)arg1;
- (id)topPkRightRewardLabel;
- (void)setTopPkRightRewardLabel:(id)arg1;
- (id)drawAnimationView;
- (void)setDrawAnimationView:(id)arg1;
- (BOOL)isInDrawAnimation;
- (id)startPkPAGAnimationView;
- (void)setStartPkPAGAnimationView:(id)arg1;
- (id)startPkAnimationLeftContainerView;
- (void)setStartPkAnimationLeftContainerView:(id)arg1;
- (id)startPkAnimationLeftLabel;
- (void)setStartPkAnimationLeftLabel:(id)arg1;
- (id)startPkAnimationLeftAvatar;
- (void)setStartPkAnimationLeftAvatar:(id)arg1;
- (id)startPkAnimationRightContainerView;
- (void)setStartPkAnimationRightContainerView:(id)arg1;
- (id)startPkAnimationRightLabel;
- (void)setStartPkAnimationRightLabel:(id)arg1;
- (id)startPkAnimationRightAvatar;
- (void)setStartPkAnimationRightAvatar:(id)arg1;
- (BOOL)isInStartPkAnimation;
- (void)setIsInStartPkAnimation:(BOOL)arg1;
- (BOOL)isHiddenSmallWidgets;
- (void)setIsHiddenSmallWidgets:(BOOL)arg1;
- (id)pkFrenzyView;
- (void)setPkFrenzyView:(id)arg1;
- (BOOL)isInSuperfanPKStyle;
- (void)setIsInSuperfanPKStyle:(BOOL)arg1;
- (id)multiAnchorsPkStartAnimationView;
- (void)setMultiAnchorsPkStartAnimationView:(id)arg1;
- (double)victoryViewExtraTopMargin;
- (void)setVictoryViewExtraTopMargin:(double)arg1;
- (id)unoccupiedSeatViewList;
- (void)setUnoccupiedSeatViewList:(id)arg1;
- (id)cachedUnoccupiedSeatViewList;
- (void)setCachedUnoccupiedSeatViewList:(id)arg1;
- (id)taskedBonusBarView;
- (void)setTaskedBonusBarView:(id)arg1;
- (id)onlineMemberSheet;
- (void)setOnlineMemberSheet:(id)arg1;
- (id)userViewWrapDic;
- (void)setUserViewWrapDic:(id)arg1;
- (id)allMicUsersInfo;
- (void)setAllMicUsersInfo:(id)arg1;
- (void).cxx_destruct;
@end

