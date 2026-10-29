@interface MMLivePanEnterPreviewViewController : MMUIViewController
{
    MMLivePanEnterPreviewParameters * _parameters; // +0x70
    UIView * _backgroundBlurView; // +0x78
    CdnRenderViewBase * _renderView; // +0x80
}
- (id)initWithParameters:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (UIEdgeInsets)additionalSafeAreaInsets;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)renderPixelBuffer:(__CVBuffer *)arg1;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (void).cxx_destruct;
@end
