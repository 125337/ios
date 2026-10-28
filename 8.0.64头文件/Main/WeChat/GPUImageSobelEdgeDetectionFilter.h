@interface GPUImageSobelEdgeDetectionFilter : GPUImageTwoPassFilter
{
    int texelWidthUniform; // +0x110
    int texelHeightUniform; // +0x114
    int edgeStrengthUniform; // +0x118
    BOOL hasOverriddenImageSizeFactor; // +0x11c
    double _texelWidth; // +0x120
    double _texelHeight; // +0x128
    double _edgeStrength; // +0x130
}
- (id)init;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (void)setupFilterForSize:(CGSize)arg1;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (BOOL)wantsMonochromeInput;
- (BOOL)providesMonochromeOutput;
- (void)setTexelWidth:(double)arg1;
- (void)setTexelHeight:(double)arg1;
- (void)setEdgeStrength:(double)arg1;
- (double)texelWidth;
- (double)texelHeight;
- (double)edgeStrength;
@end
