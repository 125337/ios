@interface MMPageSheetBaseView : UIView <MMPageSheetContainerDelegate, MMPageSheetProvider>
{
    MMPageSheetConfig * _pageSheetConfig; // +0x8
    id <MMPageSheetContainer> _pageSheetContainer; // +0x10
    UIView * _detailView; // +0x18
    double _superViewWidth; // +0x20
}
+ (void)load;
- (id)pageSheetContentView;
- (double)pageSheetContentHeight;
- (double)pageSheetContentWidth;
- (void)didPushSelfInPage:(id)arg1;
- (id)pageSheetContainer;
- (id)pageSheetProviderController;
- (id)pageSheetConfig;
- (void)adjustContainerYOffset:(double)arg1 animated:(BOOL)arg2;
- (id)adaptedViewController;
- (void)setDetailView:(id)arg1;
- (void)updateDetailViewHeight:(double)arg1 animated:(BOOL)arg2;
- (void)showWithAnimated:(BOOL)arg1;
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)pushPageSheet:(id)arg1;
- (void)pushPageSheet:(id)arg1 animated:(BOOL)arg2;
- (void)popPageSheet;
- (void)popPageSheetWithAnimated:(BOOL)arg1;
- (void)popPageSheetTo:(id)arg1 animated:(BOOL)arg2;
- (void)onPageSheetContainerBgTapped;
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (id)pageSheetContainerView;
- (void)onPageSheetDismiss:(id)arg1;
- (void)setPageSheetConfig:(id)arg1;
- (void)setPageSheetContainer:(id)arg1;
- (id)detailView;
- (double)superViewWidth;
- (void)setSuperViewWidth:(double)arg1;
- (void).cxx_destruct;
@end
