@interface MMPageSheetBaseViewController : MMUIViewController <MMPageSheetContainerDelegate, MMPageSheetProvider>
{
    MMPageSheetConfig * _pageSheetConfig; // +0x68
    UIView * _detailView; // +0x70
    id <MMPageSheetContainer> _pageSheetContainer; // +0x78
}
- (void)viewDidLoad;
- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (BOOL)useCustomNavibar;
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
- (void)onPageSheetDismiss:(id)arg1;
- (void)setPageSheetConfig:(id)arg1;
- (id)detailView;
- (void)setPageSheetContainer:(id)arg1;
- (void).cxx_destruct;
@end

