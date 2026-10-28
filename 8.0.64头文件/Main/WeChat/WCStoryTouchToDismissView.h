@interface WCStoryTouchToDismissView : UIView
{
    BOOL _touchToDismiss; // +0x8
    id /* block */ _dismissAction; // +0x10
    id /* block */ _hitTestBlock; // +0x18
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)dismissSelf;
- (BOOL)touchToDismiss;
- (void)setTouchToDismiss:(BOOL)arg1;
- (id /* block */)dismissAction;
- (void)setDismissAction:(id /* block */)arg1;
- (id /* block */)hitTestBlock;
- (void)setHitTestBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
