@interface MMFinderLiveConnectMicUnfocusedOperationView : UIView <MMFinderLiveConnectMicBaseUserInfoViewDelegate, WCFinderHeadImageViewDelegate, MMFinderLiveRedPacketViewModelObserver, MMLiveVoteViewModelObserver, MMFinderLiveLotteryPacketDisplayLogicExt, MMLiveVoteFloatingViewDisplayLogicDelegate, MMLiveCatalogedMerchandiseLotteryIndicatorViewDelegate, MMLiveCatalogedMerchandiseLotteryLogicExt, MMFinderLiveConnectMicOperationViewBase>
{
    MMFinderLiveConnectMicUser * _connectMicUserInfo; // +0x8
    id <MMFinderLiveConnectMicOperationViewDelegate> _actionDelegate; // +0x10
    MMFinderLiveLotteryPacketDisplayLogic * _lotteryPacketDisplayLogic; // +0x18
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x20
    MMLiveGradientLayerView * _bottomGradientView; // +0x28
    MMFinderLiveConnectMicUnfocusedUserInfoView * _userInfoView; // +0x30
    UIView * _redPacketAnimationContainerView; // +0x38
    MMFinderLiveRedPacketView * _redPacketAnimationView; // +0x40
    UIView * _lotteryPacketAnimationContainerView; // +0x48
    UIView * _lotteryPacketAnimationScaleView; // +0x50
    UIView * _catalogedMerchandiseIndicatorContainerView; // +0x58
    UIView * _catalogedMerchandiseIndicatorScaleView; // +0x60
    MMLiveCatalogedMerchandiseLotteryIndicatorView * _catalogedMerchandiseIndicatorView; // +0x68
    UIView * _voteFloatingViewContainer; // +0x70
    MMLiveVoteFloatingView * _voteFloatingView; // +0x78
    MMLiveVoteFloatingViewDisplayLogic * _voteFloatingViewDisplayLogic; // +0x80
    MMLiveViewHiddenStatusContainer * _hiddenStatusContainer; // +0x88
    CGRect _displayNormalizedFrame; // +0x90
}
- (id)initWithTaskId:(id)arg1;
- (void)prepareForReuse;
- (id)refViewForDisplayPaidMicKeepAliveTips;
- (unsigned long long)viewType;
- (void)setDisplayNormalizedFrame:(CGRect)arg1;
- (id)giftNotificationContainerView;
- (void)setLotteryPacketDisplayLogic:(id)arg1;
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
- (void)layoutSubviews;
- (void)onTapBackground:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapNickNameWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapMicMutedButtonWithUserInfo:(id)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(BOOL)arg2;
- (void)onFinderLiveLotteryPacketDisplayLogicDidChangeLittlePacketShow:(id)arg1;
- (void)onCatalogedMerchandiseLotteryIndicatorViewTapped:(id)arg1;
- (void)onCatalogedMerchandiseLotteryInfoUpdatedByLogic:(id)arg1;
- (void)configConnectMicOperationView:(BOOL)arg1;
- (void)setupLotteryPacketView;
- (void)setupCatalogedMerchandiseLotteryView;
- (void)updateCatalogedMerchandiseLotteryViewWithLotteryLogic:(id)arg1;
- (void)setupVoteFloatingView;
- (void)setupBackgroundTapGestureRecognizer;
- (BOOL)insertAudioMicOperationViewToPIPRenderLayer;
- (BOOL)isFeedStreamTask;
- (id)liveTask;
- (void)onVotingInfoUpdate:(id)arg1 fromMsg:(BOOL)arg2;
- (void)onToggleFloatingViewHidden:(BOOL)arg1;
- (id)connectMicUserInfo;
- (void)setConnectMicUserInfo:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)lotteryPacketDisplayLogic;
- (CGRect)displayNormalizedFrame;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg1;
- (id)userInfoView;
- (void)setUserInfoView:(id)arg1;
- (id)redPacketAnimationContainerView;
- (void)setRedPacketAnimationContainerView:(id)arg1;
- (id)redPacketAnimationView;
- (void)setRedPacketAnimationView:(id)arg1;
- (id)lotteryPacketAnimationContainerView;
- (void)setLotteryPacketAnimationContainerView:(id)arg1;
- (id)lotteryPacketAnimationScaleView;
- (void)setLotteryPacketAnimationScaleView:(id)arg1;
- (id)catalogedMerchandiseIndicatorContainerView;
- (void)setCatalogedMerchandiseIndicatorContainerView:(id)arg1;
- (id)catalogedMerchandiseIndicatorScaleView;
- (void)setCatalogedMerchandiseIndicatorScaleView:(id)arg1;
- (id)catalogedMerchandiseIndicatorView;
- (void)setCatalogedMerchandiseIndicatorView:(id)arg1;
- (id)voteFloatingViewContainer;
- (void)setVoteFloatingViewContainer:(id)arg1;
- (id)voteFloatingView;
- (void)setVoteFloatingView:(id)arg1;
- (id)voteFloatingViewDisplayLogic;
- (void)setVoteFloatingViewDisplayLogic:(id)arg1;
- (id)hiddenStatusContainer;
- (void)setHiddenStatusContainer:(id)arg1;
- (void).cxx_destruct;
@end
