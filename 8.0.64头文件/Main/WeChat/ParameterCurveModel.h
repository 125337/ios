@interface ParameterCurveModel : NSObject
{
    double _Time; // +0x8
    NSString * _ParameterID; // +0x10
    NSArray * _ParameterCurveControlPoints; // +0x18
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (double)Time;
- (void)setTime:(double)arg1;
- (id)ParameterID;
- (void)setParameterID:(id)arg1;
- (id)ParameterCurveControlPoints;
- (void)setParameterCurveControlPoints:(id)arg1;
- (void).cxx_destruct;
@end
