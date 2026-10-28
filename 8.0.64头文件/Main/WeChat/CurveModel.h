@interface CurveModel : NSObject
{
    float _Intensity; // +0x8
    long long _Time; // +0x10
    long long _Frequency; // +0x18
}
- (long long)Time;
- (void)setTime:(long long)arg1;
- (float)Intensity;
- (void)setIntensity:(float)arg1;
- (long long)Frequency;
- (void)setFrequency:(long long)arg1;
@end
