@interface WCGestureReportInfo : MMObject
{
    NSString * _snsId; // +0x8
    NSString * _targetGesturePoints; // +0x10
    NSString * _sourceGesturePoints; // +0x18
    unsigned long long _radius; // +0x20
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
- (unsigned long long)radius;
- (void)setRadius:(unsigned long long)arg1;
- (unsigned long long)result;
- (void)setResult:(unsigned long long)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (void).cxx_destruct;
@end
