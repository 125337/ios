@interface TXYHuiYanBaseViewController : UIViewController
{
    BOOL _isFinish; // +0x8
    BOOL _oldRecognizerEnabled; // +0x9
    id <TXYHyVcLifeCycleDelegate> _lifeCycle; // +0x10
    TXYHyInnerConfig * _config; // +0x18
    long long _currenStyle; // +0x20
}
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)createAttrStrWith:(double)arg1 textColor:(id)arg2 text:(id)arg3;
- (void)sdkbackPage;
- (void)naviBackWithCompletion:(id /* block */)arg1;
- (void)startImageLoading:(id)arg1;
- (void)stopImageLoading:(id)arg1;
- (void)quitViewControllerWithCompletion:(id /* block */)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)lifeCycle;
- (void)setLifeCycle:(id)arg1;
- (BOOL)isFinish;
- (void)setIsFinish:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (long long)currenStyle;
- (void)setCurrenStyle:(long long)arg1;
- (BOOL)oldRecognizerEnabled;
- (void)setOldRecognizerEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
