@interface WePkgRegularConfigExt : MMObject <PBCoding, WCTColumnCoding>
{
    unsigned int _lastUnusedSeconds; // +0x8
    unsigned int _checkIntervalSeconds; // +0xc
    unsigned int _lastUsedTimestamp; // +0x10
    unsigned int _downloadNetworkType; // +0x14
    unsigned int _pkgSizeInBytes; // +0x18
    unsigned int _checkUpdateSuccessTime; // +0x1c
    NSString * _currentEnabledVersion; // +0x20
    NSString * _currentPkgMd5; // +0x28
    NSString * _checkResponseMd5; // +0x30
    NSString * _downloadUrl; // +0x38
    NSString * _charSet; // +0x40
    NSMutableArray * _atomicSingleFileList; // +0x48
    NSMutableArray * _nonAtomicSingleFileList; // +0x50
}
+ (void)PBArrayAdd_currentEnabledVersion;
+ (void)PBArrayAdd_currentPkgMd5;
+ (void)PBArrayAdd_lastUnusedSeconds;
+ (void)PBArrayAdd_checkIntervalSeconds;
+ (void)PBArrayAdd_lastUsedTimestamp;
+ (void)PBArrayAdd_checkResponseMd5;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_downloadNetworkType;
+ (void)PBArrayAdd_pkgSizeInBytes;
+ (void)PBArrayAdd_charSet;
+ (void)PBArrayAdd_atomicSingleFileList;
+ (void)PBArrayAdd_nonAtomicSingleFileList;
+ (void)PBArrayAdd_checkUpdateSuccessTime;
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
- (unsigned int)lastUsedTimestamp;
- (void)setLastUsedTimestamp:(unsigned int)arg1;
- (id)checkResponseMd5;
- (void)setCheckResponseMd5:(id)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (unsigned int)downloadNetworkType;
- (void)setDownloadNetworkType:(unsigned int)arg1;
- (unsigned int)pkgSizeInBytes;
- (void)setPkgSizeInBytes:(unsigned int)arg1;
- (id)charSet;
- (void)setCharSet:(id)arg1;
- (id)atomicSingleFileList;
- (void)setAtomicSingleFileList:(id)arg1;
- (id)nonAtomicSingleFileList;
- (void)setNonAtomicSingleFileList:(id)arg1;
- (unsigned int)checkUpdateSuccessTime;
- (void)setCheckUpdateSuccessTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
