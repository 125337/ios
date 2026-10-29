@interface MMFinderLiveShopShelfFlutterNavigationController : MMUINavigationController
{
    BOOL _dismissDetected; // +0x8
    id /* block */ _onDidDismiss; // +0x10
}
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id /* block */)onDidDismiss;
- (void)setOnDidDismiss:(id /* block */)arg1;
- (void).cxx_destruct;
@end
