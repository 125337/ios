@interface UIViewController (WCSplit)
- (id)setupInteractiveDismissGesture;
- (id)getWCSplitNavBackPanGesture;
- (void)handleWCSplitScreenEdgePanGesture:(id)arg1;
- (BOOL)isWCSplitDetailNavigationController;
- (void)markAsWCSplitDetailNavigationController;
- (BOOL)isWCSplitEmptyView;
- (void)maskAsWCSplitEmptyView;
- (BOOL)isPresentedSplitDetailView;
- (BOOL)isInWCSplitEmptyViewNavigationController;
@end
