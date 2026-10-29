@interface GPUImageTwoPassTextureSamplingFilter : GPUImageTwoPassFilter
{
    int verticalPassTexelWidthOffsetUniform; // +0x110
    int verticalPassTexelHeightOffsetUniform; // +0x114
    int horizontalPassTexelWidthOffsetUniform; // +0x118
    int horizontalPassTexelHeightOffsetUniform; // +0x11c
    float verticalPassTexelWidthOffset; // +0x120
    float verticalPassTexelHeightOffset; // +0x124
    float horizontalPassTexelWidthOffset; // +0x128
    float horizontalPassTexelHeightOffset; // +0x12c
    double _verticalTexelSpacing; // +0x130
    double _horizontalTexelSpacing; // +0x138
}
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (void)setupFilterForSize:(CGSize)arg1;
- (void)setVerticalTexelSpacing:(double)arg1;
- (void)setHorizontalTexelSpacing:(double)arg1;
- (double)verticalTexelSpacing;
- (double)horizontalTexelSpacing;
@end
