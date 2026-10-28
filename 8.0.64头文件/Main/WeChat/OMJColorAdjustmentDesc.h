@interface OMJColorAdjustmentDesc : NSObject
{
    float _brightnessBias; // +0x8
    float _contrastBias; // +0xc
    float _saturationBias; // +0x10
    float _tintBias; // +0x14
    float _hueBias; // +0x18
    float _temperatureBias; // +0x1c
    float _exposureBias; // +0x20
    float _vibranceBias; // +0x24
    float _sharpness; // +0x28
    float _vignette; // +0x2c
}
- (id)init;
- (id)initWithColorAdjustmentDesc:(id)arg1;
- (float)brightnessBias;
- (void)setBrightnessBias:(float)arg1;
- (float)contrastBias;
- (void)setContrastBias:(float)arg1;
- (float)saturationBias;
- (void)setSaturationBias:(float)arg1;
- (float)tintBias;
- (void)setTintBias:(float)arg1;
- (float)hueBias;
- (void)setHueBias:(float)arg1;
- (float)temperatureBias;
- (void)setTemperatureBias:(float)arg1;
- (float)exposureBias;
- (void)setExposureBias:(float)arg1;
- (float)vibranceBias;
- (void)setVibranceBias:(float)arg1;
- (float)sharpness;
- (void)setSharpness:(float)arg1;
- (float)vignette;
- (void)setVignette:(float)arg1;
@end
