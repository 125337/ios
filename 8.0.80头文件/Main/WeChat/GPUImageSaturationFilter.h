@interface GPUImageSaturationFilter : GPUImageFilter
{
    int saturationUniform; // +0xe8
    double _saturation; // +0xf0
}
- (id)init;
- (void)setSaturation:(double)arg1;
- (double)saturation;
@end
