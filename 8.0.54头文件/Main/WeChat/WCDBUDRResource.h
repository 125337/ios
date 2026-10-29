@interface WCDBUDRResource : NSObject
{
    unsigned int _version; // +0x8
    unsigned int _category; // +0xc
    unsigned int _type; // +0x10
    NSString * _key; // +0x18
    NSString * _projectId; // +0x20
    NSString * _name; // +0x28
    NSString * _url; // +0x30
    NSString * _md5; // +0x38
    unsigned long long _size; // +0x40
    NSString * _path; // +0x48
    NSString * _postPath; // +0x50
    unsigned long long _createTime; // +0x58
    unsigned long long _updateTime; // +0x60
    unsigned long long _extId; // +0x68
    NSString * _signatureKey; // +0x70
    NSString * _fileKey; // +0x78
    unsigned long long _expireTime; // +0x80
    NSData * _extInfo; // +0x88
    NSString * _specifiedExtInfo; // +0x90
    NSString * _virtualPath; // +0x98
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)key;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_key;
+ (const void *)projectId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_projectId;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_name;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_version;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_url;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_md5;
+ (const void *)size;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_size;
+ (const void *)path;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_path;
+ (const void *)postPath;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_postPath;
+ (const void *)category;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_category;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_type;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)extId;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_extId;
+ (const void *)signatureKey;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_signatureKey;
+ (const void *)fileKey;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_fileKey;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_extInfo;
+ (const void *)specifiedExtInfo;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_specifiedExtInfo;
+ (const void *)virtualPath;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_virtualPath;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
- (id)description;
- (id)key;
- (void)setKey:(id)arg1;
- (id)projectId;
- (void)setProjectId:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)postPath;
- (void)setPostPath:(id)arg1;
- (unsigned int)category;
- (void)setCategory:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (unsigned long long)updateTime;
- (void)setUpdateTime:(unsigned long long)arg1;
- (unsigned long long)extId;
- (void)setExtId:(unsigned long long)arg1;
- (id)signatureKey;
- (void)setSignatureKey:(id)arg1;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (unsigned long long)expireTime;
- (void)setExpireTime:(unsigned long long)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)specifiedExtInfo;
- (void)setSpecifiedExtInfo:(id)arg1;
- (id)virtualPath;
- (void)setVirtualPath:(id)arg1;
- (void).cxx_destruct;
@end

