@interface GPUImageGaussianBlurFilter : GPUImageTwoPassTextureSamplingFilter
{
    BOOL shouldResizeBlurRadiusWithImageSize; // +0x140
    double _blurRadiusInPixels; // +0x148
    double _texelSpacingMultiplier; // +0x150
    double _blurRadiusAsFractionOfImageWidth; // +0x158
    double _blurRadiusAsFractionOfImageHeight; // +0x160
    unsigned long long _blurPasses; // +0x168
}
+ (id)vertexShaderForStandardBlurOfRadius:(unsigned long long)arg1 sigma:(double)arg2;
+ (id)fragmentShaderForStandardBlurOfRadius:(unsigned long long)arg1 sigma:(double)arg2;
+ (id)vertexShaderForOptimizedBlurOfRadius:(unsigned long long)arg1 sigma:(double)arg2;
+ (id)fragmentShaderForOptimizedBlurOfRadius:(unsigned long long)arg1 sigma:(double)arg2;
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;
- (id)init;
- (void)setupFilterForSize:(CGSize)arg1;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)switchToVertexShader:(id)arg1 fragmentShader:(id)arg2;
- (void)setTexelSpacingMultiplier:(double)arg1;
- (void)setBlurRadiusInPixels:(double)arg1;
- (void)setBlurRadiusAsFractionOfImageWidth:(double)arg1;
- (void)setBlurRadiusAsFractionOfImageHeight:(double)arg1;
- (double)texelSpacingMultiplier;
- (double)blurRadiusInPixels;
- (double)blurRadiusAsFractionOfImageWidth;
- (double)blurRadiusAsFractionOfImageHeight;
- (unsigned long long)blurPasses;
- (void)setBlurPasses:(unsigned long long)arg1;
@end
