@interface WxpayTextSelectionController : NSObject
{
    UIView * _hostView; // +0x8
    WxpayTextInputAdapter * _textInput; // +0x10
    WxpayTextSelectionState * _state; // +0x18
    WxpayTextSelectionHandleView * _startHandle; // +0x20
    WxpayTextSelectionHandleView * _endHandle; // +0x28
    WxpayEditableSelectionGeometry _geometry; // +0x30
    unsigned long long _generation; // +0x138
    unsigned long long _lastSequence; // +0x140
    BOOL _toggleMenuOnTap; // +0x148
    BOOL _pointerDown; // +0x149
    BOOL _menuShown; // +0x14a
    unsigned long long _menuGeneration; // +0x150
    BOOL _performingItem; // +0x158
    BOOL _clipboardHasText; // +0x159
    unsigned long long _holdMenuThroughSequence; // +0x160
    WxpayTextSelectionHandleView * _dragHandle; // +0x168
    unsigned long long _dragFixedOffset; // +0x170
    CGRect _dragFixedCaret; // +0x178
    CGPoint _dragTouchOrigin; // +0x198
    CGPoint _dragCaretOrigin; // +0x1a8
    CGPoint _dragLastPoint; // +0x1b8
    id /* block */ _dragHandler; // +0x1c8
    id /* block */ _dragEndHandler; // +0x1d0
    id /* block */ _toolbarPresenter; // +0x1d8
    id /* block */ _toolbarDismisser; // +0x1e0
}
- (id)initWithHostView:(id)arg1 textInput:(id)arg2;
- (void)dealloc;
- (id)makeHandle:(long long)arg1;
- (BOOL)isMenuVisible;
- (BOOL)startHandleVisible;
- (BOOL)endHandleVisible;
- (void)openGeneration:(unsigned long long)arg1 toggleMenuOnTap:(BOOL)arg2;
- (void)updateToggleMenuOnTap:(BOOL)arg1 generation:(unsigned long long)arg2;
- (void)applyGeometry:(WxpayEditableSelectionGeometry)arg1;
- (void)applyInteraction:(long long)arg1 generation:(unsigned long long)arg2 nodeId:(unsigned long long)arg3 selection:(_NSRange)arg4;
- (void)pointerDown;
- (void)pointerUp;
- (void)textInputDidEdit;
- (void)performToolbarItem:(long long)arg1 generation:(unsigned long long)arg2;
- (void)environmentDidChange;
- (void)hide;
- (void)closeGeneration:(unsigned long long)arg1;
- (void)teardown;
- (void)refresh;
- (void)placeHandle:(id)arg1 caret:(CGRect)arg2 visible:(BOOL)arg3;
- (void)hideMenu;
- (void)onPasteboardChanged:(id)arg1;
- (void)performItem:(long long)arg1;
- (void)lookUp:(id)arg1;
- (void)searchWeb:(id)arg1;
- (void)share:(id)arg1;
- (void)onHandleDrag:(id)arg1;
- (void)beginDragWithHandle:(id)arg1 touch:(CGPoint)arg2;
- (void)moveDragToTouch:(CGPoint)arg1;
- (void)finishDrag;
- (void)cancelDrag;
- (id /* block */)dragHandler;
- (void)setDragHandler:(id /* block */)arg1;
- (id /* block */)dragEndHandler;
- (void)setDragEndHandler:(id /* block */)arg1;
- (id /* block */)toolbarPresenter;
- (void)setToolbarPresenter:(id /* block */)arg1;
- (id /* block */)toolbarDismisser;
- (void)setToolbarDismisser:(id /* block */)arg1;
- (void).cxx_destruct;
@end
