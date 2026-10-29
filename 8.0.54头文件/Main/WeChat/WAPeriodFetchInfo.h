@interface WAPeriodFetchInfo : MMObject <WCTTableCoding>
{
    unsigned int _lastFetchTime; // +0x8
    NSString * _userName; // +0x10
    NSString * _fetchData; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_userName;
+ (const void *)lastFetchTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_lastFetchTime;
+ (const void *)fetchData;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_fetchData;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)lastFetchTime;
- (void)setLastFetchTime:(unsigned int)arg1;
- (id)fetchData;
- (void)setFetchData:(id)arg1;
- (void).cxx_destruct;
@end

