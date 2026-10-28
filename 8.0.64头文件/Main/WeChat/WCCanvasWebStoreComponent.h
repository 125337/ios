@interface WCCanvasWebStoreComponent : WCCanvasComponent <SKStoreProductViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    SKStoreProductViewController * _productViewController; // +0x8
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)initViews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)dismissProductViewController;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)reportSKLoadingTimeWithBeginTime:(unsigned long long)arg1;
- (void)doAppStoreColorReport;
- (id)productViewController;
- (void)setProductViewController:(id)arg1;
- (void).cxx_destruct;
@end
