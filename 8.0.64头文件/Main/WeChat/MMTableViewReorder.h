@interface MMTableViewReorder : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _isLongPressTrigger; // +0x8
    BOOL _isSingleClickTrigger; // +0x9
    BOOL _isAutoScrollEnable; // +0xa
    BOOL _isGettingCellSnapshot; // +0xb
    BOOL _isAutoScrolling; // +0xc
    BOOL _isBottomToTop; // +0xd
    id <MMTableViewReorderDelegate> _delegate; // +0x10
    double _longPressTrigerDuration; // +0x18
    double _autoScrollStartTopInset; // +0x20
    double _autoScrollStartBottomInset; // +0x28
    UITableView * _tableView; // +0x30
    UIView * _snapshotCell; // +0x38
    NSIndexPath * _draggingIndexPath; // +0x40
    MMTimer * _autoScrollTimer; // +0x48
    UILongPressGestureRecognizer * _longPressGesture; // +0x50
    UIPanGestureRecognizer * _singlePanGesture; // +0x58
    CGPoint _currentPosition; // +0x60
}
- (id)initWithTableView:(id)arg1;
- (BOOL)isSpaceCell:(id)arg1;
- (void)setIsLongPressTrigger:(BOOL)arg1;
- (void)setLongPressTrigerDuration:(double)arg1;
- (void)setIsSingleClickTrigger:(BOOL)arg1;
- (void)onLongPressGesture:(id)arg1;
- (void)onPanGesture:(id)arg1;
- (void)handleGestureState:(long long)arg1 position:(CGPoint)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onReorderBeginPosition:(CGPoint)arg1;
- (void)onReorderChangePosition:(CGPoint)arg1;
- (void)onReorderEndPosition:(CGPoint)arg1;
- (void)checkCellExchangeWithCurrentPos:(CGPoint)arg1;
- (id)calculateDestinationIndexForPos:(CGPoint)arg1;
- (void)startAutoScrollToTop:(BOOL)arg1;
- (void)stopAutoScroll;
- (void)fireTableViewScroll;
- (void)updateSnapshotCellForIndexPath:(id)arg1;
- (id)genSnapshotForIndexPath:(id)arg1;
- (id)indexBefore:(id)arg1;
- (id)indexAfter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLongPressTrigger;
- (BOOL)isSingleClickTrigger;
- (double)longPressTrigerDuration;
- (BOOL)isAutoScrollEnable;
- (void)setIsAutoScrollEnable:(BOOL)arg1;
- (double)autoScrollStartTopInset;
- (void)setAutoScrollStartTopInset:(double)arg1;
- (double)autoScrollStartBottomInset;
- (void)setAutoScrollStartBottomInset:(double)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (CGPoint)currentPosition;
- (void)setCurrentPosition:(CGPoint)arg1;
- (id)snapshotCell;
- (void)setSnapshotCell:(id)arg1;
- (BOOL)isGettingCellSnapshot;
- (void)setIsGettingCellSnapshot:(BOOL)arg1;
- (id)draggingIndexPath;
- (void)setDraggingIndexPath:(id)arg1;
- (id)autoScrollTimer;
- (void)setAutoScrollTimer:(id)arg1;
- (BOOL)isAutoScrolling;
- (void)setIsAutoScrolling:(BOOL)arg1;
- (BOOL)isBottomToTop;
- (void)setIsBottomToTop:(BOOL)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (id)singlePanGesture;
- (void)setSinglePanGesture:(id)arg1;
- (void).cxx_destruct;
@end
