@interface MPNegativeFeedbackFlutterViewController : MMFlutterViewController
{
    BOOL _closeRequested; // +0x70
    id /* block */ _popOrDismissHandler; // +0x78
}
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissedDuplicate;
- (id /* block */)popOrDismissHandler;
- (void)setPopOrDismissHandler:(id /* block */)arg1;
- (BOOL)closeRequested;
- (void)setCloseRequested:(BOOL)arg1;
- (void).cxx_destruct;
@end
