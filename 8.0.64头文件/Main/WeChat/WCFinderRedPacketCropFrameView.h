@interface WCFinderRedPacketCropFrameView : MMUIView
{
    WCFinderRedPacketCropSliderPanView * _leftPanView; // +0x8
    WCFinderRedPacketCropSliderPanView * _rightPanView; // +0x10
    id <WCFinderRedPacketCropFrameViewDelegate> _delegate; // +0x18
    UIView * _topLineView; // +0x20
    UIView * _bottomLineView; // +0x28
    UIView * _leftMaskView; // +0x30
    UIView * _rightMaskView; // +0x38
    double _minDistance; // +0x40
    double _maxDistance; // +0x48
    double _leftRightMargin; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 leftRightMargin:(double)arg2 minDistance:(double)arg3 maxDistance:(double)arg4;
- (id)buildMaskView;
- (id)buildLineView;
- (void)setUpView;
- (void)layoutLineSubviews;
- (void)onPanViewGes:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)leftPanView;
- (void)setLeftPanView:(id)arg1;
- (id)rightPanView;
- (void)setRightPanView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (id)leftMaskView;
- (void)setLeftMaskView:(id)arg1;
- (id)rightMaskView;
- (void)setRightMaskView:(id)arg1;
- (double)minDistance;
- (void)setMinDistance:(double)arg1;
- (double)maxDistance;
- (void)setMaxDistance:(double)arg1;
- (double)leftRightMargin;
- (void)setLeftRightMargin:(double)arg1;
- (void).cxx_destruct;
@end
