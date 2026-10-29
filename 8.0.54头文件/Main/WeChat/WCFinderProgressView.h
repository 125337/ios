@interface WCFinderProgressView : UIView
{
    double _progress; // +0x8
    UIColor * _bottomStrokeColor; // +0x10
    UIColor * _lineStrokeColor; // +0x18
    CAShapeLayer * _bottomShapeLayer; // +0x20
    CAShapeLayer * _shpreLayer; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createLayer;
- (void)setBottomStrokeColor:(id)arg1;
- (void)setLineStrokeColor:(id)arg1;
- (void)setupProgress:(double)arg1 animated:(BOOL)arg2;
- (void)setProgress:(double)arg1;
- (double)progress;
- (id)bottomStrokeColor;
- (id)lineStrokeColor;
- (id)bottomShapeLayer;
- (void)setBottomShapeLayer:(id)arg1;
- (id)shpreLayer;
- (void)setShpreLayer:(id)arg1;
- (void).cxx_destruct;
@end

