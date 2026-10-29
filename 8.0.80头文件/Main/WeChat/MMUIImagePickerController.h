@interface MMUIImagePickerController : UIImagePickerController <WCAudioModuleDelegate>
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)tagForActivePage;
- (id)tagForCurrentPage;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
@end
