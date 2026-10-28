@interface WASimulatedNativeImageLoadingViewController : WALoadingViewController
{
    MMUIButton * _quitButton; // +0x70
    WATitleView * _titleView; // +0x78
    long long _orientation; // +0x80
    UIImageView * _loadingImageView; // +0x88
    MMProgressViewEx * _loadingView; // +0x90
}
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (void)showTitleLoading;
- (void)showBufferingView;
- (void)setThumbImage:(id)arg1;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void).cxx_destruct;
@end
