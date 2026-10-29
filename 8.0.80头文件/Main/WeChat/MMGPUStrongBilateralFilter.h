@interface MMGPUStrongBilateralFilter : MMGPUOneTextureRender
{
    double distanceNormalizationFactorUniform; // +0x50
    double texelWidthOffsetUniform; // +0x58
    double texelHeightOffsetUniform; // +0x60
    int sbfControlUniform; // +0x68
    double _distanceNormalizationFactor; // +0x70
    double _texelSpacingMultiplier; // +0x78
}
- (id)init;
- (void)setFactor:(double)arg1 widthOffset:(float)arg2 heightOffset:(float)arg3;
- (void)setSBFControl:(int)arg1;
- (double)distanceNormalizationFactor;
- (void)setDistanceNormalizationFactor:(double)arg1;
- (double)texelSpacingMultiplier;
- (void)setTexelSpacingMultiplier:(double)arg1;
@end
