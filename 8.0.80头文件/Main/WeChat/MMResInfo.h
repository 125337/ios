@interface MMResInfo : MMObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    BOOL _isEncrypt; // +0x9
    BOOL _isCompress; // +0xa
    BOOL _isTemp; // +0xb
    unsigned int _resInfoId; // +0xc
    unsigned int _resType; // +0x10
    unsigned int _accessTime; // +0x14
    unsigned int _resSubType; // +0x18
    unsigned int _eid; // +0x1c
    unsigned int _fileId; // +0x20
    unsigned int _createTime; // +0x24
    unsigned int _expireTime; // +0x28
    unsigned int _crc32; // +0x2c
    unsigned int _supportVersion; // +0x30
    unsigned int _reportId; // +0x34
    unsigned int _clientVersion; // +0x38
    unsigned int _consumeTime; // +0x3c
    long long lastInsertedRowID; // +0x40
    NSString * _resUrlMd5; // +0x48
    NSString * _appId; // +0x50
    NSString * _version; // +0x58
    NSString * _domain; // +0x60
    NSString * _resMd5; // +0x68
    NSString * _resOriginalMd5; // +0x70
    NSString * _resOriginalSha1; // +0x78
    unsigned long long _size; // +0x80
    long long _offset; // +0x88
    long long _chunkLength; // +0x90
    NSString * _sampleId; // +0x98
    NSData * _signatureData; // +0xa0
    MMResSignatureDataInfos * _arrSignatureDataInfo; // +0xa8
    unsigned long long _cacheStatus; // +0xb0
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)resInfoId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_resInfoId;
+ (const void *)resUrlMd5;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_resUrlMd5;
+ (const void *)resMd5;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_resMd5;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_appId;
+ (const void *)domain;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_domain;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_version;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)accessTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_accessTime;
+ (const void *)size;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_size;
+ (const void *)offset;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_offset;
+ (const void *)crc32;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_crc32;
+ (const void *)resType;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_resType;
+ (const void *)chunkLength;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_chunkLength;
+ (const void *)isEncrypt;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_isEncrypt;
+ (const void *)isCompress;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_isCompress;
+ (const void *)resSubType;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_resSubType;
+ (const void *)fileId;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_fileId;
+ (const void *)supportVersion;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_supportVersion;
+ (const void *)isTemp;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_isTemp;
+ (const void *)eid;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_eid;
+ (const void *)sampleId;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_sampleId;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_reportId;
+ (const void *)signatureData;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_signatureData;
+ (const void *)resOriginalMd5;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_resOriginalMd5;
+ (const void *)clientVersion;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_clientVersion;
+ (const void *)resOriginalSha1;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_resOriginalSha1;
+ (const void *)cacheStatus;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_cacheStatus;
+ (const void *)consumeTime;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_consumeTime;
+ (const void *)arrSignatureDataInfo;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_arrSignatureDataInfo;
+ (void)__wcdb_column_constraint_30:(void *)arg1;
- (id)init;
- (id)initWithDownloadInfo:(id)arg1 dataSize:(long long)arg2;
- (long long)compareAccessTimeByResInfo:(id)arg1;
- (BOOL)insertDB;
- (void)deleteSelf;
- (id)localSubPath;
- (id)description;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)resInfoId;
- (void)setResInfoId:(unsigned int)arg1;
- (id)resUrlMd5;
- (void)setResUrlMd5:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)resType;
- (void)setResType:(unsigned int)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (unsigned int)accessTime;
- (void)setAccessTime:(unsigned int)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (unsigned int)resSubType;
- (void)setResSubType:(unsigned int)arg1;
- (unsigned int)eid;
- (void)setEid:(unsigned int)arg1;
- (unsigned int)fileId;
- (void)setFileId:(unsigned int)arg1;
- (id)resMd5;
- (void)setResMd5:(id)arg1;
- (id)resOriginalMd5;
- (void)setResOriginalMd5:(id)arg1;
- (id)resOriginalSha1;
- (void)setResOriginalSha1:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (long long)offset;
- (void)setOffset:(long long)arg1;
- (unsigned int)crc32;
- (void)setCrc32:(unsigned int)arg1;
- (long long)chunkLength;
- (void)setChunkLength:(long long)arg1;
- (BOOL)isEncrypt;
- (void)setIsEncrypt:(BOOL)arg1;
- (BOOL)isCompress;
- (void)setIsCompress:(BOOL)arg1;
- (unsigned int)supportVersion;
- (void)setSupportVersion:(unsigned int)arg1;
- (BOOL)isTemp;
- (void)setIsTemp:(BOOL)arg1;
- (id)sampleId;
- (void)setSampleId:(id)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (id)signatureData;
- (void)setSignatureData:(id)arg1;
- (id)arrSignatureDataInfo;
- (void)setArrSignatureDataInfo:(id)arg1;
- (unsigned int)clientVersion;
- (void)setClientVersion:(unsigned int)arg1;
- (unsigned long long)cacheStatus;
- (void)setCacheStatus:(unsigned long long)arg1;
- (unsigned int)consumeTime;
- (void)setConsumeTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
