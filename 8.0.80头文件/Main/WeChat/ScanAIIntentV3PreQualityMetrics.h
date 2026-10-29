@interface ScanAIIntentV3PreQualityMetrics : NSObject
{
    double _laplacian128; // +0x8
    double _laplacian64; // +0x10
    double _edgeDensity; // +0x18
    double _entropy; // +0x20
    double _rgbStd; // +0x28
    double _dynamicRange; // +0x30
}
- (double)laplacian128;
- (void)setLaplacian128:(double)arg1;
- (double)laplacian64;
- (void)setLaplacian64:(double)arg1;
- (double)edgeDensity;
- (void)setEdgeDensity:(double)arg1;
- (double)entropy;
- (void)setEntropy:(double)arg1;
- (double)rgbStd;
- (void)setRgbStd:(double)arg1;
- (double)dynamicRange;
- (void)setDynamicRange:(double)arg1;
@end
