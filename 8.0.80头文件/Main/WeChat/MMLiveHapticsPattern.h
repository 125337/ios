@interface MMLiveHapticsPattern : NSObject
{
    NSMutableArray * _events; // +0x8
    NSMutableArray * _dynamicParametersStorage; // +0x10
    NSMutableArray * _parameterCurvesStorage; // +0x18
}
- (id)init;
- (id)initWithEvents:(id)arg1;
- (id)dynamicParameters;
- (id)parameterCurves;
- (id)coreHapticsPattern;
- (id)events;
- (void)setEvents:(id)arg1;
- (id)dynamicParametersStorage;
- (void)setDynamicParametersStorage:(id)arg1;
- (id)parameterCurvesStorage;
- (void)setParameterCurvesStorage:(id)arg1;
- (void).cxx_destruct;
@end
