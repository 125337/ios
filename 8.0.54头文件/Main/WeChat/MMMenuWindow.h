@interface MMMenuWindow : MMUIWindow
{
    id <MMMenuWindowDelegate> _delegate; // +0x8
    CGRect _menuFrame; // +0x10
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)menuFrame;
- (void)setMenuFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

