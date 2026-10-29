@interface MiniRecTransitionController : NSObject <MinimizeEdgeGestureHandlerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    BOOL _hasActivateMinimizeAreaInPopInteration; // +0x8
    BOOL _hasAskedForMinimization; // +0x9
    BOOL _isBlockMinimizationEntryInTheGesCallback; // +0xa
    id <MinimizationTransitionControllerDelegate> _taskControllerDelegate; // +0x10
    NSString * _taskBizName; // +0x18
    NSString * _taskBizKey; // +0x20
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x28
    MinimizeEdgeGestureHandler * _edgeGesHandler; // +0x30
    id <MinimizeTransitionInterface> _transitionDelegate; // +0x38
}
+ (id)portraitSnapShotFromViewController:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setNeedMinimieTransitioning;
- (id)edgeGestureRecognizer;
- (BOOL)__shouldBlockMinimizationEntryInInteractivePop;
- (void)onEdgeInteractiveTransitionBegin:(id)arg1;
- (void)onEdgeInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(CGPoint)arg3;
- (void)onEdgeInteractiveTransitionWillEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)onEdgeInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)performMinimizationTansitionAnimation;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)minimizeTransition;
- (id)maximizeTransition;
- (id)systemPopTransitionWithInteracting:(BOOL)arg1 respondViewController:(id)arg2;
- (id)systemDismissTransitionWithInteracting:(BOOL)arg1;
- (BOOL)tryUpdateTaskSnapshotWithViewController:(id)arg1;
- (BOOL)tryUpdateTaskSnapshotWithViewController:(id)arg1 navigationController:(id)arg2;
- (BOOL)tryUpdateTaskSnapshotWithCustomSnapshot:(id)arg1;
- (id)__getCurrentTaskBizName;
- (id)__getCurrentTaskBizKey;
- (id)taskControllerDelegate;
- (void)setTaskControllerDelegate:(id)arg1;
- (id)taskBizName;
- (void)setTaskBizName:(id)arg1;
- (id)taskBizKey;
- (void)setTaskBizKey:(id)arg1;
- (BOOL)hasActivateMinimizeAreaInPopInteration;
- (void)setHasActivateMinimizeAreaInPopInteration:(BOOL)arg1;
- (BOOL)hasAskedForMinimization;
- (void)setHasAskedForMinimization:(BOOL)arg1;
- (BOOL)isBlockMinimizationEntryInTheGesCallback;
- (void)setIsBlockMinimizationEntryInTheGesCallback:(BOOL)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)edgeGesHandler;
- (void)setEdgeGesHandler:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg1;
- (void).cxx_destruct;
@end

