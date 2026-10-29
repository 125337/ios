@interface WAMapPolygonData : NSObject
{
    UIColor * _fillColor; // +0x8
    UIColor * _strokeColor; // +0x10
    double _strokeWidth; // +0x18
    long long _displayLevel; // +0x20
    NSArray * _dashArray; // +0x28
}
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (long long)displayLevel;
- (void)setDisplayLevel:(long long)arg1;
- (id)dashArray;
- (void)setDashArray:(id)arg1;
- (void).cxx_destruct;
@end

