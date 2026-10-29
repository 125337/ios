@interface WCTransitionUnit : NSObject <UIViewControllerTransitioningDelegate>
{
    unsigned long long _transitionType; // +0x8
    CGPoint _transitionBeginPoint; // +0x10
    CGRect _transitionResultRect; // +0x20
}
+ (id)transitionUnitWithType:(unsigned long long)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (CGPoint)transitionBeginPoint;
- (void)setTransitionBeginPoint:(CGPoint)arg1;
- (CGRect)transitionResultRect;
- (void)setTransitionResultRect:(CGRect)arg1;
- (unsigned long long)transitionType;
- (void)setTransitionType:(unsigned long long)arg1;
@end

