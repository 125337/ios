@interface MMLiteAppAuthInfo : MMObject <WCTTableCoding, NSCopying>
{
    NSString * host; // +0x8
    NSString * param; // +0x10
    NSString * paramMap; // +0x18
    long long updateTime; // +0x20
    NSString * headerMap; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)host;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_host;
+ (const void *)param;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_param;
+ (const void *)paramMap;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_paramMap;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)headerMap;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_headerMap;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)createItem:(id)arg1 param:(id)arg2 paramDic:(id)arg3 headerDic:(id)arg4;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getParamDic;
- (id)getHeaderDic;
- (id)host;
- (void)setHost:(id)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (id)paramMap;
- (void)setParamMap:(id)arg1;
- (long long)updateTime;
- (void)setUpdateTime:(long long)arg1;
- (id)headerMap;
- (void)setHeaderMap:(id)arg1;
- (void).cxx_destruct;
@end
