@interface WAGamePkExitHalfScreenViewController : MMUIHalfScreenViewController
{
    id /* block */ _confirmBlock; // +0x70
}
- (id)initWithConfirmBlock:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)onExitConfirm;
- (void)onCancel;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
