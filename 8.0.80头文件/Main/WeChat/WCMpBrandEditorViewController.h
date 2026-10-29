@interface WCMpBrandEditorViewController : MMFlutterViewController
+ (void)preloadArticleEditor;
+ (void)enableAutoPreloadArticleEditor;
+ (void)disableAutoPreloadArticleEditor;
- (id)init;
- (id)initWithLaunchArgs:(id)arg1;
- (void)presentFromNavigationController:(id)arg1;
- (void)viewDidLoad;
- (BOOL)shouldInteractiveDismiss;
- (void)setupPlugins;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
@end
