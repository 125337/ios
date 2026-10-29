@interface ScanAIIntentGeometryMetrics : NSObject
{
    double _normalizedArea; // +0x8
    double _aspectRatio; // +0x10
    double _centerScore; // +0x18
    double _edgeScore; // +0x20
    double _centerOffset; // +0x28
    double _minimumEdgeDistance; // +0x30
}
+ (id)metricsWithNormalizedRect:(CGRect)arg1;
+ (double)clippedUnitValue:(double)arg1;
- (double)areaScoreWithFullScoreArea:(double)arg1;
- (double)normalizedArea;
- (void)setNormalizedArea:(double)arg1;
- (double)aspectRatio;
- (void)setAspectRatio:(double)arg1;
- (double)centerScore;
- (void)setCenterScore:(double)arg1;
- (double)edgeScore;
- (void)setEdgeScore:(double)arg1;
- (double)centerOffset;
- (void)setCenterOffset:(double)arg1;
- (double)minimumEdgeDistance;
- (void)setMinimumEdgeDistance:(double)arg1;
@end
