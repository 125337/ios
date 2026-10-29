@interface ZTCustomSKViewController : SKStoreProductViewController
{
    UIView * _mBgView; // +0x8
    CGRect _mRect; // +0x10
}
- (BOOL)prefersStatusBarHidden;
- (id)initWithBackgroundView:(id)arg1 viewFrameRect:(CGRect)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)mBgView;
- (void)setMBgView:(id)arg1;
- (CGRect)mRect;
- (void)setMRect:(CGRect)arg1;
- (void).cxx_destruct;
@end

