@interface WCSearchBaseCgi : WCBaseCgi
{
    id /* block */ __successBlock; // +0x8
    id /* block */ __failBlock; // +0x10
}
- (id)init;
- (id /* block */)_successBlock;
- (void)set_successBlock:(id /* block */)arg1;
- (id /* block */)_failBlock;
- (void)set_failBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
