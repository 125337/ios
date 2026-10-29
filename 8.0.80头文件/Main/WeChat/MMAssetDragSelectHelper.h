@interface MMAssetDragSelectHelper : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _enable; // +0x8
    BOOL _isPicking; // +0x9
    BOOL _canPanGestureBegin; // +0xa
    BOOL _canPanGestureChange; // +0xb
    BOOL _transferringSelectionGesture; // +0xc
    BOOL _doSelect; // +0xd
    id <MMAssetDragSelectDelegate> _delegate; // +0x10
    long long _maxCount; // +0x18
    long long _numberOfViewInCell; // +0x20
    double _autoScrollUpEdge; // +0x28
    double _autoScrollDownEdge; // +0x30
    UITableView * _tableView; // +0x38
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x40
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x48
    unsigned long long _autoAnimState; // +0x50
    NSMutableSet * _multiSelectSet; // +0x58
    CGPoint _beginPoint; // +0x60
    CGPoint _touchPoint; // +0x70
}
- (id)initWith:(id)arg1;
- (void)dealloc;
- (void)setEnable:(BOOL)arg1;
- (double)autoScrollUpEdge;
- (double)autoScrollDownEdge;
- (id)longPressGestureRecognizer;
- (void)handleLongPressGesture:(id)arg1;
- (BOOL)isLongPressGestureActive;
- (id)panGestureRecognizer;
- (void)handlePanGesture:(id)arg1;
- (void)multiSelectBegin:(BOOL)arg1;
- (void)multiSelectHold;
- (void)multiSelectCancel;
- (void)updateAutoScrollState;
- (void)doTopEdgeScrollAnimation;
- (void)doBottomEdgeScrollAnimation;
- (void)doScrollAnimation:(CGPoint)arg1;
- (void)cancelScrollAnimation;
- (id)multiSelectArray:(id)arg1 endIndex:(id)arg2;
- (id)genArrayWith:(unsigned long long)arg1 endValue:(unsigned long long)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)maxCount;
- (void)setMaxCount:(long long)arg1;
- (BOOL)enable;
- (BOOL)isPicking;
- (void)setIsPicking:(BOOL)arg1;
- (long long)numberOfViewInCell;
- (void)setNumberOfViewInCell:(long long)arg1;
- (void)setAutoScrollUpEdge:(double)arg1;
- (void)setAutoScrollDownEdge:(double)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (unsigned long long)autoAnimState;
- (void)setAutoAnimState:(unsigned long long)arg1;
- (id)multiSelectSet;
- (void)setMultiSelectSet:(id)arg1;
- (BOOL)canPanGestureBegin;
- (void)setCanPanGestureBegin:(BOOL)arg1;
- (BOOL)canPanGestureChange;
- (void)setCanPanGestureChange:(BOOL)arg1;
- (BOOL)transferringSelectionGesture;
- (void)setTransferringSelectionGesture:(BOOL)arg1;
- (BOOL)doSelect;
- (void)setDoSelect:(BOOL)arg1;
- (CGPoint)beginPoint;
- (void)setBeginPoint:(CGPoint)arg1;
- (CGPoint)touchPoint;
- (void)setTouchPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end
