@interface LVWatchLaterViewController : LVFlutterViewController
{
    BOOL _previousNavigationBarHidden; // +0x70
    BOOL _hasCapturedPreviousNavigationBarState; // +0x71
}
+ (id)routeName;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)shouldInteractivePop;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)previousNavigationBarHidden;
- (void)setPreviousNavigationBarHidden:(BOOL)arg1;
- (BOOL)hasCapturedPreviousNavigationBarState;
- (void)setHasCapturedPreviousNavigationBarState:(BOOL)arg1;
@end
