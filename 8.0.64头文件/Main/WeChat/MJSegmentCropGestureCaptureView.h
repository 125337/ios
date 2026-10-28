@interface MJSegmentCropGestureCaptureView : MMUIView <UIGestureRecognizerDelegate>
{
    id <MJSegmentCropGestureCaptureViewDelegate> _delegate; // +0x8
    UIView * _leftCropMaskView; // +0x10
    UIView * _rightCropMaskView; // +0x18
    UIView * _topCropMaskView; // +0x20
    UIView * _bottomCropMaskView; // +0x28
    UIPanGestureRecognizer * _panGR; // +0x30
    UIPinchGestureRecognizer * _pinchGR; // +0x38
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)setupGestures;
- (void)layoutWithCenterBoxView:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)leftCropMaskView;
- (void)setLeftCropMaskView:(id)arg1;
- (id)rightCropMaskView;
- (void)setRightCropMaskView:(id)arg1;
- (id)topCropMaskView;
- (void)setTopCropMaskView:(id)arg1;
- (id)bottomCropMaskView;
- (void)setBottomCropMaskView:(id)arg1;
- (id)panGR;
- (id)pinchGR;
- (void).cxx_destruct;
@end
