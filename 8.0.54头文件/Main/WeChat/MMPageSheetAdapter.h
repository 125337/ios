@interface MMPageSheetAdapter : NSObject <MMPageSheetContainerDelegate, MMPageSheetProvider>
{
    MMPageSheetConfig * _pageSheetConfig; // +0x8
    id <MMPageSheetContainer> _pageSheetContainer; // +0x10
    id <MMPageSheetAdapterDelegate> _delegate; // +0x18
    double _contentHeight; // +0x20
    UIViewController * _hostViewController; // +0x28
    UIView * _hostView; // +0x30
}
+ (id)adapterWithViewController:(id)arg1 height:(double)arg2;
+ (id)adatperWithView:(id)arg1 height:(double)arg2;
- (id)hostWebViewController;
- (void)onPageSheetConfigChangedOnWebExt;
- (void)__attachWebPageSheet:(id)arg1;
- (id)__getAttachedWebPageSheet;
- (void)bindListenProgressObjectModel:(id)arg1;
- (void)_observeViewFrameChanged:(id)arg1 changeBlock:(id /* block */)arg2;
- (void)setHostViewController:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)showWithAnimated:(BOOL)arg1;
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)updateDetailViewHeight:(double)arg1 animated:(BOOL)arg2;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)pushPageSheet:(id)arg1;
- (void)pushPageSheet:(id)arg1 animated:(BOOL)arg2;
- (void)popPageSheet;
- (void)popPageSheetWithAnimated:(BOOL)arg1;
- (void)popPageSheetTo:(id)arg1 animated:(BOOL)arg2;
- (id)pageSheetContentView;
- (double)pageSheetContentHeight;
- (double)pageSheetContentWidth;
- (void)didPushSelfInPage:(id)arg1;
- (id)pageSheetContainer;
- (id)pageSheetProviderController;
- (id)pageSheetConfig;
- (id)adaptedViewController;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)pageSheetWillCloseWithType:(long long)arg1;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (void)adjustContainerYOffset:(double)arg1 animated:(BOOL)arg2;
- (void)pageSheetDidRotation;
- (void)pageSheetPresentAnimateWillBegin;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)pageSheetPresentAnimateDidEnd;
- (void)setPageSheetConfig:(id)arg1;
- (void)onPageSheetDismiss:(id)arg1;
- (double)currentDetailViewHeight;
- (void)setDetailViewHeight:(double)arg1;
- (void)setPageSheetContainer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (id)hostViewController;
- (id)hostView;
- (void)setHostView:(id)arg1;
- (void).cxx_destruct;
@end

