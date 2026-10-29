@interface EditImageWidgetTool : EditImageUIView <UIGestureRecognizerDelegate>
{
    BOOL _activeTouches; // +0x8
    unsigned int _gestureMonitor; // +0xc
    BOOL _isPressing; // +0x10
    double _swipeLength; // +0x18
    double _viewScale; // +0x20
    CGPoint _startPanGesturePoint; // +0x28
    BOOL _hasSaveAttr; // +0x38
    BOOL _isMoveToTop; // +0x39
    EditImageModView * _saveView; // +0x40
    BOOL _hasAddView; // +0x48
    double _viewBorder; // +0x50
    double _maxFrameScaleWhileSelect; // +0x58
    BOOL _hasPreClicked; // +0x60
    BOOL _isSpecialPaning; // +0x61
    BOOL _isSelected; // +0x62
    BOOL _isAdsort; // +0x63
    BOOL _ignoreShock; // +0x64
    unsigned int _viewArrayIndex; // +0x68
    id <EditImageWidgetToolDelegate> _delegate; // +0x70
    EditImageBorderView * _borderView; // +0x78
    double _screenScale; // +0x80
    double _viewAngle; // +0x88
    double _widgetScale; // +0x90
    double _zoomScale; // +0x98
    NSString * _textPendantInfo; // +0xa0
    UIPanGestureRecognizer * _panGesture; // +0xa8
    UITapGestureRecognizer * _tapGesture; // +0xb0
    UIPinchGestureRecognizer * _pinchGesture; // +0xb8
    UIRotationGestureRecognizer * _rotateGesture; // +0xc0
    UILongPressGestureRecognizer * _longPressGesture; // +0xc8
    double _currentAdsortRadian; // +0xd0
    unsigned long long _handleGestureCount; // +0xd8
    struct _gestureStartState; // +0xe0
}
+ (id)generateWidgetFromState:(id)arg1;
- (id)init;
- (void)initBorderView;
- (void)handleTapGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)saveWidgetStateInGestureStartIfNeeded;
- (BOOL)checkAllGestureEnd;
- (BOOL)needAdsorb:(double)arg1;
- (double)angleOfRadian:(double)arg1;
- (double)getAdsorbAngle:(double)arg1;
- (void)_realPlayShock;
- (void)forceCancelGesture;
- (void)startGesture;
- (void)endGesture;
- (void)saveAttr;
- (void)resetHasAddViewState;
- (void)setHasSaveAttr;
- (struct)getCurrentWidgetState;
- (struct)getWidgetStartGestureState;
- (void)restoreWidgetState:(struct)arg1;
- (void)printToolState:(struct)arg1;
- (void)sendStartGestureToDelegate;
- (void)sendEndGestureToDelegate;
- (void)sendShowSelectedTextToolBorderViewToDelegate;
- (void)sendShowNilTextToolBorderViewToDelegate;
- (void)showBorderView;
- (void)hideBorderView;
- (void)reloadFrame;
- (void)reloadFrameWithZoomScale:(double)arg1;
- (void)judgeFromDeleteBar:(id)arg1;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (BOOL)startEditingText;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(CGPoint)arg1;
- (id)exportAnimatedLayer;
- (void)onWidgitDeleted;
- (void)freezeWidget;
- (void)reviveWidget;
- (void)seekWidgetToTimeSec:(double)arg1;
- (void)resetWidget;
- (id)exportWidgetStateForEditorFrame:(CGRect)arg1 assetPreviewFrame:(CGRect)arg2;
- (void)set_isSelected:(BOOL)arg1;
- (void)dealloc;
- (id)_delegate;
- (void)set_delegate:(id)arg1;
- (BOOL)_isSelected;
- (double)_viewScale;
- (void)set_viewScale:(double)arg1;
- (id)_borderView;
- (void)set_borderView:(id)arg1;
- (unsigned int)_viewArrayIndex;
- (void)set_viewArrayIndex:(unsigned int)arg1;
- (double)_screenScale;
- (void)set_screenScale:(double)arg1;
- (double)_viewAngle;
- (void)set_viewAngle:(double)arg1;
- (double)_widgetScale;
- (void)set_widgetScale:(double)arg1;
- (double)_zoomScale;
- (void)set_zoomScale:(double)arg1;
- (id)_textPendantInfo;
- (void)set_textPendantInfo:(id)arg1;
- (id)_panGesture;
- (void)set_panGesture:(id)arg1;
- (id)_tapGesture;
- (void)set_tapGesture:(id)arg1;
- (id)_pinchGesture;
- (void)set_pinchGesture:(id)arg1;
- (id)_rotateGesture;
- (void)set_rotateGesture:(id)arg1;
- (id)_longPressGesture;
- (void)set_longPressGesture:(id)arg1;
- (BOOL)isAdsort;
- (void)setIsAdsort:(BOOL)arg1;
- (double)currentAdsortRadian;
- (void)setCurrentAdsortRadian:(double)arg1;
- (struct)gestureStartState;
- (void)setGestureStartState:(struct)arg1;
- (unsigned long long)handleGestureCount;
- (void)setHandleGestureCount:(unsigned long long)arg1;
- (BOOL)ignoreShock;
- (void)setIgnoreShock:(BOOL)arg1;
- (void).cxx_destruct;
@end
