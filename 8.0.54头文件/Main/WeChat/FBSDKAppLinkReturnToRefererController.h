@interface FBSDKAppLinkReturnToRefererController : NSObject <FBSDKAppLinkReturnToRefererViewDelegate>
{
    UINavigationController * _navigationController; // +0x8
    FBSDKAppLinkReturnToRefererView * _view; // +0x10
    id <FBSDKAppLinkReturnToRefererControllerDelegate> _delegate; // +0x18
}
- (id)init;
- (id)initForDisplayAboveNavController:(id)arg1;
- (void)dealloc;
- (id)view;
- (void)setView:(id)arg1;
- (void)showViewForRefererAppLink:(id)arg1;
- (void)showViewForRefererURL:(id)arg1;
- (void)removeFromNavController;
- (void)returnToRefererViewDidTapInsideCloseButton:(id)arg1;
- (void)returnToRefererViewDidTapInsideLink:(id)arg1 link:(id)arg2;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)statusBarFrameDidChange:(id)arg1;
- (void)orientationDidChange:(id)arg1;
- (void)moveNavigationBar;
- (void)updateNavigationBarY:(double)arg1;
- (void)closeViewAnimated:(BOOL)arg1;
- (void)closeViewAnimated:(BOOL)arg1 explicitlyClosed:(BOOL)arg2;
- (void)openRefererAppLink:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

