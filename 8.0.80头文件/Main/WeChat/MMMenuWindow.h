@interface MMMenuWindow : MMUIWindow
{
    BOOL _blockBackgroundTouches; // +0x8
    id <MMMenuWindowDelegate> _delegate; // +0x10
    CGRect _menuFrame; // +0x18
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)menuFrame;
- (void)setMenuFrame:(CGRect)arg1;
- (BOOL)blockBackgroundTouches;
- (void)setBlockBackgroundTouches:(BOOL)arg1;
- (void).cxx_destruct;
@end
