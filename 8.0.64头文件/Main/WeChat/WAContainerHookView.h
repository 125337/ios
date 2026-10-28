@interface WAContainerHookView : UIView
{
    id /* block */ _wa_removeFromSuperviewHookAction; // +0x8
}
- (id)initWithHookAction:(id /* block */)arg1;
- (void)removeFromSuperview;
- (void)removeFromSuperviewWithoutHook;
- (id /* block */)wa_removeFromSuperviewHookAction;
- (void)setWa_removeFromSuperviewHookAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
