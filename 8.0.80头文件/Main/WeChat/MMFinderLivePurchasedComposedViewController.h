@interface MMFinderLivePurchasedComposedViewController : WCFinderNavTabViewController <UIGestureRecognizerDelegate, MMUICollectionViewGestureRecognizerDelegate>
{
    MMFinderLivePurchasedComposedViewControllerOpenParams * _openParam; // +0x70
    WCFinderNavTabTitleView * _customTitleView; // +0x78
    MMLiteAppViewController * _paidMicViewController; // +0x80
}
- (id)initWithParam:(id)arg1;
- (void)viewDidLoad;
- (void)installTitleView;
- (id)titleView;
- (double)collectionViewTopMargin;
- (BOOL)shouldRelayoutCollectionView;
- (void)viewDidLayoutSubviews;
- (id)definePages;
- (void)loadPaidMicLiteAppViewController;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (BOOL)gestureRecognizerShouldBeginForCollectionView:(id)arg1 gestureRecognizer:(id)arg2 ignoreReturnAndCallSuper:(BOOL *)arg3;
- (id)openParam;
- (void)setOpenParam:(id)arg1;
- (id)customTitleView;
- (void)setCustomTitleView:(id)arg1;
- (id)paidMicViewController;
- (void)setPaidMicViewController:(id)arg1;
- (void).cxx_destruct;
@end
