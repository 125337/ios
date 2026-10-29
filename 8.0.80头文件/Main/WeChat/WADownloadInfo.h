@interface WADownloadInfo : NSObject
{
    BOOL _isUpdateCompleteWithPatch; // +0x8
    BOOL _enableDownloadResumption; // +0x9
    unsigned int _oldVersion; // +0xc
    unsigned int _targetVersion; // +0x10
    unsigned int _fullPkgSize; // +0x14
    unsigned int _patchSize; // +0x18
    unsigned int _downloadPkgSize; // +0x1c
    unsigned int _decompressPkgSize; // +0x20
    unsigned int _decompressTime; // +0x24
    unsigned long long _downloadType; // +0x28
    NSString * _fullPkgUrl; // +0x30
    NSString * _fullPkgZstdUrl; // +0x38
    NSString * _patchPkgUrl; // +0x40
    unsigned long long _beginTimeForWholePkg; // +0x48
    unsigned long long _beginTimeForGzipPkg; // +0x50
    unsigned long long _endTimeForGzipPkg; // +0x58
    unsigned long long _beginTimeForZstdPkg; // +0x60
    unsigned long long _endTimeForZstdPkg; // +0x68
    unsigned long long _beginTimeForPatch; // +0x70
    unsigned long long _endTimeForPatch; // +0x78
    unsigned long long _beginTimeForCheckSumVerify; // +0x80
    unsigned long long _endTimeForCheckSumVerify; // +0x88
    WAInfoData * _appInfoData; // +0x90
    unsigned long long _downloadScene; // +0x98
    NSMutableArray * _downloadProgressInfos; // +0xa0
}
- (BOOL)isUrlEqualToCurrentType:(id)arg1;
- (BOOL)isUrlEqualPatchUrl:(id)arg1;
- (BOOL)isUrlEqualFullPkgZstdUrl:(id)arg1;
- (BOOL)isUrlEqualFullPkgUrl:(id)arg1;
- (BOOL)isPatch;
- (BOOL)isZstd;
- (unsigned long long)compressType;
- (id)downloadUrl;
- (void)updateDownloadProgress:(long long)arg1;
- (float)getDownloadSpeed;
- (unsigned long long)downloadType;
- (void)setDownloadType:(unsigned long long)arg1;
- (id)fullPkgUrl;
- (void)setFullPkgUrl:(id)arg1;
- (id)fullPkgZstdUrl;
- (void)setFullPkgZstdUrl:(id)arg1;
- (id)patchPkgUrl;
- (void)setPatchPkgUrl:(id)arg1;
- (unsigned int)oldVersion;
- (void)setOldVersion:(unsigned int)arg1;
- (unsigned int)targetVersion;
- (void)setTargetVersion:(unsigned int)arg1;
- (unsigned long long)beginTimeForWholePkg;
- (void)setBeginTimeForWholePkg:(unsigned long long)arg1;
- (unsigned long long)beginTimeForGzipPkg;
- (void)setBeginTimeForGzipPkg:(unsigned long long)arg1;
- (unsigned long long)endTimeForGzipPkg;
- (void)setEndTimeForGzipPkg:(unsigned long long)arg1;
- (unsigned long long)beginTimeForZstdPkg;
- (void)setBeginTimeForZstdPkg:(unsigned long long)arg1;
- (unsigned long long)endTimeForZstdPkg;
- (void)setEndTimeForZstdPkg:(unsigned long long)arg1;
- (unsigned long long)beginTimeForPatch;
- (void)setBeginTimeForPatch:(unsigned long long)arg1;
- (unsigned long long)endTimeForPatch;
- (void)setEndTimeForPatch:(unsigned long long)arg1;
- (unsigned long long)beginTimeForCheckSumVerify;
- (void)setBeginTimeForCheckSumVerify:(unsigned long long)arg1;
- (unsigned long long)endTimeForCheckSumVerify;
- (void)setEndTimeForCheckSumVerify:(unsigned long long)arg1;
- (BOOL)isUpdateCompleteWithPatch;
- (void)setIsUpdateCompleteWithPatch:(BOOL)arg1;
- (unsigned int)fullPkgSize;
- (void)setFullPkgSize:(unsigned int)arg1;
- (unsigned int)patchSize;
- (void)setPatchSize:(unsigned int)arg1;
- (id)appInfoData;
- (void)setAppInfoData:(id)arg1;
- (unsigned int)downloadPkgSize;
- (void)setDownloadPkgSize:(unsigned int)arg1;
- (unsigned int)decompressPkgSize;
- (void)setDecompressPkgSize:(unsigned int)arg1;
- (unsigned int)decompressTime;
- (void)setDecompressTime:(unsigned int)arg1;
- (unsigned long long)downloadScene;
- (void)setDownloadScene:(unsigned long long)arg1;
- (id)downloadProgressInfos;
- (void)setDownloadProgressInfos:(id)arg1;
- (BOOL)enableDownloadResumption;
- (void)setEnableDownloadResumption:(BOOL)arg1;
- (void).cxx_destruct;
@end
