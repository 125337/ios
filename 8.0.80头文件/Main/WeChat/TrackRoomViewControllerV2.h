@interface TrackRoomViewControllerV2 : MMWindowViewController <TrackRoomMainWindowDelegate, MinimizeNewTransitionControllerDelegate>
{
    BOOL _m_didInstallMinimizeTransition; // +0x7c
    TrackRoomViewV2 * _trackRoomView; // +0x80
    TrackRoomMainWindow * _ownerWindow; // +0x88
    MinimizeNewTransitionController * _transitionController; // +0x90
    UIImageView * _m_snapshotBlurView; // +0x98
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initMinimizePanGesture;
- (void)addScreenEdgePanGestureRecognizer:(id)arg1;
- (void)resetNormalView;
- (BOOL)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (BOOL)isSupportNavigationInteractive;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (BOOL)isSupportScreenAnySwipeFromLeftToRight:(id)arg1;
- (BOOL)isSupportScreenAnySwipeFromTopToBottom:(id)arg1;
- (BOOL)shouldBeginMinimizeCircleInteraction;
- (id)getMinimizationTransitionContext;
- (void)onMinimizeTransitionBegin:(unsigned int)arg1;
- (void)onMinimizeTransitionBeginWithoutContext;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(BOOL)arg2;
- (void)onMinimizeAnimationCompleteDone;
- (void)onMinimizeAnimationRecoverDone;
- (void)onMinimizeTransitionChanged:(double)arg1 translation:(CGPoint)arg2;
- (CGRect)onTrackRoomMainWindowRequestMinimizeFrame;
- (id)onTrackRoomMainWindowGetMainRootView;
- (id)onTrackRoomMainWindowGetMinimizeImage;
- (id)onTrackRoomMainWindowGetCustomSnapshot;
- (BOOL)shouldSyncBackgroundColorToExtendedContentView;
- (void)onTrackRoomMainWindowExtendAnimationDidEnd;
- (void)onTrackRoomMainWindowCollapseAnimationWillStart;
- (void)onTrackRoomMainWindowCollapseAnimationDidEnd;
- (void)onTrackRoomMainWindowExtendFromCollapseAnimationWillStart;
- (void)onTrackRoomMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onTrackRoomMainWindowQuitAnimationWillStart;
- (void)onTrackRoomMainWindowQuitAnimationDidEnd;
- (id)trackRoomView;
- (void)setTrackRoomView:(id)arg1;
- (id)ownerWindow;
- (void)setOwnerWindow:(id)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (id)m_snapshotBlurView;
- (void)setM_snapshotBlurView:(id)arg1;
- (BOOL)m_didInstallMinimizeTransition;
- (void)setM_didInstallMinimizeTransition:(BOOL)arg1;
- (void).cxx_destruct;
@end
