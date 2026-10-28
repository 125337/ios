@interface MMPageSheetContainerView : UIView <MMPageSheetProviderViewDelegate, MMPageSheetContainer>
{
    BOOL _pageSheetInited; // +0x8
    MMPageSheetProviderView * _providerView; // +0x10
    id <MMPageSheetProvider><MMPageSheetContainerDelegate> _provider; // +0x18
    CGSize _superviewSize; // +0x20
}
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setupWithProvider:(id)arg1;
- (void)showPageSheetAnimated:(BOOL)arg1 parentView:(id)arg2 parentViewController:(id)arg3 complete:(id /* block */)arg4;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateContentHeightWithAnimated:(BOOL)arg1;
- (void)pushPageSheet:(id)arg1 animated:(BOOL)arg2;
- (void)popPageSheetWithAnimated:(BOOL)arg1;
- (void)adjustContainerYOffset:(double)arg1 animated:(BOOL)arg2;
- (void)popPageSheetTo:(id)arg1 animated:(BOOL)arg2;
- (void)onPageSheetDismiss:(id)arg1 complete:(id /* block */)arg2;
- (id)getContainerViewController;
- (BOOL)enablePageSheetChangeAnimation;
- (id)pageSheetContainerView;
- (BOOL)pageSheetInited;
- (void)setPageSheetInited:(BOOL)arg1;
- (id)providerView;
- (void)setProviderView:(id)arg1;
- (CGSize)superviewSize;
- (void)setSuperviewSize:(CGSize)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (void).cxx_destruct;
@end
