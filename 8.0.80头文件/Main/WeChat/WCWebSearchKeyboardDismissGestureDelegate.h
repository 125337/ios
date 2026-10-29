@interface WCWebSearchKeyboardDismissGestureDelegate : NSObject <UIGestureRecognizerDelegate>
{
    WCWebSearchViewControllerNewH5 * _viewController; // +0x8
}
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
