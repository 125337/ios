@interface MJSlantedLinesView : UIView
{
    BOOL _isMaskEnabled; // +0x8
    UIColor * _lineColor; // +0x10
    double _lineWidth; // +0x18
    double _lineSpacing; // +0x20
    UIColor * _maskBorderColor; // +0x28
    double _maskBorderWidth; // +0x30
    CAShapeLayer * _maskLayer; // +0x38
    CAShapeLayer * _maskBorderLayer; // +0x40
    CGRect _normalizedMaskRect; // +0x48
    CGRect _lastBounds; // +0x68
}
+ (Class)layerClass;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupLayers;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (BOOL)isMaskEnabled;
- (void)setIsMaskEnabled:(BOOL)arg1;
- (CGRect)normalizedMaskRect;
- (void)setNormalizedMaskRect:(CGRect)arg1;
- (id)maskBorderColor;
- (void)setMaskBorderColor:(id)arg1;
- (double)maskBorderWidth;
- (void)setMaskBorderWidth:(double)arg1;
- (CGRect)lastBounds;
- (void)setLastBounds:(CGRect)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)maskBorderLayer;
- (void)setMaskBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end

