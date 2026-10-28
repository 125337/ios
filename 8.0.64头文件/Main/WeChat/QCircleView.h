@interface QCircleView : QOverlayPathView
{
    unsigned long long _lineType; // +0x20
    NSArray * _lineDashPattern; // +0x28
}
- (id)initWithCircle:(id)arg1;
- (void)dealloc;
- (id)circle;
- (void)prepareForUse;
- (void)setStrokeColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setLineType:(unsigned long long)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateOverlayPoints:(CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (unsigned long long)lineType;
- (id)lineDashPattern;
- (void).cxx_destruct;
@end
