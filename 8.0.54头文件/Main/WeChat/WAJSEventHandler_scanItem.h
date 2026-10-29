@interface WAJSEventHandler_scanItem : WAJSEventHandler_BaseEvent <WACameraScanViewControllerHelperDelegate>
{
    id <IWACameraScanViewControllerHelper> _viewControllerHelper; // +0x8
    NSString * _scanResult; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)showScanItemWithParams:(id)arg1;
- (void)onScanItemResult:(id)arg1;
- (void)onCameraScanViewControllerDidBePoped;
- (id)viewControllerHelper;
- (void)setViewControllerHelper:(id)arg1;
- (id)scanResult;
- (void)setScanResult:(id)arg1;
- (void).cxx_destruct;
@end

