@interface WCFinderAbstractTask : NSObject
{
    BOOL _cancelAction; // +0x8
    id /* block */ _action; // +0x10
}
- (id)initWithAction:(id /* block */)arg1;
- (void)preformAction:(id /* block */)arg1 fail:(id /* block */)arg2;
- (void)asyncPreformAction:(id /* block */)arg1 fail:(id /* block */)arg2;
- (BOOL)isCancelAction;
- (void)setCancelAction:(BOOL)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
