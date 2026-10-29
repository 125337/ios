@interface WCWindowChangeSentinel : UIView
{
    id /* block */ _onWindowChange; // +0x8
}
- (id)init;
- (void)didMoveToWindow;
- (id /* block */)onWindowChange;
- (void)setOnWindowChange:(id /* block */)arg1;
- (void).cxx_destruct;
@end
