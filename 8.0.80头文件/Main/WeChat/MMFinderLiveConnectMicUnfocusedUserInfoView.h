@interface MMFinderLiveConnectMicUnfocusedUserInfoView : MMFinderLiveConnectMicBaseUserInfoView <MMLiveRewardGiftNotificationContainerViewDelegate>
{
    BOOL _showsLikeButton; // +0x8
    MMLiveRewardGiftNotificationContainerView * _giftNotificationContainerView; // +0x10
    UIView * _containerView; // +0x18
    PAGView * _volumeAnimationView; // +0x20
    UIView * _heatValueLabelContainerView; // +0x28
    UILabel * _heatValueLabel; // +0x30
    MMLiveViewHiddenStatusContainer * _hiddenStatusContainer; // +0x38
}
- (id)init;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)hideNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)layoutUI;
- (void)createHeadImageView;
- (void)createNickNameLabel;
- (void)configNicknameLabel;
- (BOOL)needDisplayGlobalRankSignView;
- (BOOL)needDisplayAnonymousSignView;
- (unsigned long long)viewType;
- (void)updateSmallWidgetsHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onLiveRewardGiftNotificationContainerViewWillShowGift:(id)arg1;
- (void)onLiveRewardGiftNotificationContainerViewDidHideGift:(id)arg1;
- (void)configVolumeAnimationView;
- (void)createMicMutedButton;
- (void)configGiftContainerView;
- (void)layoutComponentsForAudienceVideoMode;
- (void)layoutComponentsForAudienceAudioMode;
- (void)layoutComponentsForAnchorVideoMode;
- (void)layoutComponentsForAnchorAudioMode;
- (void)layoutNicknameLabelForAnchorWithAudioModeFlag:(BOOL)arg1;
- (void)updateMicMutedButtonAppearance;
- (void)configHeatValueLabel;
- (BOOL)isTouchPointInsideHeatValueLabel:(CGPoint)arg1;
- (void)handleHeatValueLabelTap;
- (double)trailingWidthAfterNicknameLabelForLikeButton;
- (id)liveTask;
- (id)giftNotificationContainerView;
- (void)setGiftNotificationContainerView:(id)arg1;
- (BOOL)showsLikeButton;
- (void)setShowsLikeButton:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)volumeAnimationView;
- (void)setVolumeAnimationView:(id)arg1;
- (id)heatValueLabelContainerView;
- (void)setHeatValueLabelContainerView:(id)arg1;
- (id)heatValueLabel;
- (void)setHeatValueLabel:(id)arg1;
- (id)hiddenStatusContainer;
- (void)setHiddenStatusContainer:(id)arg1;
- (void).cxx_destruct;
@end
