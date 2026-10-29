@interface WAReportPackageDownloadDetailInfoItem : WAReportBaseItem
{
    BOOL _isPatch; // +0x8
    unsigned int _downloadPkgSize; // +0xc
    unsigned int _decompressTime; // +0x10
    unsigned int _decompressPkgSize; // +0x14
    unsigned int _errCode; // +0x18
    unsigned int _dnsType; // +0x1c
    unsigned int _requestSourceSyncType; // +0x20
    unsigned int _requestSourceIsPreHot; // +0x24
    unsigned int _requestSourceLaunchFlag; // +0x28
    WAPackageDownloadProtocolInfo * _detail; // +0x30
    unsigned long long _costTime; // +0x38
    unsigned long long _startTime; // +0x40
    unsigned long long _endTime; // +0x48
    NSString * _moduleName; // +0x50
    unsigned long long _packageType; // +0x58
    unsigned long long _localAppVersion; // +0x60
    unsigned long long _downloadAppVersion; // +0x68
    unsigned long long _compressType; // +0x70
    unsigned long long _encryptVersion; // +0x78
    NSString * _downloadUrl; // +0x80
    NSString * _md5; // +0x88
    NSString * _finalPkgMd5; // +0x90
    unsigned long long _applyPatchBeginTimeInMs; // +0x98
    unsigned long long _applyPatchEndTimeInMs; // +0xa0
    unsigned long long _checkSumVerifyBeginTimeInMs; // +0xa8
    unsigned long long _checkSumVerifyEndTimeInMs; // +0xb0
    unsigned long long _downloadComponentType; // +0xb8
    NSString * _xCacheLoopUp; // +0xc0
    unsigned long long _DNSCost; // +0xc8
    unsigned long long _connectCost; // +0xd0
    unsigned long long _SSLconnectionCost; // +0xd8
    unsigned long long _requestCost; // +0xe0
    unsigned long long _responseCost; // +0xe8
}
- (int)reportID;
- (id)reportString;
- (id)detail;
- (void)setDetail:(id)arg1;
- (unsigned long long)costTime;
- (void)setCostTime:(unsigned long long)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (unsigned long long)packageType;
- (void)setPackageType:(unsigned long long)arg1;
- (unsigned long long)localAppVersion;
- (void)setLocalAppVersion:(unsigned long long)arg1;
- (unsigned long long)downloadAppVersion;
- (void)setDownloadAppVersion:(unsigned long long)arg1;
- (BOOL)isPatch;
- (void)setIsPatch:(BOOL)arg1;
- (unsigned long long)compressType;
- (void)setCompressType:(unsigned long long)arg1;
- (unsigned long long)encryptVersion;
- (void)setEncryptVersion:(unsigned long long)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned int)downloadPkgSize;
- (void)setDownloadPkgSize:(unsigned int)arg1;
- (unsigned int)decompressTime;
- (void)setDecompressTime:(unsigned int)arg1;
- (unsigned int)decompressPkgSize;
- (void)setDecompressPkgSize:(unsigned int)arg1;
- (unsigned int)errCode;
- (void)setErrCode:(unsigned int)arg1;
- (id)finalPkgMd5;
- (void)setFinalPkgMd5:(id)arg1;
- (unsigned int)dnsType;
- (void)setDnsType:(unsigned int)arg1;
- (unsigned int)requestSourceSyncType;
- (void)setRequestSourceSyncType:(unsigned int)arg1;
- (unsigned int)requestSourceIsPreHot;
- (void)setRequestSourceIsPreHot:(unsigned int)arg1;
- (unsigned int)requestSourceLaunchFlag;
- (void)setRequestSourceLaunchFlag:(unsigned int)arg1;
- (unsigned long long)applyPatchBeginTimeInMs;
- (void)setApplyPatchBeginTimeInMs:(unsigned long long)arg1;
- (unsigned long long)applyPatchEndTimeInMs;
- (void)setApplyPatchEndTimeInMs:(unsigned long long)arg1;
- (unsigned long long)checkSumVerifyBeginTimeInMs;
- (void)setCheckSumVerifyBeginTimeInMs:(unsigned long long)arg1;
- (unsigned long long)checkSumVerifyEndTimeInMs;
- (void)setCheckSumVerifyEndTimeInMs:(unsigned long long)arg1;
- (unsigned long long)downloadComponentType;
- (void)setDownloadComponentType:(unsigned long long)arg1;
- (id)xCacheLoopUp;
- (void)setXCacheLoopUp:(id)arg1;
- (unsigned long long)DNSCost;
- (void)setDNSCost:(unsigned long long)arg1;
- (unsigned long long)connectCost;
- (void)setConnectCost:(unsigned long long)arg1;
- (unsigned long long)SSLconnectionCost;
- (void)setSSLconnectionCost:(unsigned long long)arg1;
- (unsigned long long)requestCost;
- (void)setRequestCost:(unsigned long long)arg1;
- (unsigned long long)responseCost;
- (void)setResponseCost:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
