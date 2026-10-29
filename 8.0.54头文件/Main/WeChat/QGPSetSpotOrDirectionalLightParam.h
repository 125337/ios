@interface QGPSetSpotOrDirectionalLightParam : QGPBaseModel
{
    long long _type; // +0x8
    QGPColor<QTCOptional> * _color; // +0x10
    QGPVector3<QTCOptional> * _direction; // +0x18
    NSNumber<QTCOptional> * _intensity; // +0x20
}
- (long long)type;
- (void)setType:(long long)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)direction;
- (void)setDirection:(id)arg1;
- (id)intensity;
- (void)setIntensity:(id)arg1;
- (void).cxx_destruct;
@end

