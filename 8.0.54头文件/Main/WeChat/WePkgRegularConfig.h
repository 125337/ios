@interface WePkgRegularConfig : MMObject
{
    unsigned int _uiPkgType; // +0x8
    unsigned int _uiLastUnusedSeconds; // +0xc
    unsigned int _uiCheckIntervalSeconds; // +0x10
    unsigned int _uiLastUsedTimestamp; // +0x14
    unsigned int _uiCheckUpdateSuccessTime; // +0x18
    unsigned int _uiBigPackageDownloadNetworkType; // +0x1c
    unsigned int _uiBigPackageSizeInBytes; // +0x20
    NSString * _nsPkgId; // +0x28
    NSString * _nsAppId; // +0x30
    NSString * _nsEnteranceDomain; // +0x38
    NSString * _nsCurrentEnabledVersion; // +0x40
    NSString * _nsCheckResponseMd5; // +0x48
    NSString * _nsCharSet; // +0x50
    NSString * _nsBigPackageMd5; // +0x58
    NSString * _nsBigPackageDownloadUrl; // +0x60
    NSMutableArray * _atomicSingleFileList; // +0x68
    NSMutableArray * _nonAtomicSingleFileList; // +0x70
}
+ (id)regularConfigFromTableItem:(id)arg1;
- (id)generateTableItem;
- (BOOL)hasBigPackage;
- (BOOL)hasValidContent;
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
- (unsigned int)uiLastUsedTimestamp;
- (void)setUiLastUsedTimestamp:(unsigned int)arg1;
- (id)nsCheckResponseMd5;
- (void)setNsCheckResponseMd5:(id)arg1;
- (id)nsCharSet;
- (void)setNsCharSet:(id)arg1;
- (unsigned int)uiCheckUpdateSuccessTime;
- (void)setUiCheckUpdateSuccessTime:(unsigned int)arg1;
- (id)nsBigPackageMd5;
- (void)setNsBigPackageMd5:(id)arg1;
- (id)nsBigPackageDownloadUrl;
- (void)setNsBigPackageDownloadUrl:(id)arg1;
- (unsigned int)uiBigPackageDownloadNetworkType;
- (void)setUiBigPackageDownloadNetworkType:(unsigned int)arg1;
- (unsigned int)uiBigPackageSizeInBytes;
- (void)setUiBigPackageSizeInBytes:(unsigned int)arg1;
- (id)atomicSingleFileList;
- (void)setAtomicSingleFileList:(id)arg1;
- (id)nonAtomicSingleFileList;
- (void)setNonAtomicSingleFileList:(id)arg1;
- (void).cxx_destruct;
@end

