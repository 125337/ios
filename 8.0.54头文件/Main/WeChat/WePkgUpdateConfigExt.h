@interface WePkgUpdateConfigExt : MMObject <PBCoding, WCTColumnCoding>
{
    BOOL _isReadyForOperation; // +0x8
    BOOL _isClearAllPkgExceptCurrentEnabledVersion; // +0x9
    BOOL _bigPackageDownloadSuccess; // +0xa
    BOOL _isPatchDownloadSuccess; // +0xb
    unsigned int _lastUnusedSeconds; // +0xc
    unsigned int _checkIntervalSeconds; // +0x10
    unsigned int _pkgSizeInBytes; // +0x14
    unsigned int _bigPackagedownloadNetworkType; // +0x18
    unsigned int _atomicSingleFileTotalCount; // +0x1c
    unsigned int _checkUpdateSuccessTime; // +0x20
    unsigned int _controlCommand; // +0x24
    unsigned int _patchDownloadNetworkType; // +0x28
    unsigned int _patchSizeInBytes; // +0x2c
    NSString * _currentEnabledVersion; // +0x30
    NSString * _currentPkgMd5; // +0x38
    NSString * _downloadUrl; // +0x40
    NSString * _checkResponseMd5; // +0x48
    NSMutableArray * _atomicSingleFileListNeedDownload; // +0x50
    NSMutableArray * _atomicSingleFileListDownloadSuccessed; // +0x58
    NSString * _charSet; // +0x60
    NSMutableDictionary * _file2DownloadFailCount; // +0x68
    NSString * _patchMd5; // +0x70
    NSString * _patchDownloadUrl; // +0x78
}
+ (void)PBArrayAdd_currentEnabledVersion;
+ (void)PBArrayAdd_currentPkgMd5;
+ (void)PBArrayAdd_lastUnusedSeconds;
+ (void)PBArrayAdd_checkIntervalSeconds;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_pkgSizeInBytes;
+ (void)PBArrayAdd_isReadyForOperation;
+ (void)PBArrayAdd_isClearAllPkgExceptCurrentEnabledVersion;
+ (void)PBArrayAdd_checkResponseMd5;
+ (void)PBArrayAdd_bigPackagedownloadNetworkType;
+ (void)PBArrayAdd_atomicSingleFileTotalCount;
+ (void)PBArrayAdd_atomicSingleFileListNeedDownload;
+ (void)PBArrayAdd_atomicSingleFileListDownloadSuccessed;
+ (void)PBArrayAdd_charSet;
+ (void)PBArrayAdd_file2DownloadFailCount;
+ (void)PBArrayAdd_checkUpdateSuccessTime;
+ (void)PBArrayAdd_bigPackageDownloadSuccess;
+ (void)PBArrayAdd_controlCommand;
+ (void)PBArrayAdd_patchDownloadUrl;
+ (void)PBArrayAdd_patchMd5;
+ (void)PBArrayAdd_patchDownloadNetworkType;
+ (void)PBArrayAdd_patchSizeInBytes;
+ (void)PBArrayAdd_isPatchDownloadSuccess;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)currentEnabledVersion;
- (void)setCurrentEnabledVersion:(id)arg1;
- (id)currentPkgMd5;
- (void)setCurrentPkgMd5:(id)arg1;
- (unsigned int)lastUnusedSeconds;
- (void)setLastUnusedSeconds:(unsigned int)arg1;
- (unsigned int)checkIntervalSeconds;
- (void)setCheckIntervalSeconds:(unsigned int)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (unsigned int)pkgSizeInBytes;
- (void)setPkgSizeInBytes:(unsigned int)arg1;
- (BOOL)isReadyForOperation;
- (void)setIsReadyForOperation:(BOOL)arg1;
- (BOOL)isClearAllPkgExceptCurrentEnabledVersion;
- (void)setIsClearAllPkgExceptCurrentEnabledVersion:(BOOL)arg1;
- (id)checkResponseMd5;
- (void)setCheckResponseMd5:(id)arg1;
- (unsigned int)bigPackagedownloadNetworkType;
- (void)setBigPackagedownloadNetworkType:(unsigned int)arg1;
- (unsigned int)atomicSingleFileTotalCount;
- (void)setAtomicSingleFileTotalCount:(unsigned int)arg1;
- (id)atomicSingleFileListNeedDownload;
- (void)setAtomicSingleFileListNeedDownload:(id)arg1;
- (id)atomicSingleFileListDownloadSuccessed;
- (void)setAtomicSingleFileListDownloadSuccessed:(id)arg1;
- (id)charSet;
- (void)setCharSet:(id)arg1;
- (id)file2DownloadFailCount;
- (void)setFile2DownloadFailCount:(id)arg1;
- (unsigned int)checkUpdateSuccessTime;
- (void)setCheckUpdateSuccessTime:(unsigned int)arg1;
- (BOOL)bigPackageDownloadSuccess;
- (void)setBigPackageDownloadSuccess:(BOOL)arg1;
- (unsigned int)controlCommand;
- (void)setControlCommand:(unsigned int)arg1;
- (BOOL)isPatchDownloadSuccess;
- (void)setIsPatchDownloadSuccess:(BOOL)arg1;
- (id)patchMd5;
- (void)setPatchMd5:(id)arg1;
- (id)patchDownloadUrl;
- (void)setPatchDownloadUrl:(id)arg1;
- (unsigned int)patchDownloadNetworkType;
- (void)setPatchDownloadNetworkType:(unsigned int)arg1;
- (unsigned int)patchSizeInBytes;
- (void)setPatchSizeInBytes:(unsigned int)arg1;
- (void).cxx_destruct;
@end

