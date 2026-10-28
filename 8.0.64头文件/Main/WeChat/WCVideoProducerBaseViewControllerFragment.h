@interface WCVideoProducerBaseViewControllerFragment : MMUIViewController <WCVideoProducerBaseFragmentProtocol>
{
    CGRect _containerFrame; // +0x70
}
- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (id)initWithContainerFrame:(CGRect)arg1;
- (void)dealloc;
- (void)updateContainerFrame:(CGRect)arg1;
- (CGRect)getContainerFrame;
- (BOOL)isShowing;
- (double)getFragmentHeight;
- (double)getFragmentVisibleHeight;
- (void)showFragmentAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)dismissFragmentAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)useTransparentNavibar;
- (BOOL)hidesStatusBar;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
@end
