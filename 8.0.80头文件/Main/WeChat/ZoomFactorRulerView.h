@interface ZoomFactorRulerView : UIView <ZoomFactorControlUtilsDelegate>
{
    NSArray * _labelOfScaleValues; // +0x8
    NSArray * _zoomFactorDisplayValueArray; // +0x10
    double _maxZoomFactorDisplayValue; // +0x18
    double _currentZoomDisplayFactor; // +0x20
    NSArray * _cachedMajorScalePositionsX; // +0x28
    NSArray * _cachedMinorScalePositionsX; // +0x30
}
+ (void)setVerticalLineAlphaMultiplierWithContext:(CGContext *)arg1 color:(id)arg2 xOfCurrentCalibration:(double)arg3 displacement:(double)arg4 totalWidth:(double)arg5;
+ (id)createScaleValueLabel:(id)arg1;
+ (void)drawVerticalLineWithContext:(CGContext *)arg1 lineHeight:(double)arg2 x:(double)arg3 startY:(double)arg4 endY:(double)arg5;
- (struct)rulerDisplacementLimit;
- (id)initWithFrame:(CGRect)arg1 zoomFactorDisplayValueArray:(id)arg2 maxZoomFactorDisplayValue:(double)arg3;
- (void)updateOrientation:(long long)arg1;
- (void)updateZoomVideoFactor:(double)arg1;
- (double)convertRulerDisplacement:(double)arg1;
- (void)addScaleValueLabels;
- (id)positionOfZoomFactorDisplayValue;
- (void)setFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (id)labelOfScaleValues;
- (void)setLabelOfScaleValues:(id)arg1;
- (id)zoomFactorDisplayValueArray;
- (void)setZoomFactorDisplayValueArray:(id)arg1;
- (double)maxZoomFactorDisplayValue;
- (void)setMaxZoomFactorDisplayValue:(double)arg1;
- (double)currentZoomDisplayFactor;
- (void)setCurrentZoomDisplayFactor:(double)arg1;
- (id)cachedMajorScalePositionsX;
- (void)setCachedMajorScalePositionsX:(id)arg1;
- (id)cachedMinorScalePositionsX;
- (void)setCachedMinorScalePositionsX:(id)arg1;
- (void).cxx_destruct;
@end
