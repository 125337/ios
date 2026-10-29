@interface WCFinderStreamProfileDragBarView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isExpand; // +0x8
    BOOL _isExpandMax; // +0x9
    BOOL _isExpandingState; // +0xa
    BOOL _supportExpand; // +0xb
    BOOL _enableOuterPanGestureHandoff; // +0xc
    BOOL _enable; // +0xd
    BOOL _draggingClose; // +0xe
    BOOL _draggingBeginOnExpandArea; // +0xf
    BOOL _outerPanGestureHandoffActive; // +0x10
    id <WCFinderStreamProfileDragBarViewDelegate> _delegate; // +0x18
    double _displayCloseStyleDragDistance; // +0x20
    UIView * _fullScreenView; // +0x28
    UIView * _moveView; // +0x30
    UIPanGestureRecognizer * _panGesture; // +0x38
    UIView<WCFinderSteramProfileBarViewInterface> * _barView; // +0x40
    double _dragExpandHeight; // +0x48
    UIPanGestureRecognizer * _outerPanGesture; // +0x50
    double _beginDragY; // +0x58
    double _previousPanPositionY; // +0x60
    double _viewTopAtPanBegin; // +0x68
    double _expandMinHeight; // +0x70
    double _expandMaxHeight; // +0x78
    double _pointExpandMax; // +0x80
    double _pointExpandMin; // +0x88
    double _displayDragCloseStyleProgress; // +0x90
    CGPoint _draggingScrollViewOffset; // +0x98
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
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
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
- (BOOL)enableOuterPanGestureHandoff;
- (void)setEnableOuterPanGestureHandoff:(BOOL)arg1;
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
- (BOOL)outerPanGestureHandoffActive;
- (void)setOuterPanGestureHandoffActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
