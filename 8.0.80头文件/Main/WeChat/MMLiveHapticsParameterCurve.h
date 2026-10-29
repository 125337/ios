@interface MMLiveHapticsParameterCurve : NSObject
{
    unsigned long long _parameterType; // +0x8
    double _beginTimeOffset; // +0x10
    NSMutableArray * _controlPoints; // +0x18
}
+ (id)intensityParameterCurve;
+ (id)sharpnessParameterCurve;
+ (id)attackTimeParameterCurve;
+ (id)decayTimeParameterCurve;
+ (id)releaseTimeParameterCurve;
- (id)init;
- (id)initWithParameterType:(unsigned long long)arg1;
- (id)coreHapticsParameterCurve;
- (unsigned long long)parameterType;
- (void)setParameterType:(unsigned long long)arg1;
- (double)beginTimeOffset;
- (void)setBeginTimeOffset:(double)arg1;
- (id)controlPoints;
- (void)setControlPoints:(id)arg1;
- (void).cxx_destruct;
@end
