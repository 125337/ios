@interface WATransferJSAPIBusinessViewController : MMUIViewController
{
    BOOL _isDidAppear; // +0x68
    id /* block */ _callback; // +0x70
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)setupNavigationBar;
- (void)onReturnButtonClicked;
- (void)registerOnceAfterViewDidAppearCallback:(id /* block */)arg1;
- (BOOL)isDidAppear;
- (void)setIsDidAppear:(BOOL)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

