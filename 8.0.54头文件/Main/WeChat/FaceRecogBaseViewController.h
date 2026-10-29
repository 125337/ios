@interface FaceRecogBaseViewController : MMUIViewController
{
    BOOL _bUseBlackStatusbar; // +0x68
    FaceRecogBaseView * _baseView; // +0x70
}
- (id)init;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBeInteractivePoped;
- (void)viewDidLayoutSubviews;
- (void)attachPreviewLayer:(id)arg1;
- (void)procedureDidFinish;
- (void)procedureDidFailed:(id)arg1 errorTips:(id)arg2 canRetry:(BOOL)arg3;
- (void)viewDidTransitionToNewSize;
- (void)onNavBack;
- (long long)overrideUserInterfaceStyle;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (BOOL)bUseBlackStatusbar;
- (void)setBUseBlackStatusbar:(BOOL)arg1;
- (void).cxx_destruct;
@end

