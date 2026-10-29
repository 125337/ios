@interface MMMetricsImageInfo : NSObject
{
    NSString * _uuid; // +0x8
    unsigned long long _address; // +0x10
    unsigned long long _size; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)uuid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_uuid;
+ (const void *)address;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_address;
+ (const void *)size;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_size;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)generateStackReportItems:(id)arg1;
- (id)generateStackReportItem;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (unsigned long long)address;
- (void)setAddress:(unsigned long long)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

