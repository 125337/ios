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
    unsigned long long resourceStoreType; // +0x80
    unsigned long long diffEncryptAlgo; // +0x88
    unsigned long long diffEncryptFileSize; // +0x90
    NSString * diffEncryptMd5; // +0x98
    NSString * diffEncryptUrl; // +0xa0
    NSData * diffEncryptKey; // +0xa8
    NSData * diffEncryptIv; // +0xb0
    NSData * diffEncryptTag; // +0xb8
    NSData * diffEncryptAad; // +0xc0
    unsigned long long encryptAlgo; // +0xc8
    unsigned long long encryptFileSize; // +0xd0
    NSString * encryptMd5; // +0xd8
    NSString * encryptUrl; // +0xe0
    NSData * encryptKey; // +0xe8
    NSData * encryptIv; // +0xf0
    NSData * encryptTag; // +0xf8
    NSData * encryptAad; // +0x100
    NSArray * _extInfo; // +0x108
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
+ (const void *)resourceStoreType;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_resourceStoreType;
+ (const void *)diffEncryptAlgo;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_diffEncryptAlgo;
+ (const void *)diffEncryptFileSize;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_diffEncryptFileSize;
+ (const void *)diffEncryptMd5;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_diffEncryptMd5;
+ (const void *)diffEncryptUrl;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_diffEncryptUrl;
+ (const void *)diffEncryptKey;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_diffEncryptKey;
+ (const void *)diffEncryptIv;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_diffEncryptIv;
+ (const void *)diffEncryptTag;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_diffEncryptTag;
+ (const void *)diffEncryptAad;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_diffEncryptAad;
+ (const void *)encryptAlgo;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_encryptAlgo;
+ (const void *)encryptFileSize;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_encryptFileSize;
+ (const void *)encryptMd5;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_encryptMd5;
+ (const void *)encryptUrl;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_encryptUrl;
+ (const void *)encryptKey;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_encryptKey;
+ (const void *)encryptIv;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_encryptIv;
+ (const void *)encryptTag;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_encryptTag;
+ (const void *)encryptAad;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_encryptAad;
+ (void)__wcdb_table_constraint_32:(void *)arg1;
+ (void)__wcdb_table_constraint_33:(void *)arg1;
+ (void)__wcdb_table_constraint_34:(void *)arg1;
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
- (unsigned long long)resourceStoreType;
- (void)setResourceStoreType:(unsigned long long)arg1;
- (unsigned long long)diffEncryptAlgo;
- (void)setDiffEncryptAlgo:(unsigned long long)arg1;
- (unsigned long long)diffEncryptFileSize;
- (void)setDiffEncryptFileSize:(unsigned long long)arg1;
- (id)diffEncryptMd5;
- (void)setDiffEncryptMd5:(id)arg1;
- (id)diffEncryptUrl;
- (void)setDiffEncryptUrl:(id)arg1;
- (id)diffEncryptKey;
- (void)setDiffEncryptKey:(id)arg1;
- (id)diffEncryptIv;
- (void)setDiffEncryptIv:(id)arg1;
- (id)diffEncryptTag;
- (void)setDiffEncryptTag:(id)arg1;
- (id)diffEncryptAad;
- (void)setDiffEncryptAad:(id)arg1;
- (unsigned long long)encryptAlgo;
- (void)setEncryptAlgo:(unsigned long long)arg1;
- (unsigned long long)encryptFileSize;
- (void)setEncryptFileSize:(unsigned long long)arg1;
- (id)encryptMd5;
- (void)setEncryptMd5:(id)arg1;
- (id)encryptUrl;
- (void)setEncryptUrl:(id)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)encryptIv;
- (void)setEncryptIv:(id)arg1;
- (id)encryptTag;
- (void)setEncryptTag:(id)arg1;
- (id)encryptAad;
- (void)setEncryptAad:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
