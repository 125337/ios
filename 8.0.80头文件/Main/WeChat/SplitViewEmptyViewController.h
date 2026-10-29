@interface SplitViewEmptyViewController : MMUIViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (long long)navigationBarHiddenStatus;
- (void)viewWillDisappearInNavBar:(BOOL)arg1;
- (BOOL)shouldHideNavigationBar;
- (BOOL)shouldRestrictContentViewSize;
@end
