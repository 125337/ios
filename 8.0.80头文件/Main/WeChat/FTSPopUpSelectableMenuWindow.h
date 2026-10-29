@interface FTSPopUpSelectableMenuWindow : MMUIWindow
{
    UIView * _menuContentView; // +0x8
    id /* block */ _nonContentAreaTouchHandler; // +0x10
    CGRect _menuContentFrame; // +0x18
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (CGRect)menuContentFrame;
- (void)setMenuContentFrame:(CGRect)arg1;
- (id)menuContentView;
- (void)setMenuContentView:(id)arg1;
- (id /* block */)nonContentAreaTouchHandler;
- (void)setNonContentAreaTouchHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
