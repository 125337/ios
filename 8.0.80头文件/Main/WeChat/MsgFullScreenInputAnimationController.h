@interface MsgFullScreenInputAnimationController : NSObject <CAAnimationDelegate, UIViewControllerTransitioningDelegate>
{
    MsgFullScreenInputPresentAnimator * _presentAnimator; // +0x8
    MsgFullScreenInputDismissAnimator * _dismissAnimator; // +0x10
    CGRect _growTextViewOriginFrame; // +0x18
    CGRect _textViewOriginFrame; // +0x38
}
- (id)presentAnimator;
- (id)dismissAnimator;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (CGRect)growTextViewOriginFrame;
- (void)setGrowTextViewOriginFrame:(CGRect)arg1;
- (CGRect)textViewOriginFrame;
- (void)setTextViewOriginFrame:(CGRect)arg1;
- (void)setPresentAnimator:(id)arg1;
- (void)setDismissAnimator:(id)arg1;
- (void).cxx_destruct;
@end
