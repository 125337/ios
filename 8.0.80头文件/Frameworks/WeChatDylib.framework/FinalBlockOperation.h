@interface FinalBlockOperation : NSOperation
{
    id /* block */ _mainBlock; // +0x8
    id /* block */ _finalBlock; // +0x10
    atomic_flag _executed; // +0x18
}
- (id)initWithMainBlock:(id /* block */)arg1 finalBlock:(id /* block */)arg2;
- (void)executeFinalOnce;
- (void)cancel;
- (void)main;
- (void).cxx_destruct;
@end
