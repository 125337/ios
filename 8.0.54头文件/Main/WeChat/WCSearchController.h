@interface WCSearchController : UISearchController
{
    BOOL _forceFixSearchContainerTop; // +0x8
    id <WCSearchControllDelegate> _wcSearchControllDelegate; // +0x10
    MMUISearchBar * _wcSearchBar; // +0x18
}
- (id)initWithSearchResultsController:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)initCustomSearchBar;
- (void)viewDidLoad;
- (id)searchBar;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)accessibilityPerformEscape;
- (id)wcSearchControllDelegate;
- (void)setWcSearchControllDelegate:(id)arg1;
- (BOOL)forceFixSearchContainerTop;
- (void)setForceFixSearchContainerTop:(BOOL)arg1;
- (id)wcSearchBar;
- (void)setWcSearchBar:(id)arg1;
- (void).cxx_destruct;
@end

