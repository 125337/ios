@interface SightVerticalZoomRulerView : UIView <ZoomFactorControlUtilsDelegate>
{
    double _visibleHeight; // +0x8
    NSArray * _labelOfScaleValues; // +0x10
    NSArray * _zoomFactorDisplayValueArray; // +0x18
    double _minZoomFactorDisplayValue; // +0x20
    double _maxZoomFactorDisplayValue; // +0x28
    NSArray * _cachedDisplacements; // +0x30
    NSArray * _cachedMajorPositions; // +0x38
    NSArray * _cachedMinorBlocks; // +0x40
}
+ (void)applyStrokeAlphaWithContext:(CGContext *)arg1 color:(id)arg2 absolutePosition:(double)arg3 totalHeight:(double)arg4;
+ (void)drawHorizontalLineWithContext:(CGContext *)arg1 lineLength:(double)arg2 y:(double)arg3 leftEdge:(double)arg4;
+ (id)createScaleValueLabel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 zoomFactorDisplayValueArray:(id)arg2 maxZoomFactorDisplayValue:(double)arg3;
- (double)rulerSpanHeight;
- (double)displacementForDisplayFactor:(double)arg1;
- (double)positionForDisplayFactor:(double)arg1;
- (void)updateVisibleHeight:(double)arg1;
- (struct)rulerDisplacementLimit;
- (double)convertRulerDisplacement:(double)arg1;
- (id)displacementOfZoomFactorDisplayValue;
- (void)updateZoomVideoFactor:(double)arg1;
- (void)updateOrientation:(long long)arg1;
- (void)addScaleValueLabels;
- (double)centerAlphaForAbsolutePosition:(double)arg1;
- (double)edgeAlphaForAbsolutePosition:(double)arg1;
- (void)refreshLabelAlpha;
- (void)setFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (double)visibleHeight;
- (void)setVisibleHeight:(double)arg1;
- (id)labelOfScaleValues;
- (void)setLabelOfScaleValues:(id)arg1;
- (id)zoomFactorDisplayValueArray;
- (void)setZoomFactorDisplayValueArray:(id)arg1;
- (double)minZoomFactorDisplayValue;
- (void)setMinZoomFactorDisplayValue:(double)arg1;
- (double)maxZoomFactorDisplayValue;
- (void)setMaxZoomFactorDisplayValue:(double)arg1;
- (id)cachedDisplacements;
- (void)setCachedDisplacements:(id)arg1;
- (id)cachedMajorPositions;
- (void)setCachedMajorPositions:(id)arg1;
- (id)cachedMinorBlocks;
- (void)setCachedMinorBlocks:(id)arg1;
- (void).cxx_destruct;
@end
