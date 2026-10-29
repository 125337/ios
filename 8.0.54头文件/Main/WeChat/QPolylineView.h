@interface QPolylineView : QOverlayPathView
{
    BOOL _disableCollideLabel; // +0x20
    double _borderWidth; // +0x28
    UIColor * _borderColor; // +0x30
    NSArray * _lineDashPattern; // +0x38
    QText * _text; // +0x40
}
- (id)initWithPolyline:(id)arg1;
- (id)polyline;
- (void)setStrokeColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)doRemoveText;
- (void)doAddText;
- (void)setDisableCollideLabel:(BOOL)arg1;
- (void)updateOverlayPoints:(CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (void)onDidAdd;
- (void)onWillRemove;
- (double)borderWidth;
- (id)borderColor;
- (id)lineDashPattern;
- (void)setLineDashPattern:(id)arg1;
- (id)text;
- (BOOL)disableCollideLabel;
- (void).cxx_destruct;
@end

