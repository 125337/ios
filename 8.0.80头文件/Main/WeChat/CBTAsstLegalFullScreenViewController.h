@interface CBTAsstLegalFullScreenViewController : MMFlutterViewController
{
    BOOL _legalReported; // +0x70
    id /* block */ _onAgreeBlock; // +0x78
    id /* block */ _onCancelBlock; // +0x80
}
- (id)initWithFlutterInstance:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)handleAgreeFromFlutter;
- (void)handleCancelFromFlutter;
- (void)viewDidDisappear:(BOOL)arg1;
- (id /* block */)onAgreeBlock;
- (void)setOnAgreeBlock:(id /* block */)arg1;
- (id /* block */)onCancelBlock;
- (void)setOnCancelBlock:(id /* block */)arg1;
- (BOOL)legalReported;
- (void)setLegalReported:(BOOL)arg1;
- (void).cxx_destruct;
@end
