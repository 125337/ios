@interface MMLiteAppDownloadItem : NSObject
{
    BOOL _isUseCronetDownload; // +0x8
    BOOL _isDownloadMediaResource; // +0x9
    unsigned int _resourceVersion; // +0xc
    NSString * _appId; // +0x10
    NSString * _baseId; // +0x18
    NSString * _pId; // +0x20
    NSString * _filePath; // +0x28
    NSString * _signatureKey; // +0x30
    NSString * _type; // +0x38
    NSString * _resourceName; // +0x40
    MMLiteAppOpenParam * _openParam; // +0x48
    ResourceMeta * _resMeta; // +0x50
    unsigned long long _startTime; // +0x58
    unsigned long long _retryCount; // +0x60
    unsigned long long _from; // +0x68
    unsigned long long _checkTime; // +0x70
    unsigned long long _downloadTime; // +0x78
    MMLiteAppEncryptMetaData * _encryptMetaData; // +0x80
    long long _checkUpdateFrom; // +0x88
    unsigned long long _pkgCompressAlgorithm; // +0x90
    NSMutableArray * _fallbackMetaDataList; // +0x98
}
- (id)init;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)baseId;
- (void)setBaseId:(id)arg1;
- (id)pId;
- (void)setPId:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)signatureKey;
- (void)setSignatureKey:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)resourceName;
- (void)setResourceName:(id)arg1;
- (unsigned int)resourceVersion;
- (void)setResourceVersion:(unsigned int)arg1;
- (id)openParam;
- (void)setOpenParam:(id)arg1;
- (id)resMeta;
- (void)setResMeta:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;
- (unsigned long long)from;
- (void)setFrom:(unsigned long long)arg1;
- (unsigned long long)checkTime;
- (void)setCheckTime:(unsigned long long)arg1;
- (unsigned long long)downloadTime;
- (void)setDownloadTime:(unsigned long long)arg1;
- (BOOL)isUseCronetDownload;
- (void)setIsUseCronetDownload:(BOOL)arg1;
- (id)encryptMetaData;
- (void)setEncryptMetaData:(id)arg1;
- (long long)checkUpdateFrom;
- (void)setCheckUpdateFrom:(long long)arg1;
- (BOOL)isDownloadMediaResource;
- (void)setIsDownloadMediaResource:(BOOL)arg1;
- (unsigned long long)pkgCompressAlgorithm;
- (void)setPkgCompressAlgorithm:(unsigned long long)arg1;
- (id)fallbackMetaDataList;
- (void)setFallbackMetaDataList:(id)arg1;
- (void).cxx_destruct;
@end
