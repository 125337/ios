@interface FlutterTextInputViewInputAccess : UIView
{
    CADisplayLink * _displayLink; // +0x8
    double _lastHeight; // +0x10
    id /* block */ _onKeyboardHeightChange; // +0x18
    id /* block */ _onInputViewAdded; // +0x20
    id /* block */ _onInputViewRemoved; // +0x28
}
- (void)didMoveToWindow;
- (void)tick;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)lastHeight;
- (void)setLastHeight:(double)arg1;
- (id /* block */)onKeyboardHeightChange;
- (void)setOnKeyboardHeightChange:(id /* block */)arg1;
- (id /* block */)onInputViewAdded;
- (void)setOnInputViewAdded:(id /* block */)arg1;
- (id /* block */)onInputViewRemoved;
- (void)setOnInputViewRemoved:(id /* block */)arg1;
- (void).cxx_destruct;
@end
