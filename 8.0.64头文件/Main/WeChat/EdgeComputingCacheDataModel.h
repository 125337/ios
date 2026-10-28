@interface EdgeComputingCacheDataModel : MMObject <PBCoding, NSCopying, WCTTableCoding>
{
    NSString * _configID; // +0x8
    unsigned long long _reportTimeEC; // +0x10
    NSString * _data; // +0x18
}
+ (void)PBArrayAdd_configID;
+ (void)PBArrayAdd_reportTimeEC;
+ (void)PBArrayAdd_data;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)configID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_configID;
+ (const void *)reportTimeEC;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_reportTimeEC;
+ (const void *)data;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_data;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toString;
- (id)configID;
- (void)setConfigID:(id)arg1;
- (unsigned long long)reportTimeEC;
- (void)setReportTimeEC:(unsigned long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
