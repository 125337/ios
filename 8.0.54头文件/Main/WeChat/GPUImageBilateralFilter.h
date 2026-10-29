@interface GPUImageBilateralFilter : GPUImageGaussianBlurFilter
{
    double firstDistanceNormalizationFactorUniform; // +0x150
    double secondDistanceNormalizationFactorUniform; // +0x158
    double _distanceNormalizationFactor; // +0x160
}
- (id)init;
- (void)setDistanceNormalizationFactor:(double)arg1;
- (double)distanceNormalizationFactor;
@end

