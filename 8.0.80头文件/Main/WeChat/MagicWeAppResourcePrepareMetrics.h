@interface MagicWeAppResourcePrepareMetrics : NSObject
{
    unsigned int _downloadFormat; // +0x8
    unsigned int _downloadTransport; // +0xc
    long long _totalMs; // +0x10
    long long _contactCostMs; // +0x18
    long long _trialInfoCostMs; // +0x20
    long long _packageConfigCostMs; // +0x28
    long long _permissionCostMs; // +0x30
    long long _cacheCheckCostMs; // +0x38
    long long _cachePrepareCostMs; // +0x40
    long long _getDownloadURLCostMs; // +0x48
    long long _packageDownloadCostMs; // +0x50
    long long _packageFinalizeCostMs; // +0x58
    long long _downloadErrorCode; // +0x60
    long long _downloadedPackageCount; // +0x68
    long long _encodedContentLength; // +0x70
    long long _finalPackageBytes; // +0x78
}
- (id)init;
- (id)description;
- (long long)totalMs;
- (void)setTotalMs:(long long)arg1;
- (long long)contactCostMs;
- (void)setContactCostMs:(long long)arg1;
- (long long)trialInfoCostMs;
- (void)setTrialInfoCostMs:(long long)arg1;
- (long long)packageConfigCostMs;
- (void)setPackageConfigCostMs:(long long)arg1;
- (long long)permissionCostMs;
- (void)setPermissionCostMs:(long long)arg1;
- (long long)cacheCheckCostMs;
- (void)setCacheCheckCostMs:(long long)arg1;
- (long long)cachePrepareCostMs;
- (void)setCachePrepareCostMs:(long long)arg1;
- (long long)getDownloadURLCostMs;
- (void)setGetDownloadURLCostMs:(long long)arg1;
- (long long)packageDownloadCostMs;
- (void)setPackageDownloadCostMs:(long long)arg1;
- (long long)packageFinalizeCostMs;
- (void)setPackageFinalizeCostMs:(long long)arg1;
- (long long)downloadErrorCode;
- (void)setDownloadErrorCode:(long long)arg1;
- (long long)downloadedPackageCount;
- (void)setDownloadedPackageCount:(long long)arg1;
- (unsigned int)downloadFormat;
- (void)setDownloadFormat:(unsigned int)arg1;
- (long long)encodedContentLength;
- (void)setEncodedContentLength:(long long)arg1;
- (long long)finalPackageBytes;
- (void)setFinalPackageBytes:(long long)arg1;
- (unsigned int)downloadTransport;
- (void)setDownloadTransport:(unsigned int)arg1;
@end
