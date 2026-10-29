@interface MessagePageSheetPresentationController : UIPresentationController
{
    BOOL _isLifeCycleUnpair; // +0x8
    BOOL _isPageSheetWillClose; // +0x9
    BOOL _shouldCallbackAtPageSheetAppear; // +0xa
}
- (void)callFromViewControllerDisappear;
- (void)callFromViewControllerAppear;
- (void)onPageSheetWillClose;
- (void)onPageSheetDidAppear;
- (void)onPageSheetDidDisappear;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (BOOL)isLifeCycleUnpair;
- (void)setIsLifeCycleUnpair:(BOOL)arg1;
- (BOOL)isPageSheetWillClose;
- (void)setIsPageSheetWillClose:(BOOL)arg1;
- (BOOL)shouldCallbackAtPageSheetAppear;
- (void)setShouldCallbackAtPageSheetAppear:(BOOL)arg1;
@end
