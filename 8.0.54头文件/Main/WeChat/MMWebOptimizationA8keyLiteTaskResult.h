@interface MMWebOptimizationA8keyLiteTaskResult : MMObject
{
    unsigned int _costTime; // +0x8
    NSArray * _arrDomainControlData; // +0x10
    NSArray * _arrUrlResult; // +0x18
    NSArray * _arrPrefetchDomainInfo; // +0x20
}
- (id)arrDomainControlData;
- (void)setArrDomainControlData:(id)arg1;
- (id)arrUrlResult;
- (void)setArrUrlResult:(id)arg1;
- (id)arrPrefetchDomainInfo;
- (void)setArrPrefetchDomainInfo:(id)arg1;
- (unsigned int)costTime;
- (void)setCostTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

