@interface WePkgFileDownloadInfo : NSObject
{
    BOOL _isBigPackage; // +0x8
    BOOL _isAtomicPart; // +0x9
    BOOL _isPatchFile; // +0xa
    unsigned int _fileSize; // +0xc
    NSString * _pkgId; // +0x10
    NSString * _version; // +0x18
    NSString * _md5; // +0x20
    NSString * _url; // +0x28
    unsigned long long _downloadDuration; // +0x30
}
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (BOOL)isBigPackage;
- (void)setIsBigPackage:(BOOL)arg1;
- (BOOL)isAtomicPart;
- (void)setIsAtomicPart:(BOOL)arg1;
- (BOOL)isPatchFile;
- (void)setIsPatchFile:(BOOL)arg1;
- (unsigned long long)downloadDuration;
- (void)setDownloadDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

