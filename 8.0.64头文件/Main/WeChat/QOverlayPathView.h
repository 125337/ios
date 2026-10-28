@interface QOverlayPathView : QOverlayView
{
    UIColor * _strokeColor; // +0x8
    UIColor * _fillColor; // +0x10
    double _lineWidth; // +0x18
    double _alpha; // +0x20
}
- (id)init;
- (void)setAlpha:(double)arg1;
- (BOOL)alphaShouldUpdateWhenLoaded;
- (void)onUpdateAlpha:(double)arg1;
- (void)onDidAdd;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (double)alpha;
- (void).cxx_destruct;
@end
