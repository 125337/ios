@interface MMFinderLiveConnectMicUnfocusedOperationView : UIView <MMFinderLiveConnectMicBaseUserInfoViewDelegate, WCFinderHeadImageViewDelegate, MMFinderLiveRedPacketViewModelObserver, MMLiveVoteViewModelObserver, MMFinderLiveLotteryPacketDisplayLogicExt, MMLiveVoteFloatingViewDisplayLogicDelegate, MMLiveCatalogedMerchandiseLotteryIndicatorViewDelegate, MMLiveCatalogedMerchandiseLotteryLogicExt, MMFinderLiveLikeAudienceDataMgrExt, MMFinderLiveConnectMicOperationViewBase>
{
    BOOL _isConnectMicLikeAvailable; // +0x8
    BOOL _isConnectMicLikeEnabled; // +0x9
    BOOL _isConnectMicDoubleClickLikeEnabled; // +0xa
    BOOL _isConnectMicLikeButtonEnabled; // +0xb
    MMFinderLiveConnectMicUser * _connectMicUserInfo; // +0x10
    id <MMFinderLiveConnectMicOperationViewDelegate> _actionDelegate; // +0x18
    MMFinderLiveLotteryPacketDisplayLogic * _lotteryPacketDisplayLogic; // +0x20
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x28
    MMLiveGradientLayerView * _bottomGradientView; // +0x30
    MMFinderLiveConnectMicUnfocusedUserInfoView * _userInfoView; // +0x38
    UIView * _redPacketAnimationContainerView; // +0x40
    MMFinderLiveRedPacketView * _redPacketAnimationView; // +0x48
    UIView * _lotteryPacketAnimationContainerView; // +0x50
    UIView * _lotteryPacketAnimationScaleView; // +0x58
    UIView * _catalogedMerchandiseIndicatorContainerView; // +0x60
    UIView * _catalogedMerchandiseIndicatorScaleView; // +0x68
    MMLiveCatalogedMerchandiseLotteryIndicatorView * _catalogedMerchandiseIndicatorView; // +0x70
    UIView * _voteFloatingViewContainer; // +0x78
    MMLiveVoteFloatingView * _voteFloatingView; // +0x80
    MMLiveVoteFloatingViewDisplayLogic * _voteFloatingViewDisplayLogic; // +0x88
    MMLiveViewHiddenStatusContainer * _hiddenStatusContainer; // +0x90
    MMLiveLikeAnimationUtil * _audienceSelflikeAnimationUtil; // +0x98
    MMLiveLikeAnimationUtil * _audienceOtherLikeAnimationUtil; // +0xa0
    MMLiveLikeAnimationUtil * _doubleClickedlikeAnimationUtil; // +0xa8
    MMAudienceLiveLikePlayUtil * _audienceLikePlayUtil; // +0xb0
    UITapGestureRecognizer * _singleTapGesture; // +0xb8
    MMLiveMultipleTapGestureRecognizer * _multipleTapGesture; // +0xc0
    UIView * _multipleTapGestureContainerView; // +0xc8
    MMLiveLikeButton * _likeButton; // +0xd0
    UIView * _likeAnimationWrapper; // +0xd8
    long long _likeCount; // +0xe0
    CGRect _displayNormalizedFrame; // +0xe8
}
- (id)initWithTaskId:(id)arg1;
- (void)prepareForReuse;
- (unsigned long long)viewType;
- (void)setDisplayNormalizedFrame:(CGRect)arg1;
- (id)giftNotificationContainerView;
- (void)setLotteryPacketDisplayLogic:(id)arg1;
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
- (void)layoutSubviews;
- (void)onTapBackground:(id)arg1;
- (void)onBackgroundViewTapped:(id)arg1;
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
- (id)likeMgr;
- (BOOL)connectMicLikeSwitchValueWithMainSwitchValue:(BOOL)arg1;
- (void)configLikeRelatedUtils;
- (void)configLikeAnimationUtils;
- (void)layoutLikeRelatedUI;
- (CGPoint)getLikeButtonRelativeCenter;
- (void)onBackgroundViewDoubleTapped:(CGPoint)arg1;
- (void)onLiveLikeAudienceDisplayLikeCountUpdate:(unsigned long long)arg1 othersDisplayLikeCount:(unsigned long long)arg2 taskId:(id)arg3 micId:(id)arg4;
- (void)onLiveLikeAudienceLikeContactListUpdate:(id)arg1 taskId:(id)arg2 micId:(id)arg3;
- (void)onLiveLikeAudienceIsLikeEnabledChangedWithTaskId:(id)arg1;
- (long long)layoutOrientation;
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
- (id)audienceSelflikeAnimationUtil;
- (void)setAudienceSelflikeAnimationUtil:(id)arg1;
- (id)audienceOtherLikeAnimationUtil;
- (void)setAudienceOtherLikeAnimationUtil:(id)arg1;
- (id)doubleClickedlikeAnimationUtil;
- (void)setDoubleClickedlikeAnimationUtil:(id)arg1;
- (id)audienceLikePlayUtil;
- (void)setAudienceLikePlayUtil:(id)arg1;
- (id)singleTapGesture;
- (void)setSingleTapGesture:(id)arg1;
- (id)multipleTapGesture;
- (void)setMultipleTapGesture:(id)arg1;
- (id)multipleTapGestureContainerView;
- (void)setMultipleTapGestureContainerView:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)likeAnimationWrapper;
- (void)setLikeAnimationWrapper:(id)arg1;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (BOOL)isConnectMicLikeAvailable;
- (void)setIsConnectMicLikeAvailable:(BOOL)arg1;
- (BOOL)isConnectMicLikeEnabled;
- (void)setIsConnectMicLikeEnabled:(BOOL)arg1;
- (BOOL)isConnectMicDoubleClickLikeEnabled;
- (void)setIsConnectMicDoubleClickLikeEnabled:(BOOL)arg1;
- (BOOL)isConnectMicLikeButtonEnabled;
- (void)setIsConnectMicLikeButtonEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
