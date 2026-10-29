@interface UINavigationController (CustomNavigationBar)
+ (void)load;
- (id)customNavigationBarCoordinator;
- (BOOL)customNavigationBarActive;
- (id)navigationBarContentView;
- (void)ensureCustomNavigationBar;
- (void)customNavigationBarHiddenDidChange;
- (void)wc_viewDidLoad;
- (void)wc_viewDidLayoutSubviews;
- (id)wc_delegate;
- (void)wc_setDelegate:(id)arg1;
- (void)wc_setNavigationBarHidden:(BOOL)arg1;
- (void)wc_setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)wc_isNavigationBarHidden;
- (void)wc_setViewControllers:(id)arg1;
- (void)wc_setViewControllers:(id)arg1 animated:(BOOL)arg2;
@end
