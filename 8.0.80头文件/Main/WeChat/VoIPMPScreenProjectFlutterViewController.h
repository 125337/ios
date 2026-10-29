@interface VoIPMPScreenProjectFlutterViewController : MMFlutterViewController
{
    BOOL _hasNotifiedPageDismissal; // +0x70
    id /* block */ _pageDismissedBlock; // +0x78
    id /* block */ _pageDidAppearBlock; // +0x80
    MinimizeNewTransitionController * _transitionController; // +0x88
}
- (void)loadFlutterView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)notifyPageDismissedIfNeeded;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissedDuplicate;
- (id /* block */)pageDismissedBlock;
- (void)setPageDismissedBlock:(id /* block */)arg1;
- (id /* block */)pageDidAppearBlock;
- (void)setPageDidAppearBlock:(id /* block */)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (BOOL)hasNotifiedPageDismissal;
- (void)setHasNotifiedPageDismissal:(BOOL)arg1;
- (void).cxx_destruct;
@end
