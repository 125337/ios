@interface FindFriendRedDotReportInfo : MMObject <NSCopying>
{
    NSString * _uuid; // +0x8
    NSDictionary * _params; // +0x10
    unsigned long long _exposeTimeMs; // +0x18
    unsigned long long _unexposeTimeMs; // +0x20
}
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (unsigned long long)exposeTimeMs;
- (void)setExposeTimeMs:(unsigned long long)arg1;
- (unsigned long long)unexposeTimeMs;
- (void)setUnexposeTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

