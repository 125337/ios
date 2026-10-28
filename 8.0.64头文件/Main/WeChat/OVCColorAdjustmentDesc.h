@interface OVCColorAdjustmentDesc : NSObject
{
    double _brightnessBias; // +0x8
    double _contrastBias; // +0x10
    double _saturationBias; // +0x18
    double _tintBias; // +0x20
    double _hueBias; // +0x28
    double _temperatureBias; // +0x30
    double _exposureBias; // +0x38
    double _vibranceBias; // +0x40
    double _sharpness; // +0x48
    double _vignette; // +0x50
}
- (id)init;
- (double)brightnessBias;
- (void)setBrightnessBias:(double)arg1;
- (double)contrastBias;
- (void)setContrastBias:(double)arg1;
- (double)saturationBias;
- (void)setSaturationBias:(double)arg1;
- (double)tintBias;
- (void)setTintBias:(double)arg1;
- (double)hueBias;
- (void)setHueBias:(double)arg1;
- (double)temperatureBias;
- (void)setTemperatureBias:(double)arg1;
- (double)exposureBias;
- (void)setExposureBias:(double)arg1;
- (double)vibranceBias;
- (void)setVibranceBias:(double)arg1;
- (double)sharpness;
- (void)setSharpness:(double)arg1;
- (double)vignette;
- (void)setVignette:(double)arg1;
@end
