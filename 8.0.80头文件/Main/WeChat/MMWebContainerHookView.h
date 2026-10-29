@interface MMWebContainerHookView : UIView
{
    id /* block */ _removeFromSuperviewHookAction; // +0x8
}
- (id)initWithHookAction:(id /* block */)arg1;
- (void)removeFromSuperview;
- (void)removeFromSuperviewWithoutHook;
- (id /* block */)removeFromSuperviewHookAction;
- (void)setRemoveFromSuperviewHookAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
