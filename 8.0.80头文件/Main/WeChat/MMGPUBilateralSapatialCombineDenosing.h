@interface MMGPUBilateralSapatialCombineDenosing : MMGPUThreeTextureRender
{
    int spatialBilateralFilterControlUniform; // +0x60
    int spatialBilateralFilterSwitchUniform; // +0x64
}
- (id)init;
- (void)setBilateralSapatialFilterControl:(int)arg1;
- (void)setBilateralSapatialFilterSwitch:(int)arg1;
@end
