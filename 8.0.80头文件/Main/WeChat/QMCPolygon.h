@interface QMCPolygon : QPolygon
{
    NSString * _identifier; // +0x38
    UIColor * _fillColor; // +0x40
    UIColor * _strokeColor; // +0x48
    double _strokeWidth; // +0x50
    unsigned long long _lineType; // +0x58
    NSArray * _lineDashPattern; // +0x60
    long long _zIndex; // +0x68
    double _displayAlpha; // +0x70
}
- (id)initWithCoordinates:(CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (unsigned long long)lineType;
- (void)setLineType:(unsigned long long)arg1;
- (id)lineDashPattern;
- (void)setLineDashPattern:(id)arg1;
- (long long)zIndex;
- (void)setZIndex:(long long)arg1;
- (double)displayAlpha;
- (void)setDisplayAlpha:(double)arg1;
- (void).cxx_destruct;
@end
