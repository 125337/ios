@interface CgiReportItemMiddleData : MMObject <PBCoding>
{
    unsigned int _count; // +0x8
    NSString * _key; // +0x10
    unsigned long long _lastReportTimeMs; // +0x18
}
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_lastReportTimeMs;
+ (void)PBArrayAdd_count;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)key;
- (void)setKey:(id)arg1;
- (unsigned long long)lastReportTimeMs;
- (void)setLastReportTimeMs:(unsigned long long)arg1;
- (unsigned int)count;
- (void)setCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
