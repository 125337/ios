@interface QArcView : QOverlayPathView
{
    BOOL _drawSymbol; // +0x20
    BOOL _disableCollideLabel; // +0x21
    double _borderWidth; // +0x28
    UIColor * _borderColor; // +0x30
    NSArray * _lineDashPattern; // +0x38
    double _symbolGap; // +0x40
    QTexturePolylineView * _internalPolyline; // +0x48
}
- (id)initWithArc:(id)arg1;
- (id)arc;
- (void)setStrokeColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setDisableCollideLabel:(BOOL)arg1;
- (void)onDidAdd;
- (void)onWillRemove;
- (double)borderWidth;
- (id)borderColor;
- (id)lineDashPattern;
- (void)setLineDashPattern:(id)arg1;
- (BOOL)isDrawSymbol;
- (void)setDrawSymbol:(BOOL)arg1;
- (double)symbolGap;
- (void)setSymbolGap:(double)arg1;
- (BOOL)disableCollideLabel;
- (id)internalPolyline;
- (void)setInternalPolyline:(id)arg1;
- (void).cxx_destruct;
@end

