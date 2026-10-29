@interface MMIlinkCheckResourceInfo : MMObject <WCTTableCoding, NSCopying>
{
    NSString * projectId; // +0x8
    NSString * resourceName; // +0x10
    unsigned long long resourceVersion; // +0x18
    unsigned long long resourceSize; // +0x20
    NSString * md5; // +0x28
    NSString * url; // +0x30
    unsigned long long createTime; // +0x38
    unsigned long long baseVersion; // +0x40
    unsigned long long diffAlgo; // +0x48
    unsigned long long diffSize; // +0x50
    NSString * diffMd5; // +0x58
    NSString * diffUrl; // +0x60
    long long resourceRet; // +0x68
    unsigned long long resourceType; // +0x70
    unsigned long long resourceExpireTime; // +0x78
    NSArray * _extInfo; // +0x80
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)projectId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_projectId;
+ (const void *)resourceName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_resourceName;
+ (const void *)resourceVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_resourceVersion;
+ (const void *)resourceSize;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_resourceSize;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_md5;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_url;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)baseVersion;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_baseVersion;
+ (const void *)diffAlgo;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_diffAlgo;
+ (const void *)diffSize;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_diffSize;
+ (const void *)diffMd5;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_diffMd5;
+ (const void *)diffUrl;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_diffUrl;
+ (const void *)resourceRet;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_resourceRet;
+ (const void *)resourceType;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_resourceType;
+ (const void *)resourceExpireTime;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_resourceExpireTime;
+ (void)__wcdb_table_constraint_15:(void *)arg1;
+ (void)__wcdb_table_constraint_16:(void *)arg1;
+ (void)__wcdb_table_constraint_17:(void *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)projectId;
- (void)setProjectId:(id)arg1;
- (id)resourceName;
- (void)setResourceName:(id)arg1;
- (unsigned long long)resourceVersion;
- (void)setResourceVersion:(unsigned long long)arg1;
- (unsigned long long)resourceSize;
- (void)setResourceSize:(unsigned long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (unsigned long long)baseVersion;
- (void)setBaseVersion:(unsigned long long)arg1;
- (unsigned long long)diffAlgo;
- (void)setDiffAlgo:(unsigned long long)arg1;
- (unsigned long long)diffSize;
- (void)setDiffSize:(unsigned long long)arg1;
- (id)diffMd5;
- (void)setDiffMd5:(id)arg1;
- (id)diffUrl;
- (void)setDiffUrl:(id)arg1;
- (long long)resourceRet;
- (void)setResourceRet:(long long)arg1;
- (unsigned long long)resourceType;
- (void)setResourceType:(unsigned long long)arg1;
- (unsigned long long)resourceExpireTime;
- (void)setResourceExpireTime:(unsigned long long)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

