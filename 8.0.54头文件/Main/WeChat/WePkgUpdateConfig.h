@interface WePkgUpdateConfig : MMObject
{
    BOOL _bClearAllPkgExceptCurrentEnabledVersion; // +0x8
    BOOL _bIsReadyForOperation; // +0x9
    BOOL _bBigPackageDownloadSuccess; // +0xa
    BOOL _isPatchDownloadSuccess; // +0xb
    unsigned int _uiPkgType; // +0xc
    unsigned int _uiLastUnusedSeconds; // +0x10
    unsigned int _uiCheckIntervalSeconds; // +0x14
    unsigned int _uiCheckUpdateSuccessTime; // +0x18
    unsigned int _controlCommand; // +0x1c
    unsigned int _uiBigPackageDownloadNetworkType; // +0x20
    unsigned int _uiBigPackageSizeInBytes; // +0x24
    unsigned int _patchDownloadNetworkType; // +0x28
    unsigned int _patchSizeInBytes; // +0x2c
    unsigned int _uiAtomicSingleFileTotalCount; // +0x30
    NSString * _nsPkgId; // +0x38
    NSString * _nsAppId; // +0x40
    NSString * _nsEnteranceDomain; // +0x48
    NSString * _nsCurrentEnabledVersion; // +0x50
    NSString * _nsCheckResonseMd5; // +0x58
    NSString * _nsCharSet; // +0x60
    NSString * _nsBigPackageMd5; // +0x68
    NSString * _nsBigPackageDownloadUrl; // +0x70
    NSString * _patchMd5; // +0x78
    NSString * _patchDownloadUrl; // +0x80
    NSMutableArray * _atomicSingleFileListNeedDownload; // +0x88
    NSMutableArray * _atomicSingleFileListDownloadSuccessed; // +0x90
    NSMutableDictionary * _file2DownloadFailCount; // +0x98
}
+ (id)updateConfigFromTableItem:(id)arg1;
- (id)generateTableItem;
- (BOOL)shouldReadyForUpdate;
- (id)debugDescription;
- (id)nsPkgId;
- (void)setNsPkgId:(id)arg1;
- (id)nsAppId;
- (void)setNsAppId:(id)arg1;
- (unsigned int)uiPkgType;
- (void)setUiPkgType:(unsigned int)arg1;
- (id)nsEnteranceDomain;
- (void)setNsEnteranceDomain:(id)arg1;
- (id)nsCurrentEnabledVersion;
- (void)setNsCurrentEnabledVersion:(id)arg1;
- (unsigned int)uiLastUnusedSeconds;
- (void)setUiLastUnusedSeconds:(unsigned int)arg1;
- (unsigned int)uiCheckIntervalSeconds;
- (void)setUiCheckIntervalSeconds:(unsigned int)arg1;
- (BOOL)bClearAllPkgExceptCurrentEnabledVersion;
- (void)setBClearAllPkgExceptCurrentEnabledVersion:(BOOL)arg1;
- (BOOL)bIsReadyForOperation;
- (void)setBIsReadyForOperation:(BOOL)arg1;
- (id)nsCheckResonseMd5;
- (void)setNsCheckResonseMd5:(id)arg1;
- (id)nsCharSet;
- (void)setNsCharSet:(id)arg1;
- (unsigned int)uiCheckUpdateSuccessTime;
- (void)setUiCheckUpdateSuccessTime:(unsigned int)arg1;
- (unsigned int)controlCommand;
- (void)setControlCommand:(unsigned int)arg1;
- (id)nsBigPackageMd5;
- (void)setNsBigPackageMd5:(id)arg1;
- (id)nsBigPackageDownloadUrl;
- (void)setNsBigPackageDownloadUrl:(id)arg1;
- (unsigned int)uiBigPackageDownloadNetworkType;
- (void)setUiBigPackageDownloadNetworkType:(unsigned int)arg1;
- (unsigned int)uiBigPackageSizeInBytes;
- (void)setUiBigPackageSizeInBytes:(unsigned int)arg1;
- (BOOL)bBigPackageDownloadSuccess;
- (void)setBBigPackageDownloadSuccess:(BOOL)arg1;
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
- (unsigned int)uiAtomicSingleFileTotalCount;
- (void)setUiAtomicSingleFileTotalCount:(unsigned int)arg1;
- (id)atomicSingleFileListNeedDownload;
- (void)setAtomicSingleFileListNeedDownload:(id)arg1;
- (id)atomicSingleFileListDownloadSuccessed;
- (void)setAtomicSingleFileListDownloadSuccessed:(id)arg1;
- (id)file2DownloadFailCount;
- (void)setFile2DownloadFailCount:(id)arg1;
- (void).cxx_destruct;
@end

