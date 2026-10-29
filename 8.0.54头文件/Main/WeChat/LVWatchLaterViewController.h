@interface LVWatchLaterViewController : LVFlutterViewController
+ (id)routeName;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)shouldInteractivePop;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
@end

