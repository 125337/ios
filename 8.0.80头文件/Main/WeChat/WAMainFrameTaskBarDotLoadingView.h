@interface WAMainFrameTaskBarDotLoadingView : MMUIView
{
    double _zoomOutBeginOffset; // +0x8
    double _zoomOutEndOffset; // +0x10
    double _spreadBeginOffset; // +0x18
    double _spreadEndOffset; // +0x20
    double _centerDotZoomOutRadius; // +0x28
    double _dotRadius; // +0x30
    UIView * _centerDotLayer; // +0x38
    UIView * _leftDotLayer; // +0x40
    UIView * _rightDotLayer; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)reset;
- (void)initSubViews;
- (id)dot;
- (void)setDotRadius:(double)arg1;
- (void)updateStepOffset:(double)arg1;
- (void)updateSpreadProgress:(double)arg1;
- (void)updateZoomOutProgress:(double)arg1;
- (double)zoomOutBeginOffset;
- (void)setZoomOutBeginOffset:(double)arg1;
- (double)zoomOutEndOffset;
- (void)setZoomOutEndOffset:(double)arg1;
- (double)spreadBeginOffset;
- (void)setSpreadBeginOffset:(double)arg1;
- (double)spreadEndOffset;
- (void)setSpreadEndOffset:(double)arg1;
- (double)centerDotZoomOutRadius;
- (void)setCenterDotZoomOutRadius:(double)arg1;
- (double)dotRadius;
- (id)centerDotLayer;
- (void)setCenterDotLayer:(id)arg1;
- (id)leftDotLayer;
- (void)setLeftDotLayer:(id)arg1;
- (id)rightDotLayer;
- (void)setRightDotLayer:(id)arg1;
- (void).cxx_destruct;
@end
