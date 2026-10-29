@interface MMFinderLiveConnectMicFocusedOperationView : UIView <MMFinderLiveConnectMicBaseUserInfoViewDelegate, WCFinderHeadImageViewDelegate, MMFinderLiveConnectMicOperationViewBase>
{
    MMFinderLiveConnectMicUser * _connectMicUserInfo; // +0x8
    id <MMFinderLiveConnectMicOperationViewDelegate> _actionDelegate; // +0x10
    MMLiveRewardGiftNotificationContainerView * _giftNotificationContainerView; // +0x18
    MMFinderLiveLotteryPacketDisplayLogic * _lotteryPacketDisplayLogic; // +0x20
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x28
    MMFinderLiveConnectMicFocusedUserInfoView * _userInfoView; // +0x30
    CGRect _displayNormalizedFrame; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (void)prepareForReuse;
- (id)refViewForDisplayPaidMicKeepAliveTips;
- (unsigned long long)viewType;
- (void)setDisplayNormalizedFrame:(CGRect)arg1;
- (void)showWithConnectMicUserInfo:(id)arg1 isGlobalSmallMode:(BOOL)arg2 isInFullScreenPKStyle:(BOOL)arg3 configureLiveDirtyHandle:(BOOL)arg4 hideSmallWidgets:(BOOL)arg5;
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
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)configConnectMicOperationView:(BOOL)arg1;
- (BOOL)isFeedStreamTask;
- (BOOL)insertAudioMicOperationViewToPIPRenderLayer;
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
- (void).cxx_destruct;
@end

