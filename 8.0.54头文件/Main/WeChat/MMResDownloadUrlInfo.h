@interface MMResDownloadUrlInfo : MMObject <PBCoding, WCTColumnCoding>
{
    BOOL _isEncrypt; // +0x8
    BOOL _isCompress; // +0x9
    BOOL _isLoginUsrRelated; // +0xa
    BOOL _isPage; // +0xb
    BOOL _isDownloaded; // +0xc
    unsigned int _fileId; // +0x10
    unsigned int _supportVersion; // +0x14
    unsigned int _downloadPriority; // +0x18
    unsigned int _retryCnt; // +0x1c
    unsigned int _protocal; // +0x20
    NSString * _srcUrl; // +0x28
    NSString * _version; // +0x30
    NSString * _md5; // +0x38
    NSString * _originalMd5; // +0x40
    NSData * _signatureData; // +0x48
    MMResSignatureDataInfos * _arrSignatureDataInfo; // +0x50
    NSString * _originalSha1; // +0x58
}
+ (void)PBArrayAdd_srcUrl;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_isEncrypt;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_isCompress;
+ (void)PBArrayAdd_isLoginUsrRelated;
+ (void)PBArrayAdd_fileId;
+ (void)PBArrayAdd_supportVersion;
+ (void)PBArrayAdd_isDownloaded;
+ (void)PBArrayAdd_signatureData;
+ (void)PBArrayAdd_arrSignatureDataInfo;
+ (void)PBArrayAdd_originalMd5;
+ (void)PBArrayAdd_downloadPriority;
+ (void)PBArrayAdd_retryCnt;
+ (void)PBArrayAdd_originalSha1;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)arrSignatureDataInfo;
- (id)srcUrl;
- (void)setSrcUrl:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (BOOL)isEncrypt;
- (void)setIsEncrypt:(BOOL)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)originalMd5;
- (void)setOriginalMd5:(id)arg1;
- (BOOL)isCompress;
- (void)setIsCompress:(BOOL)arg1;
- (BOOL)isLoginUsrRelated;
- (void)setIsLoginUsrRelated:(BOOL)arg1;
- (unsigned int)fileId;
- (void)setFileId:(unsigned int)arg1;
- (unsigned int)supportVersion;
- (void)setSupportVersion:(unsigned int)arg1;
- (unsigned int)downloadPriority;
- (void)setDownloadPriority:(unsigned int)arg1;
- (unsigned int)retryCnt;
- (void)setRetryCnt:(unsigned int)arg1;
- (BOOL)isPage;
- (void)setIsPage:(BOOL)arg1;
- (BOOL)isDownloaded;
- (void)setIsDownloaded:(BOOL)arg1;
- (id)signatureData;
- (void)setSignatureData:(id)arg1;
- (void)setArrSignatureDataInfo:(id)arg1;
- (unsigned int)protocal;
- (id)originalSha1;
- (void)setOriginalSha1:(id)arg1;
- (void).cxx_destruct;
@end

