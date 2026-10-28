@interface MiniRecTransitionController : NSObject <MinimizeEdgeGestureHandlerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    BOOL _hasActivateMinimizeAreaInPopInteration; // +0x8
    BOOL _isBlockMinimizationEntryInTheGesCallback; // +0x9
    id <MinimizationTransitionControllerDelegate> _taskControllerDelegate; // +0x10
    NSString * _taskBizName; // +0x18
    NSString * _taskBizKey; // +0x20
    MiniRecTransitionContext * _transionContext; // +0x28
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x30
    MinimizeEdgeGestureHandler * _edgeGesHandler; // +0x38
    NSString * _popBackTaskKey; // +0x40
    NSString * _popBackTaskName; // +0x48
    id <MinimizeTransitionInterface> _transitionDelegate; // +0x50
}
+ (void)performInteractiveMinimizeAnimateWithBizName:(id)arg1 taskKey:(id)arg2 fromView:(id)arg3 percentComplete:(double)arg4;
+ (void)performInteractiveMinimizeAnimateWithBizName:(id)arg1 taskKey:(id)arg2 fromView:(id)arg3 percentComplete:(double)arg4 completion:(id /* block */)arg5;
+ (id)portraitSnapShotFromViewController:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setNeedMinimieTransitioningWithTaskName:(id)arg1 taskKey:(id)arg2;
- (void)setNeedContentTransitioningWithTaskName:(id)arg1 taskKey:(id)arg2;
- (void)checkHookMiniTaskTransitionContext;
- (void)clearTransitionContext;
- (id)edgeGestureRecognizer;
- (BOOL)__shouldBlockMinimizationEntryInInteractivePop;
- (void)onEdgeInteractiveTransitionBegin:(id)arg1;
- (void)onEdgeInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(CGPoint)arg3;
- (void)onEdgeInteractiveTransitionWillEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)onEdgeInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)resetPopBackTaskNameAndKeyWithComplete:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)performMinimizationTansitionAnimationWithComletion:(id /* block */)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)fetchMinimizeTransition;
- (id)__defaultMinimizeTransition;
- (id)__contentMinimizeTransitionWithContext:(id)arg1;
- (id)fetchMaximizeTransition;
- (id)__multiContentMaximizeTransition;
- (id)__defaultMaximizeTransition;
- (id)__contentMaximizeTransition;
- (id)systemPopTransitionWithInteracting:(BOOL)arg1 respondViewController:(id)arg2;
- (id)systemDismissTransitionWithInteracting:(BOOL)arg1;
- (BOOL)tryUpdateTaskSnapshotWithViewController:(id)arg1;
- (BOOL)tryUpdateTaskSnapshotWithViewController:(id)arg1 navigationController:(id)arg2;
- (BOOL)tryUpdateTaskSnapshotWithCustomSnapshot:(id)arg1;
- (BOOL)hasAnyStoreTask;
- (BOOL)__tryUpdateTaskSnapshot:(id)arg1 taskStateType:(unsigned int)arg2;
- (BOOL)checkTaskDataMatchedWithTaskBizName:(id)arg1 taskBizKey:(id)arg2;
- (id)__getCurrentTaskContext:(unsigned int)arg1;
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
- (id)transionContext;
- (void)setTransionContext:(id)arg1;
- (BOOL)isBlockMinimizationEntryInTheGesCallback;
- (void)setIsBlockMinimizationEntryInTheGesCallback:(BOOL)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)edgeGesHandler;
- (void)setEdgeGesHandler:(id)arg1;
- (id)popBackTaskKey;
- (void)setPopBackTaskKey:(id)arg1;
- (id)popBackTaskName;
- (void)setPopBackTaskName:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg1;
- (void).cxx_destruct;
@end
