@interface GameHitTestForwardView : UIControl
{
    id /* block */ _forwardBlock; // +0x8
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)forwardBlock;
- (void)setForwardBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
