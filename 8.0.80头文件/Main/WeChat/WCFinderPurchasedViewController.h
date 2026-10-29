@interface WCFinderPurchasedViewController : WCFinderNavTabViewController <MMUICollectionViewGestureRecognizerDelegate>
{
    BOOL _shouldHideMemberTab; // +0x70
    BOOL _shouldHidePaidCollectionTab; // +0x71
    BOOL _shouldHideLiveTab; // +0x72
    MMFinderLivePurchasedComposedViewControllerOpenParams * _composedOpenParam; // +0x78
}
- (id)initWithPurchasedComposedOpenParams:(id)arg1;
- (void)viewDidLoad;
- (id)definePages;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (BOOL)gestureRecognizerShouldBeginForCollectionView:(id)arg1 gestureRecognizer:(id)arg2 ignoreReturnAndCallSuper:(BOOL *)arg3;
- (BOOL)shouldHideMemberTab;
- (void)setShouldHideMemberTab:(BOOL)arg1;
- (BOOL)shouldHidePaidCollectionTab;
- (void)setShouldHidePaidCollectionTab:(BOOL)arg1;
- (BOOL)shouldHideLiveTab;
- (void)setShouldHideLiveTab:(BOOL)arg1;
- (id)composedOpenParam;
- (void)setComposedOpenParam:(id)arg1;
- (void).cxx_destruct;
@end
