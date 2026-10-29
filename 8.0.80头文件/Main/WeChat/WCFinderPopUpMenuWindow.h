@interface WCFinderPopUpMenuWindow : MMUIWindow
{
    UIView * _menuContentView; // +0x8
    id /* block */ _outsideTouchHandler; // +0x10
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)menuContentView;
- (void)setMenuContentView:(id)arg1;
- (id /* block */)outsideTouchHandler;
- (void)setOutsideTouchHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
