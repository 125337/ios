@interface WCPayCustomHitTestView : UIView
{
    id /* block */ _handleBlock; // +0x8
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)handleBlock;
- (void)setHandleBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
