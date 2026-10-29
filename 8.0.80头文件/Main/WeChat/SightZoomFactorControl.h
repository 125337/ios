@interface SightZoomFactorControl : NSObject <ZoomFactorDragableCalibrationViewDelegate, ZoomFactorDisplayButtonListViewDelegate, UIGestureRecognizerDelegate, ZoomFactorControlUtilsDelegate>
{
    BOOL _isDragging; // +0x8
    BOOL _adaptsToContentGeometry; // +0x9
    BOOL _isLongPressGestureRecognized; // +0xa
    BOOL _isAnimatingOfSwitchZoomFactorDragableCalibrationViewToZoomFactorDisplayButtonListView; // +0xb
    id <SightZoomFactorControlDelegate> _delegate; // +0x10
    UIView * _zoomControlAreaView; // +0x18
    SightZoomControlGestureView * _zoomControlGestureView; // +0x20
    ZoomFactorDisplayButtonListView * _zoomFactorDisplayButtonListView; // +0x28
    ZoomFactorDragableCalibrationView * _zoomFactorDragableCalibrationView; // +0x30
    NSArray * _zoomFactorDisplayValueArray; // +0x38
    double _maxZoomFactorDisplayValue; // +0x40
    UIPanGestureRecognizer * _panGesture; // +0x48
    UILongPressGestureRecognizer * _longPressGesture; // +0x50
    ZoomFactorCursorButtonItem * _animatingZoomFactorCursorButtonItem; // +0x58
    long long _displayButtonListViewActiveButtonIdx; // +0x60
}
- (id)initWithContentFrame:(CGRect)arg1 toolBarFrame:(CGRect)arg2 zoomFactorDisplayValueArray:(id)arg3 maxZoomFactorDisplayValue:(double)arg4;
- (void)setupZoomControlAreaViewWithContentFrame:(CGRect)arg1 toolBarFrame:(CGRect)arg2;
- (void)zoomControlGestureViewAddDragableGesture;
- (void)setZoomControlAreaGestureEnabled:(BOOL)arg1;
- (void)handleZoomFactorDragableCalibrationLongPressGesture:(id)arg1;
- (void)handleZoomFactorDragableCalibrationUIGestureRecognizerStateBegan:(id)arg1;
- (void)handleZoomFactorDragableCalibrationUIGestureRecognizerStateEnded:(id)arg1;
- (void)handleZoomFactorDragableCalibrationPanGesture:(id)arg1;
- (void)relayoutZoomControlAreaViewWithContenView:(id)arg1 toolBar:(id)arg2;
- (void)setZoomControlAreaViewHidden:(BOOL)arg1;
- (void)addZoomControlAreaViewTo:(id)arg1;
- (CGRect)frameOfZoomControlAreaView;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateOrientation:(long long)arg1;
- (void)updateZoomVideoFactor:(double)arg1;
- (void)switchZoomFactorDragableCalibrationViewToZoomFactorDisplayButtonListView;
- (void)setZoomFactorCursorButtonItemHidden:(BOOL)arg1;
- (void)switchZoomFactorDisplayButtonListViewFromInitStateToSingleCursorButton;
- (void)switchZoomFactorDisplayButtonListViewFromSingleCursorButtonToInitState;
- (void)onAutoMacroSwitchAreaViewHidden:(BOOL)arg1;
- (double)gestureLeftBoundary;
- (void)onZoomFactorDragableCalibrationViewUpdateZoomDisplayFactor:(double)arg1;
- (void)onZoomFactorDisplayButtonListViewUpdateZoomDisplayFactor:(double)arg1;
- (void)onZoomFactorDisplayButtonListViewClickButton:(unsigned long long)arg1;
- (double)zoomFactorDisplayButtonListViewLeftBoundaryExtension;
- (double)zoomFactorDisplayButtonListViewRightBoundaryExtension;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (BOOL)adaptsToContentGeometry;
- (void)setAdaptsToContentGeometry:(BOOL)arg1;
- (id)zoomControlAreaView;
- (void)setZoomControlAreaView:(id)arg1;
- (id)zoomControlGestureView;
- (void)setZoomControlGestureView:(id)arg1;
- (id)zoomFactorDisplayButtonListView;
- (void)setZoomFactorDisplayButtonListView:(id)arg1;
- (id)zoomFactorDragableCalibrationView;
- (void)setZoomFactorDragableCalibrationView:(id)arg1;
- (id)zoomFactorDisplayValueArray;
- (void)setZoomFactorDisplayValueArray:(id)arg1;
- (double)maxZoomFactorDisplayValue;
- (void)setMaxZoomFactorDisplayValue:(double)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (BOOL)isLongPressGestureRecognized;
- (void)setIsLongPressGestureRecognized:(BOOL)arg1;
- (id)animatingZoomFactorCursorButtonItem;
- (void)setAnimatingZoomFactorCursorButtonItem:(id)arg1;
- (long long)displayButtonListViewActiveButtonIdx;
- (void)setDisplayButtonListViewActiveButtonIdx:(long long)arg1;
- (BOOL)isAnimatingOfSwitchZoomFactorDragableCalibrationViewToZoomFactorDisplayButtonListView;
- (void)setIsAnimatingOfSwitchZoomFactorDragableCalibrationViewToZoomFactorDisplayButtonListView:(BOOL)arg1;
- (void).cxx_destruct;
@end
