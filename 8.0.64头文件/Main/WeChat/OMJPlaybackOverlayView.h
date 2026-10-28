@interface OMJPlaybackOverlayView : UIView <UIGestureRecognizerDelegate>
{
    double _pinchOriginalScale; // +0x8
    double _transformOriginalDistance; // +0x10
    double _transformOriginalScale; // +0x18
    CGPoint _transformPreviousPoint; // +0x20
    vector<double, std::allocator<double>> _rotationSnapValues; // +0x30
    vector<double, std::allocator<double>> _scaleSnapValues; // +0x48
    vector<double, std::allocator<double>> _positionXSnapValues; // +0x60
    vector<double, std::allocator<double>> _positionYSnapValues; // +0x78
    UISelectionFeedbackGenerator * _snapFeedbackGenerator; // +0x90
    UISelectionFeedbackGenerator * _rotationSnapFeedbackGenerator; // +0x98
    UISelectionFeedbackGenerator * _scaleSnapFeedbackGenerator; // +0xa0
    UISelectionFeedbackGenerator * _positionSnapFeedbackGenerator; // +0xa8
    NSArray * _canvasViewConstrains; // +0xb0
    map<MJRectCorner, UIView *, std::less<MJRectCorner>, std::allocator<std::pair<const MJRectCorner, UIView *>>> _handlesByCorner; // +0xb8
    UIView * _transformHandle; // +0xd0
    long long _transformHandleCorner; // +0xd8
    BOOL _isDragging; // +0xe0
    BOOL _isGuideLineEnabled; // +0xe1
    OMJHandleBoxShadowView * _handleBox; // +0xe8
    id <OMJPlaybackOverlayViewDelegate> _delegate; // +0xf0
    double _canvasAspectRatio; // +0xf8
    double _maxScaleFactor; // +0x100
    double _scaleSnapDistance; // +0x108
    double _rotationSnapDistance; // +0x110
    double _positionSnapDistance; // +0x118
    UITapGestureRecognizer * _tapGR; // +0x120
    UITapGestureRecognizer * _doubleTapGR; // +0x128
    UIPinchGestureRecognizer * _pinchGR; // +0x130
    UIRotationGestureRecognizer * _rotationGR; // +0x138
    UIPanGestureRecognizer * _panGR; // +0x140
    UIPanGestureRecognizer * _transformPanGR; // +0x148
    UIView * _canvasView; // +0x150
    OMJOverlayGuideLine * _horizontalGuideLine; // +0x158
    OMJOverlayGuideLine * _verticalGuideLine; // +0x160
    NSLayoutConstraint * _verticalGuideLineWidthConstraint; // +0x168
    CGRect _canvasFrame; // +0x170
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setupGuideLines;
- (void)setupCanvasView;
- (void)layoutViews;
- (void)setupGestures;
- (void)setupTransformPanGesture;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)addHandleBoxIfNeeded;
- (void)addHandleBox;
- (void)removeHandleBox;
- (void)updateHandleBoxModelWithPosition:(CGPoint)arg1 scale:(double)arg2 rotation:(double)arg3;
- (void)updateHandleBoxPresentationWithPosition:(CGPoint)arg1 size:(CGSize)arg2 scale:(double)arg3 rotation:(double)arg4 edgeInsets:(UIEdgeInsets)arg5 enabledRectCornerBits:(unsigned int)arg6;
- (void)addHandleBoxItem:(id)arg1;
- (void)addControlHandle:(id)arg1 atCorner:(long long)arg2;
- (void)addTransformHandle:(id)arg1 atCorner:(long long)arg2;
- (void)removeControlHandleAtCorner:(long long)arg1;
- (void)removeAllControlHandles;
- (void)layoutHandle:(id)arg1 atCorner:(long long)arg2;
- (void)handleBoxDeleteButtonDidTouchUpInside:(id)arg1;
- (void)handleBoxFlipButtonDidTouchUpInside:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTapGesture:(id)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleTransformPanGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleRotationGesture:(id)arg1;
- (void)internalPrepareForScale;
- (BOOL)internalUpdateScale:(double)arg1;
- (void)internalFinishScale;
- (void)internalPrepareForRotation;
- (BOOL)internalUpdateRotation:(double)arg1;
- (void)internalFinishRotation;
- (void)notifyDidTapCanvasAtPoint:(CGPoint)arg1;
- (void)notifyDidDoubleTapWidgetAtPoint:(CGPoint)arg1;
- (void)notifyWillUpdateScale;
- (void)notifyWillUpdateScaleByGesture;
- (void)notifyWillUpdateScaleByControlHandle;
- (void)notifyDidUpdateScale:(double)arg1;
- (void)notifyDidEndUpdatingScale;
- (void)notifyDidEndUpdatingScaleByGesture;
- (void)notifyDidEndUpdatingScaleByControlHandle;
- (void)notifyWillUpdateRotation;
- (void)notifyWillUpdateRotationByGesture;
- (void)notifyWillUpdateRotationByControlHandle;
- (void)notifyDidUpdateRotation:(double)arg1;
- (void)notifyDidEndUpdatingRotation;
- (void)notifyDidEndUpdatingRotationByGesture;
- (void)notifyDidEndUpdatingRotationByControlHandle;
- (void)notifyWillUpdatePosition;
- (void)notifyDidUpdatePosition:(CGPoint)arg1;
- (void)notifyDidEndUpdatingPosition;
- (tuple<bool, double>)snapRotationValue:(double)arg1;
- (tuple<bool, double>)snapScaleValue:(double)arg1;
- (tuple<bool, bool, CGPoint>)snapPositionValue:(CGPoint)arg1;
- (void)instantiateRotationSnapFeedbackGenerator;
- (void)instantiateScaleSnapFeedbackGenerator;
- (void)instantiatePositionSnapFeedbackGenerator;
- (void)releaseRotationSnapFeedbackGenerator;
- (void)releaseScaleSnapFeedbackGenerator;
- (void)releasePositionSnapFeedbackGenerator;
- (void)hapticFeedback;
- (void)setCanvasFrame:(CGRect)arg1;
- (void)setCanvasAspectRatio:(double)arg1;
- (void)configGuideLineWithStyle:(id)arg1;
- (id)handleBox;
- (void)setHandleBox:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDragging;
- (double)canvasAspectRatio;
- (CGRect)canvasFrame;
- (BOOL)isGuideLineEnabled;
- (void)setIsGuideLineEnabled:(BOOL)arg1;
- (double)maxScaleFactor;
- (void)setMaxScaleFactor:(double)arg1;
- (double)scaleSnapDistance;
- (void)setScaleSnapDistance:(double)arg1;
- (double)rotationSnapDistance;
- (void)setRotationSnapDistance:(double)arg1;
- (double)positionSnapDistance;
- (void)setPositionSnapDistance:(double)arg1;
- (id)tapGR;
- (id)doubleTapGR;
- (id)pinchGR;
- (id)rotationGR;
- (id)panGR;
- (id)transformPanGR;
- (id)canvasView;
- (id)horizontalGuideLine;
- (void)setHorizontalGuideLine:(id)arg1;
- (id)verticalGuideLine;
- (void)setVerticalGuideLine:(id)arg1;
- (id)verticalGuideLineWidthConstraint;
- (void)setVerticalGuideLineWidthConstraint:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
