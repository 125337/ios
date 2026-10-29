@interface WxpayWebRedirectModalShellViewController : MMUIViewController
{
    BOOL _hasObservedPresentation; // +0x70
    BOOL _dismissed; // +0x71
    BOOL _checkScheduled; // +0x72
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)installHooksOnPresentedController:(id)arg1;
- (void)attachToPresentedChainAndCheckIfNeeded;
- (void)scheduleDismissCheck;
- (void)performDismissCheck;
@end
