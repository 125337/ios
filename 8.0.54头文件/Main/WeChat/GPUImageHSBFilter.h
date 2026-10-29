@interface GPUImageHSBFilter : GPUImageColorMatrixFilter
{
    float[4][4] matrix; // +0xf0
}
- (id)init;
- (void)reset;
- (void)rotateHue:(float)arg1;
- (void)adjustSaturation:(float)arg1;
- (void)adjustBrightness:(float)arg1;
- (void)_updateColorMatrix;
@end

