@interface WAReportWebViewPVItem : WAReportBaseItem
{
    unsigned int _publicLibVersion; // +0x8
    unsigned long long _costtime; // +0x10
    unsigned long long _staytime; // +0x18
    NSString * _referpagepath; // +0x20
    unsigned long long _targetAction; // +0x28
    NSString * _targetpagepath; // +0x30
    unsigned long long _clickTimestamp; // +0x38
    NSString * _referAction; // +0x40
    unsigned long long _staytimeFuncpageStart; // +0x48
}
- (id)reportString;
- (unsigned long long)costtime;
- (void)setCosttime:(unsigned long long)arg1;
- (unsigned long long)staytime;
- (void)setStaytime:(unsigned long long)arg1;
- (id)referpagepath;
- (void)setReferpagepath:(id)arg1;
- (unsigned long long)targetAction;
- (void)setTargetAction:(unsigned long long)arg1;
- (id)targetpagepath;
- (void)setTargetpagepath:(id)arg1;
- (unsigned long long)clickTimestamp;
- (void)setClickTimestamp:(unsigned long long)arg1;
- (unsigned int)publicLibVersion;
- (void)setPublicLibVersion:(unsigned int)arg1;
- (id)referAction;
- (void)setReferAction:(id)arg1;
- (unsigned long long)staytimeFuncpageStart;
- (void)setStaytimeFuncpageStart:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
