@interface APCheckPwd : APBase <PBMessageObserverDelegate>
{
    id <APCheckPwdDelegate> _delegate; // +0x70
    UIViewController * _viewController; // +0x78
}
- (void)dealloc;
- (void)start;
- (void)didSuccess;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end

