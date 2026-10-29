@interface MMFinderLiveConnectMicFocusedOperationView : UIView <MMFinderLiveConnectMicBaseUserInfoViewDelegate, WCFinderHeadImageViewDelegate, MMFinderLiveConnectMicOperationViewBase>
{
    BOOL _isLiveAnchorMain; // +0x8
    BOOL _isConnectMicLikeAvailable; // +0x9
    BOOL _isConnectMicLikeEnabled; // +0xa
    BOOL _isConnectMicDoubleClickLikeEnabled; // +0xb
    BOOL _isConnectMicLikeButtonEnabled; // +0xc
    MMFinderLiveConnectMicUser * _connectMicUserInfo; // +0x10
    id <MMFinderLiveConnectMicOperationViewDelegate> _actionDelegate; // +0x18
    MMLiveRewardGiftNotificationContainerView * _giftNotificationContainerView; // +0x20
    MMFinderLiveLotteryPacketDisplayLogic * _lotteryPacketDisplayLogic; // +0x28
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x30
    MMFinderLiveConnectMicFocusedUserInfoView * _userInfoView; // +0x38
    MMLiveLikeAnimationUtil * _doubleClickedlikeAnimationUtil; // +0x40
    UIView * _likeAnimationWrapper; // +0x48
    UITapGestureRecognizer * _singleTapGesture; // +0x50
    MMLiveMultipleTapGestureRecognizer * _multipleTapGesture; // +0x58
    MMLiveLikeButton * _likeButtonView; // +0x60
    CGRect _displayNormalizedFrame; // +0x68
}
- (id)initWithTaskId:(id)arg1;
- (void)updateIsLiveAnchorMain;
- (void)prepareForReuse;
- (unsigned long long)viewType;
- (void)setDisplayNormalizedFrame:(CGRect)arg1;
- (void)showWithConnectMicUserInfo:(id)arg1 isGlobalSmallMode:(BOOL)arg2 isInFullScreenPKStyle:(BOOL)arg3 configureLiveDirtyHandle:(BOOL)arg4 hideSmallWidgets:(BOOL)arg5 micLayoutMode:(unsigned long long)arg6;
- (void)clearAndHide;
- (void)updateOperationViewsAlpha:(double)arg1;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateExtraTopInset:(double)arg1;
- (void)updateExtraLeftTopInset:(double)arg1;
- (void)updateExtraBottomInset:(double)arg1;
- (void)updateUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)updateLiveHeatValue;
- (id)getUserInfoView;
- (void)insertToPIPRenderLayerIfNeeded;
- (id)temporarilyHideNonEssentialViews;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)updateSmallWidgetsHidden:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapNickNameWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapMicMutedButtonWithUserInfo:(id)arg1;
- (void)onTapBackground:(id)arg1;
- (void)onBackgroundViewTapped:(id)arg1;
- (void)onBackgroundViewDoubleTapped:(CGPoint)arg1;
- (void)onLiveLikeAudienceIsLikeEnabledChangedWithTaskId:(id)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)configConnectMicOperationView:(BOOL)arg1;
- (BOOL)isFeedStreamTask;
- (BOOL)insertAudioMicOperationViewToPIPRenderLayer;
- (void)configLikeRelatedUtils;
- (void)cleanupGestures;
- (void)configLikeButtonView;
- (void)onLikeButtonViewTapped;
- (void)playLikeButtonTapAnimation;
- (void)layoutLikeButtonView;
- (id)likeMgr;
- (long long)layoutOrientation;
- (id)connectMicUserInfo;
- (void)setConnectMicUserInfo:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)giftNotificationContainerView;
- (void)setGiftNotificationContainerView:(id)arg1;
- (id)lotteryPacketDisplayLogic;
- (void)setLotteryPacketDisplayLogic:(id)arg1;
- (CGRect)displayNormalizedFrame;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (id)userInfoView;
- (void)setUserInfoView:(id)arg1;
- (BOOL)isLiveAnchorMain;
- (void)setIsLiveAnchorMain:(BOOL)arg1;
- (id)doubleClickedlikeAnimationUtil;
- (void)setDoubleClickedlikeAnimationUtil:(id)arg1;
- (id)likeAnimationWrapper;
- (void)setLikeAnimationWrapper:(id)arg1;
- (id)singleTapGesture;
- (void)setSingleTapGesture:(id)arg1;
- (id)multipleTapGesture;
- (void)setMultipleTapGesture:(id)arg1;
- (BOOL)isConnectMicLikeAvailable;
- (void)setIsConnectMicLikeAvailable:(BOOL)arg1;
- (BOOL)isConnectMicLikeEnabled;
- (void)setIsConnectMicLikeEnabled:(BOOL)arg1;
- (BOOL)isConnectMicDoubleClickLikeEnabled;
- (void)setIsConnectMicDoubleClickLikeEnabled:(BOOL)arg1;
- (id)likeButtonView;
- (void)setLikeButtonView:(id)arg1;
- (BOOL)isConnectMicLikeButtonEnabled;
- (void)setIsConnectMicLikeButtonEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
