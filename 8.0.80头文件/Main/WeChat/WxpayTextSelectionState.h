@interface WxpayTextSelectionState : NSObject
{
    BOOL _tapRecorded; // +0x8
    BOOL _tapHadFocus; // +0x9
    unsigned long long _tapGeneration; // +0x10
    unsigned long long _tapNodeId; // +0x18
    _NSRange _tapSelection; // +0x20
    BOOL _tapMenuVisible; // +0x30
    BOOL _menuWanted; // +0x31
    BOOL _handlesWanted; // +0x32
    BOOL _dragging; // +0x33
}
- (void)tapDownWithGeometry:(WxpayEditableSelectionGeometry)arg1 menuVisible:(BOOL)arg2;
- (void)interaction:(long long)arg1 generation:(unsigned long long)arg2 nodeId:(unsigned long long)arg3 selection:(_NSRange)arg4 toggleOnTap:(BOOL)arg5;
- (void)beginDrag;
- (void)endDragWithCollapsedSelection:(BOOL)arg1;
- (void)performedItem:(long long)arg1;
- (void)textEdited;
- (void)reset;
- (BOOL)menuWanted;
- (BOOL)handlesWanted;
- (BOOL)dragging;
@end
