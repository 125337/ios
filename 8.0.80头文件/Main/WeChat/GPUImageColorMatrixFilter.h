@interface GPUImageColorMatrixFilter : GPUImageFilter
{
    int colorMatrixUniform; // +0xe8
    int intensityUniform; // +0xec
    double _intensity; // +0xf0
    GPUMatrix4x4 _colorMatrix; // +0xf8
}
- (id)init;
- (void)setIntensity:(double)arg1;
- (void)setColorMatrix:(GPUMatrix4x4)arg1;
- (double)intensity;
- (GPUMatrix4x4)colorMatrix;
@end
