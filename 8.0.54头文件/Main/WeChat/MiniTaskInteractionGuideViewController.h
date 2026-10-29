@interface MiniTaskInteractionGuideViewController : MMUIViewController <MiniTaskPanGestureHandlerDelegate>
{
    NSString * _educationTips; // +0x68
    UIImageView * _fakeMainFrameSnapshotView; // +0x70
    MMUIButton * _fakeSnapshotMaskView; // +0x78
    UIView * _fakeSnapshotShadowView; // +0x80
    MMUILabel * _swipeEducationLabel; // +0x88
    id /* block */ _guideConfirmBlock; // +0x90
    MiniTaskPanGestureHandler * _leftPanPopGestureHandler; // +0x98
    MiniTaskDurantionCounter * _eduDurantionCounter; // +0xa0
}
- (id)initWithGuideConfirmBlock:(id /* block */)arg1 educationTips:(id)arg2;
- (void)dealloc;
- (void)initMainUI;
- (void)setupBackgroundView;
- (void)setupFakeSnapshot;
- (void)initNavigationItems;
- (void)setupEducationLabel;
- (void)setupSwipeExitGesture;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)registerAppActiveStateObsever;
- (void)unregisterAppActiveStateObsever;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)onFakeSnapshotClicked;
- (void)onSwipeLeftOnView:(id)arg1;
- (id)genGuideEducationLabel;
- (void)setupLeftPanGestureHandler;
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (void)onMiniInteractiveTransitionDidEndOfPanGesture:(id)arg1 isComplete:(BOOL)arg2;
- (BOOL)shouldMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)educationTips;
- (void)setEducationTips:(id)arg1;
- (id)fakeMainFrameSnapshotView;
- (void)setFakeMainFrameSnapshotView:(id)arg1;
- (id)fakeSnapshotMaskView;
- (void)setFakeSnapshotMaskView:(id)arg1;
- (id)fakeSnapshotShadowView;
- (void)setFakeSnapshotShadowView:(id)arg1;
- (id)swipeEducationLabel;
- (void)setSwipeEducationLabel:(id)arg1;
- (id /* block */)guideConfirmBlock;
- (void)setGuideConfirmBlock:(id /* block */)arg1;
- (id)leftPanPopGestureHandler;
- (void)setLeftPanPopGestureHandler:(id)arg1;
- (id)eduDurantionCounter;
- (void)setEduDurantionCounter:(id)arg1;
- (void).cxx_destruct;
@end

