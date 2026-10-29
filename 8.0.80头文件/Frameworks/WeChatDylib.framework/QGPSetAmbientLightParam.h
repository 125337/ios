@interface QGPSetAmbientLightParam : QGPBaseModel
{
    QGPColor<QTCOptional> * _color; // +0x8
    NSNumber<QTCOptional> * _intensity; // +0x10
}
- (id)color;
- (void)setColor:(id)arg1;
- (id)intensity;
- (void)setIntensity:(id)arg1;
- (void).cxx_destruct;
@end
