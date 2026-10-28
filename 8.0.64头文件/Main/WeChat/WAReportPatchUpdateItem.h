@interface WAReportPatchUpdateItem : WAReportBaseItem
{
    BOOL _canUsePatchUpdate; // +0x8
    BOOL _isUpdateComplete; // +0x9
    BOOL _isUpdateCompleteWithPatch; // +0xa
    unsigned int _fullPkgSize; // +0xc
    unsigned int _patchSize; // +0x10
    unsigned int _patchError; // +0x14
    unsigned int _gzipReadyTime; // +0x18
    unsigned int _zstdReadyTime; // +0x1c
    unsigned int _pkgType; // +0x20
    unsigned int _protocol; // +0x24
    unsigned int _downloadSize; // +0x28
    unsigned int _dnsType; // +0x2c
    unsigned int _requestSourceSyncType; // +0x30
    unsigned int _requestSourceIsPreHot; // +0x34
    unsigned int _requestSourceLaunchFlag; // +0x38
    unsigned int _downloadComponentType; // +0x3c
    long long _oldVersion; // +0x40
    long long _targetVersion; // +0x48
    long long _beginTime; // +0x50
    long long _endTime; // +0x58
    NSString * _moduleName; // +0x60
}
- (int)reportID;
- (id)reportString;
- (long long)oldVersion;
- (void)setOldVersion:(long long)arg1;
- (long long)targetVersion;
- (void)setTargetVersion:(long long)arg1;
- (long long)beginTime;
- (void)setBeginTime:(long long)arg1;
- (long long)endTime;
- (void)setEndTime:(long long)arg1;
- (BOOL)canUsePatchUpdate;
- (void)setCanUsePatchUpdate:(BOOL)arg1;
- (BOOL)isUpdateComplete;
- (void)setIsUpdateComplete:(BOOL)arg1;
- (BOOL)isUpdateCompleteWithPatch;
- (void)setIsUpdateCompleteWithPatch:(BOOL)arg1;
- (unsigned int)fullPkgSize;
- (void)setFullPkgSize:(unsigned int)arg1;
- (unsigned int)patchSize;
- (void)setPatchSize:(unsigned int)arg1;
- (unsigned int)patchError;
- (void)setPatchError:(unsigned int)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (unsigned int)gzipReadyTime;
- (void)setGzipReadyTime:(unsigned int)arg1;
- (unsigned int)zstdReadyTime;
- (void)setZstdReadyTime:(unsigned int)arg1;
- (unsigned int)pkgType;
- (void)setPkgType:(unsigned int)arg1;
- (unsigned int)protocol;
- (void)setProtocol:(unsigned int)arg1;
- (unsigned int)downloadSize;
- (void)setDownloadSize:(unsigned int)arg1;
- (unsigned int)dnsType;
- (void)setDnsType:(unsigned int)arg1;
- (unsigned int)requestSourceSyncType;
- (void)setRequestSourceSyncType:(unsigned int)arg1;
- (unsigned int)requestSourceIsPreHot;
- (void)setRequestSourceIsPreHot:(unsigned int)arg1;
- (unsigned int)requestSourceLaunchFlag;
- (void)setRequestSourceLaunchFlag:(unsigned int)arg1;
- (unsigned int)downloadComponentType;
- (void)setDownloadComponentType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
