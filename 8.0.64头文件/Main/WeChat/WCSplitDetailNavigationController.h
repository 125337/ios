@interface WCSplitDetailNavigationController : MMUINavigationController
{
    BOOL _isPresented; // +0x8
    BOOL _isViewDisappear; // +0x9
    BOOL _isSizeChanged; // +0xa
    CGSize _lastViewSize; // +0x10
}
- (id)initWithRootViewController:(id)arg1 isBeingPresent:(BOOL)arg2;
- (BOOL)isBeingPresented;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)isPresented;
- (void)setIsPresented:(BOOL)arg1;
- (BOOL)isViewDisappear;
- (void)setIsViewDisappear:(BOOL)arg1;
- (CGSize)lastViewSize;
- (void)setLastViewSize:(CGSize)arg1;
- (BOOL)isSizeChanged;
- (void)setIsSizeChanged:(BOOL)arg1;
@end
