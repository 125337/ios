@interface QTexturePolylineView : QPolylineView
{
    BOOL _useGradient; // +0x20
    BOOL _drawSymbol; // +0x21
    BOOL _internal; // +0x22
    long long _drawType; // +0x28
    NSArray * _segmentColor; // +0x30
    UIImage * _styleTextureImage; // +0x38
    NSArray * _segmentStyle; // +0x40
    UIImage * _symbolImage; // +0x48
    double _symbolGap; // +0x50
    UIColor * _eraseColor; // +0x58
    double _footprintStep; // +0x60
    QProgressAnimation * _appearAnimation; // +0x68
    QPolyline * _animationLine; // +0x70
}
- (void)onDidAdd;
- (void)onWillRemove;
- (void)setEmergeAnimation:(id)arg1;
- (id)emergeAnimation;
- (void)setTurnArrowAtSegmentIndex:(int)arg1;
- (void)setTurnArrowColor:(id)arg1 borderColor:(id)arg2;
- (void)clearTurnArrow;
- (id)initWithPolyline:(id)arg1;
- (void)setDrawType:(long long)arg1;
- (void)setSegmentStyle:(id)arg1;
- (void)updateOverlayPoints:(CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (void)setSegmentColor:(id)arg1;
- (void)setEraseColor:(id)arg1;
- (void)eraseFromStartToCurrentPoint:(CLLocationCoordinate2D)arg1 searchFrom:(int)arg2 toColor:(BOOL)arg3;
- (void)setStrokeColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setUseGradient:(BOOL)arg1;
- (void)setSymbolGap:(double)arg1;
- (BOOL)shouldUpdateAnimation;
- (void)removeAnimationLine;
- (void)update:(double)arg1;
- (long long)drawType;
- (BOOL)useGradient;
- (id)segmentColor;
- (id)styleTextureImage;
- (void)setStyleTextureImage:(id)arg1;
- (id)segmentStyle;
- (BOOL)isDrawSymbol;
- (void)setDrawSymbol:(BOOL)arg1;
- (id)symbolImage;
- (void)setSymbolImage:(id)arg1;
- (double)symbolGap;
- (id)eraseColor;
- (double)footprintStep;
- (void)setFootprintStep:(double)arg1;
- (BOOL)internal;
- (void)setInternal:(BOOL)arg1;
- (id)appearAnimation;
- (void)setAppearAnimation:(id)arg1;
- (id)animationLine;
- (void)setAnimationLine:(id)arg1;
- (void).cxx_destruct;
@end
