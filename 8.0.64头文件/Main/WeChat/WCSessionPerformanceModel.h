@interface WCSessionPerformanceModel : MMObject <NSCopying>
{
    NSString * _pageName; // +0x8
    unsigned long long _caseId; // +0x10
    unsigned long long _costTime; // +0x18
    unsigned long long _totalCostTime; // +0x20
    unsigned long long _timestampMs; // +0x28
}
- (id)getAttrDictionary;
- (id)toString;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (unsigned long long)caseId;
- (void)setCaseId:(unsigned long long)arg1;
- (unsigned long long)costTime;
- (void)setCostTime:(unsigned long long)arg1;
- (unsigned long long)totalCostTime;
- (void)setTotalCostTime:(unsigned long long)arg1;
- (unsigned long long)timestampMs;
- (void)setTimestampMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
