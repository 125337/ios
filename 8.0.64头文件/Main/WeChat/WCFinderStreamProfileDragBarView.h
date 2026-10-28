@interface WCFinderStreamProfileDragBarView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isExpand; // +0x8
    BOOL _isExpandMax; // +0x9
    BOOL _isExpandingState; // +0xa
    BOOL _supportExpand; // +0xb
    BOOL _enable; // +0xc
    BOOL _draggingClose; // +0xd
    BOOL _draggingBeginOnExpandArea; // +0xe
    id <WCFinderStreamProfileDragBarViewDelegate> _delegate; // +0x10
    double _displayCloseStyleDragDistance; // +0x18
    UIView * _fullScreenView; // +0x20
    UIView * _moveView; // +0x28
    UIPanGestureRecognizer * _panGesture; // +0x30
    UIView<WCFinderSteramProfileBarViewInterface> * _barView; // +0x38
    double _dragExpandHeight; // +0x40
    UIPanGestureRecognizer * _outerPanGesture; // +0x48
    double _beginDragY; // +0x50
    double _previousPanPositionY; // +0x58
    double _viewTopAtPanBegin; // +0x60
    double _expandMinHeight; // +0x68
    double _expandMaxHeight; // +0x70
    double _pointExpandMax; // +0x78
    double _pointExpandMin; // +0x80
    double _displayDragCloseStyleProgress; // +0x88
    CGPoint _draggingScrollViewOffset; // +0x90
}
- (id)initWithWidth:(double)arg1 blankHeight:(double)arg2 dragExpandHeight:(double)arg3;
- (id)initWithWidth:(double)arg1 blankHeight:(double)arg2 dragExpandHeight:(double)arg3 type:(long long)arg4;
- (void)initBarViewWithType:(long long)arg1;
- (void)layoutSubviews;
- (void)setDisplayDragCloseStyle:(BOOL)arg1;
- (BOOL)displayDragCloseStyle;
- (void)updateBarBGColor:(id)arg1 arrowColor:(id)arg2;
- (void)setDisplayDragCloseStyleProgress:(double)arg1;
- (void)updateDisplayDragCloseStyle;
- (void)doLayoutBarView;
- (void)handlePan:(id)arg1;
- (void)handlePanGestureBegin;
- (void)handleDragBarGestureChange:(double)arg1;
- (void)handleDragBarGestureEnd:(CGPoint)arg1;
- (void)setupScrollView:(id)arg1;
- (void)setupScrollView:(id)arg1 orMainView:(id)arg2;
- (void)handleTableViewPanGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (BOOL)isExpandMax;
- (void)setIsExpandMax:(BOOL)arg1;
- (BOOL)isExpandingState;
- (void)setIsExpandingState:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)displayCloseStyleDragDistance;
- (void)setDisplayCloseStyleDragDistance:(double)arg1;
- (id)fullScreenView;
- (void)setFullScreenView:(id)arg1;
- (id)moveView;
- (void)setMoveView:(id)arg1;
- (BOOL)supportExpand;
- (void)setSupportExpand:(BOOL)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (id)barView;
- (void)setBarView:(id)arg1;
- (double)dragExpandHeight;
- (void)setDragExpandHeight:(double)arg1;
- (id)outerPanGesture;
- (void)setOuterPanGesture:(id)arg1;
- (double)beginDragY;
- (void)setBeginDragY:(double)arg1;
- (double)previousPanPositionY;
- (void)setPreviousPanPositionY:(double)arg1;
- (double)viewTopAtPanBegin;
- (void)setViewTopAtPanBegin:(double)arg1;
- (BOOL)draggingClose;
- (void)setDraggingClose:(BOOL)arg1;
- (BOOL)draggingBeginOnExpandArea;
- (void)setDraggingBeginOnExpandArea:(BOOL)arg1;
- (CGPoint)draggingScrollViewOffset;
- (void)setDraggingScrollViewOffset:(CGPoint)arg1;
- (double)expandMinHeight;
- (void)setExpandMinHeight:(double)arg1;
- (double)expandMaxHeight;
- (void)setExpandMaxHeight:(double)arg1;
- (double)pointExpandMax;
- (void)setPointExpandMax:(double)arg1;
- (double)pointExpandMin;
- (void)setPointExpandMin:(double)arg1;
- (double)displayDragCloseStyleProgress;
- (void).cxx_destruct;
@end
