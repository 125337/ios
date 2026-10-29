@interface WCDBUDRResource : NSObject
{
    unsigned int _version; // +0x8
    unsigned int _category; // +0xc
    unsigned int _type; // +0x10
    unsigned int _storageType; // +0x14
    unsigned int _encryptAlgo; // +0x18
    unsigned int _encryptFileSize; // +0x1c
    NSString * _key; // +0x20
    NSString * _projectId; // +0x28
    NSString * _name; // +0x30
    NSString * _url; // +0x38
    NSString * _md5; // +0x40
    unsigned long long _size; // +0x48
    NSString * _path; // +0x50
    NSString * _postPath; // +0x58
    unsigned long long _createTime; // +0x60
    unsigned long long _updateTime; // +0x68
    unsigned long long _extId; // +0x70
    NSString * _signatureKey; // +0x78
    NSString * _fileKey; // +0x80
    unsigned long long _expireTime; // +0x88
    NSData * _extInfo; // +0x90
    NSString * _specifiedExtInfo; // +0x98
    NSString * _virtualPath; // +0xa0
    NSString * _uinMd5; // +0xa8
    NSString * _encryptMd5; // +0xb0
    NSData * _encryptIv; // +0xb8
    NSData * _encryptTag; // +0xc0
    NSData * _encryptAad; // +0xc8
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
+ (const void *)storageType;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_storageType;
+ (const void *)uinMd5;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_uinMd5;
+ (const void *)encryptAlgo;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_encryptAlgo;
+ (const void *)encryptFileSize;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_encryptFileSize;
+ (const void *)encryptMd5;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_encryptMd5;
+ (const void *)encryptIv;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_encryptIv;
+ (const void *)encryptTag;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_encryptTag;
+ (const void *)encryptAad;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_encryptAad;
+ (void)__wcdb_column_constraint_28:(void *)arg1;
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
- (unsigned int)storageType;
- (void)setStorageType:(unsigned int)arg1;
- (id)uinMd5;
- (void)setUinMd5:(id)arg1;
- (unsigned int)encryptAlgo;
- (void)setEncryptAlgo:(unsigned int)arg1;
- (unsigned int)encryptFileSize;
- (void)setEncryptFileSize:(unsigned int)arg1;
- (id)encryptMd5;
- (void)setEncryptMd5:(id)arg1;
- (id)encryptIv;
- (void)setEncryptIv:(id)arg1;
- (id)encryptTag;
- (void)setEncryptTag:(id)arg1;
- (id)encryptAad;
- (void)setEncryptAad:(id)arg1;
- (void).cxx_destruct;
@end
