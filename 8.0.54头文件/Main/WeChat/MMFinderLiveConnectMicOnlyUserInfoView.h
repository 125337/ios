@interface MMFinderLiveConnectMicOnlyUserInfoView : MMFinderLiveConnectMicAllUserInfoView <MMLivePivotCollecitonViewZoomAnimatorExt>
- (void)layoutUI;
- (void)hideOtherViews;
- (void)updateUserPkViews;
- (void)doStartPkAnimationFirstPhase;
- (void)doStartPkAnimationSecondPhase;
- (BOOL)configureDirtyHandleForUserViews;
@end

