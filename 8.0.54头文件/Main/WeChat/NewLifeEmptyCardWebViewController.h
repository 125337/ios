@interface NewLifeEmptyCardWebViewController : NSObject <WCFinderCardWebViewControllerDelegate>
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerWillBeClosed;
@end

