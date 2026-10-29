@interface TXCCameraFocusSquareView : UIView
{
    double _scalingFactor; // +0x8
}
+ (id)defaultFocusSquareView;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupFocusShapeLayer;
- (void)updatePoint:(CGPoint)arg1;
- (double)scalingFactor;
- (void)setScalingFactor:(double)arg1;
@end

