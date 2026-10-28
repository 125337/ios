@interface WCGestureReportInfo : MMObject
{
    unsigned int _distance; // +0x8
    NSString * _snsId; // +0x10
    NSString * _targetGesturePoints; // +0x18
    NSString * _sourceGesturePoints; // +0x20
    unsigned long long _result; // +0x28
    NSString * _aid; // +0x30
    NSString * _uxInfo; // +0x38
}
+ (id)arrayToString:(id)arg1 samplingInterval:(long long)arg2;
+ (unsigned int)distanceToInt:(double)arg1;
- (id)init;
- (id)toReportString;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (id)targetGesturePoints;
- (void)setTargetGesturePoints:(id)arg1;
- (id)sourceGesturePoints;
- (void)setSourceGesturePoints:(id)arg1;
- (unsigned int)distance;
- (void)setDistance:(unsigned int)arg1;
- (unsigned long long)result;
- (void)setResult:(unsigned long long)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (void).cxx_destruct;
@end
