@interface ParametersModel : NSObject
{
    long long _Frequency; // +0x8
    long long _Intensity; // +0x10
    NSArray * _Curve; // +0x18
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (long long)Frequency;
- (void)setFrequency:(long long)arg1;
- (long long)Intensity;
- (void)setIntensity:(long long)arg1;
- (id)Curve;
- (void)setCurve:(id)arg1;
- (void).cxx_destruct;
@end
