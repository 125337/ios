@interface BrandPendingSendDismissTapDelegate : NSObject <UIGestureRecognizerDelegate>
{
    BaseMsgContentViewController * _viewController; // +0x8
}
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
