@interface MJLoadingView : UIView
{
    float _progress; // +0x8
    UIView * _bgMaskView; // +0x10
    CAShapeLayer * _bgCircleLayer; // +0x18
    CAShapeLayer * _foregroundLayer; // +0x20
}
+ (id)progressLayerWithStrokeColor:(id)arg1 StrokeEnd:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setProgress:(float)arg1;
- (id)bgMaskView;
- (id)bgCircleLayer;
- (id)foregroundLayer;
- (float)progress;
- (void)setBgMaskView:(id)arg1;
- (void)setBgCircleLayer:(id)arg1;
- (void)setForegroundLayer:(id)arg1;
- (void).cxx_destruct;
@end

