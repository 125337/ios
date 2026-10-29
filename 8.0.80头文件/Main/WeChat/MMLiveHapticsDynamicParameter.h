@interface MMLiveHapticsDynamicParameter : NSObject
{
    unsigned long long _parameterType; // +0x8
    double _effectiveTimeOffset; // +0x10
    double _value; // +0x18
}
+ (id)intensityDynamicParameter;
+ (id)sharpnessDynamicParameter;
+ (id)attackTimeDynamicParameter;
+ (id)decayTimeDynamicParameter;
+ (id)releaseTimeDynamicParameter;
- (id)initWithParameterType:(unsigned long long)arg1;
- (id)coreHapticsDynamicParameter;
- (unsigned long long)parameterType;
- (void)setParameterType:(unsigned long long)arg1;
- (double)effectiveTimeOffset;
- (void)setEffectiveTimeOffset:(double)arg1;
- (double)value;
- (void)setValue:(double)arg1;
@end
