@interface MMFinderLiveConnectMicFocusedUserInfoView : MMFinderLiveConnectMicBaseUserInfoView
{
    BOOL _showsLikeButton; // +0x8
    PAGView * _volumeAnimationView; // +0x10
    UIView * _heatValueLabelContainerView; // +0x18
    UILabel * _heatValueLabel; // +0x20
    MMLiveViewHiddenStatusContainer * _hiddenStatusContainer; // +0x28
}
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)hideNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)layoutUI;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)createHeadImageView;
- (void)createNickNameLabel;
- (BOOL)needDisplayGlobalRankSignView;
- (BOOL)needDisplayAnonymousSignView;
- (void)configGlobalRankSignView;
- (unsigned long long)viewType;
- (void)updateSmallWidgetsHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)configVolumeAnimationView;
- (BOOL)useCenterLayoutMode;
- (void)layoutInCenterMode;
- (void)updateMicMutedButtonAppearance;
- (void)configHeatValueLabel;
- (BOOL)isTouchPointInsideHeatValueLabel:(CGPoint)arg1;
- (void)handleHeatValueLabelTap;
- (double)trailingWidthAfterNicknameLabelForLikeButton;
- (id)liveTask;
- (BOOL)showsLikeButton;
- (void)setShowsLikeButton:(BOOL)arg1;
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
