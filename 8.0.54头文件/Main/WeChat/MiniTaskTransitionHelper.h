@interface MiniTaskTransitionHelper : NSObject
+ (id)createPresentAnimatedTransitioningWithContext:(id)arg1 gestureType:(unsigned int)arg2;
+ (id)createDismissedAnimatedTransitioningWithContext:(id)arg1 gestureType:(unsigned int)arg2;
+ (id)createTransitioningForPresentationWithContext:(id)arg1 gestureType:(unsigned int)arg2;
+ (id)createTransitioningForDismissalWithContext:(id)arg1 gestureType:(unsigned int)arg2;
+ (void)updateTransitionContext:(id)arg1 withDismissSnapshotImg:(id)arg2;
+ (void)notifyContextPresentTransitionEnd:(id)arg1 finish:(BOOL)arg2;
+ (void)notifyContextDismissTransitionBegin:(id)arg1 gestureType:(unsigned int)arg2;
+ (void)notifyContextDismissTransitionEnd:(id)arg1 gestureType:(unsigned int)arg2 finish:(BOOL)arg3;
@end

