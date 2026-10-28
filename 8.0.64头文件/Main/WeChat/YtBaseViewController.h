@interface YtBaseViewController : UIViewController
{
    id /* block */ _succeedBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (void)viewWillAppear:(BOOL)arg1;
- (void)naviBack;
- (void)quitViewController;
- (id)YtCreateImageWithColor:(id)arg1;
- (id /* block */)succeedBlock;
- (void)setSucceedBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
