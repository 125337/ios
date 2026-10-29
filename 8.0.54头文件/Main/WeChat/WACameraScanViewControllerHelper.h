@interface WACameraScanViewControllerHelper : NSObject <CameraScanLogicDelegate, CameraScanUIDelegate, IWACameraScanViewControllerHelper>
{
    CameraScanViewController * _viewController; // +0x8
    id <WACameraScanViewControllerHelperDelegate> _delegate; // +0x10
}
- (id)initWithScanCodeParam:(id)arg1;
- (id)initWithScanItemParam:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)getCameraScanViewViewController;
- (BOOL)shouldObtainScanResult;
- (BOOL)shouldBackToSessionImmediately;
- (void)obtainScanResultDidFinish:(id)arg1;
- (void)onScanCodeResult:(id)arg1;
- (void)onScanItemResult:(id)arg1;
- (void)onCameraScanViewControllerDidBePoped;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
@end

