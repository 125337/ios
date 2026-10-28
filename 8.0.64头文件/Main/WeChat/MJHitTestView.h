@interface MJHitTestView : UIView
{
    id /* block */ _hitTestBlock; // +0x8
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)hitTestBlock;
- (void)setHitTestBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
