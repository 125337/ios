@interface MMFinderLiveConnectMicFocusedUserInfoView : MMFinderLiveConnectMicBaseUserInfoView
{
    PAGView * _volumeAnimationView; // +0x8
    UIView * _heatValueLabelContainerView; // +0x10
    UILabel * _heatValueLabel; // +0x18
    MMLiveViewHiddenStatusContainer * _hiddenStatusContainer; // +0x20
    MMFinderLiveClockCountdownView * _paidMicCountdownView; // +0x28
}
- (id)init;
- (id)getPaidMicCountdownView;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)hideNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)onConnectMicUserHasChanged;
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
- (id)liveTask;
- (void)onPaidConnectMicUserCountdownChangedWithSecondsLeft:(unsigned long long)arg1 sdkUserId:(id)arg2;
- (void)updatePaidCountdownViewWithTime:(unsigned long long)arg1;
- (id)volumeAnimationView;
- (void)setVolumeAnimationView:(id)arg1;
- (id)heatValueLabelContainerView;
- (void)setHeatValueLabelContainerView:(id)arg1;
- (id)heatValueLabel;
- (void)setHeatValueLabel:(id)arg1;
- (id)hiddenStatusContainer;
- (void)setHiddenStatusContainer:(id)arg1;
- (id)paidMicCountdownView;
- (void)setPaidMicCountdownView:(id)arg1;
- (void).cxx_destruct;
@end

