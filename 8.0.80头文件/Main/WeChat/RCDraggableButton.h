@interface RCDraggableButton : MMUIButton
{
    BOOL _isDragging; // +0x8
    BOOL _singleTapBeenCanceled; // +0x9
    CGPoint _beginLocation; // +0x10
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x20
    BOOL _draggable; // +0x28
    BOOL _autoDocking; // +0x29
    id /* block */ _longPressBlock; // +0x30
    id /* block */ _tapBlock; // +0x38
    id /* block */ _doubleTapBlock; // +0x40
    id /* block */ _draggingBlock; // +0x48
    id /* block */ _dragDoneBlock; // +0x50
    id /* block */ _autoDockingBlock; // +0x58
    id /* block */ _autoDockingDoneBlock; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (id)initInView:(id)arg1 WithFrame:(CGRect)arg2;
- (void)defaultSetting;
- (void)gestureRecognizerHandle:(id)arg1;
- (void)setTapBlock:(id /* block */)arg1;
- (void)buttonTouched;
- (void)executeButtonTouchedBlock;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)isDragging;
- (BOOL)draggable;
- (void)setDraggable:(BOOL)arg1;
- (BOOL)autoDocking;
- (void)setAutoDocking:(BOOL)arg1;
- (id /* block */)longPressBlock;
- (void)setLongPressBlock:(id /* block */)arg1;
- (id /* block */)tapBlock;
- (id /* block */)doubleTapBlock;
- (void)setDoubleTapBlock:(id /* block */)arg1;
- (id /* block */)draggingBlock;
- (void)setDraggingBlock:(id /* block */)arg1;
- (id /* block */)dragDoneBlock;
- (void)setDragDoneBlock:(id /* block */)arg1;
- (id /* block */)autoDockingBlock;
- (void)setAutoDockingBlock:(id /* block */)arg1;
- (id /* block */)autoDockingDoneBlock;
- (void)setAutoDockingDoneBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
