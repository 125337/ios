@interface MMUIImagePickerController : UIImagePickerController <IVOIPUILogicMgrExt>
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)tagForActivePage;
- (id)tagForCurrentPage;
@end

