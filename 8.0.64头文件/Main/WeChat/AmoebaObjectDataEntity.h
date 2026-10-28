@interface AmoebaObjectDataEntity : NSObject
{
    NSMutableDictionary * _objectParams; // +0x8
    NSMutableDictionary * _objectEventParams; // +0x10
    NSMutableDictionary * _dynamicParamsBlocks; // +0x18
    NSMutableDictionary * _reportBreakerBlocks; // +0x20
    NSMutableDictionary * _reportPolicy; // +0x28
    NSMutableDictionary * _reportIntervals; // +0x30
    NSMutableDictionary * _lastReportTimes; // +0x38
}
- (id)init;
- (void)reset;
- (id)toString;
- (id)objectParams;
- (void)setObjectParams:(id)arg1;
- (id)objectEventParams;
- (void)setObjectEventParams:(id)arg1;
- (id)dynamicParamsBlocks;
- (void)setDynamicParamsBlocks:(id)arg1;
- (id)reportBreakerBlocks;
- (void)setReportBreakerBlocks:(id)arg1;
- (id)reportPolicy;
- (void)setReportPolicy:(id)arg1;
- (id)reportIntervals;
- (void)setReportIntervals:(id)arg1;
- (id)lastReportTimes;
- (void)setLastReportTimes:(id)arg1;
- (void).cxx_destruct;
@end
