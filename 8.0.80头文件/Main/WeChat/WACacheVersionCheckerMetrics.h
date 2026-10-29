@interface WACacheVersionCheckerMetrics : NSObject
{
    unsigned int _downloadFormat; // +0x8
    unsigned int _downloadTransport; // +0xc
    long long _localCheckCostMs; // +0x10
    long long _getDownloadURLCostMs; // +0x18
    long long _packageDownloadCostMs; // +0x20
    long long _packageFinalizeCostMs; // +0x28
    long long _downloadedPackageCount; // +0x30
    long long _downloadErrorCode; // +0x38
    long long _encodedContentLength; // +0x40
    long long _finalPackageBytes; // +0x48
    unsigned long long _checkStartTimeMs; // +0x50
    unsigned long long _downloadURLStartTimeMs; // +0x58
    unsigned long long _packageDownloadStartTimeMs; // +0x60
    unsigned long long _packageFinalizeStartTimeMs; // +0x68
}
- (id)init;
- (long long)localCheckCostMs;
- (void)setLocalCheckCostMs:(long long)arg1;
- (long long)getDownloadURLCostMs;
- (void)setGetDownloadURLCostMs:(long long)arg1;
- (long long)packageDownloadCostMs;
- (void)setPackageDownloadCostMs:(long long)arg1;
- (long long)packageFinalizeCostMs;
- (void)setPackageFinalizeCostMs:(long long)arg1;
- (long long)downloadedPackageCount;
- (void)setDownloadedPackageCount:(long long)arg1;
- (long long)downloadErrorCode;
- (void)setDownloadErrorCode:(long long)arg1;
- (unsigned int)downloadFormat;
- (void)setDownloadFormat:(unsigned int)arg1;
- (long long)encodedContentLength;
- (void)setEncodedContentLength:(long long)arg1;
- (long long)finalPackageBytes;
- (void)setFinalPackageBytes:(long long)arg1;
- (unsigned int)downloadTransport;
- (void)setDownloadTransport:(unsigned int)arg1;
- (unsigned long long)checkStartTimeMs;
- (void)setCheckStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)downloadURLStartTimeMs;
- (void)setDownloadURLStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)packageDownloadStartTimeMs;
- (void)setPackageDownloadStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)packageFinalizeStartTimeMs;
- (void)setPackageFinalizeStartTimeMs:(unsigned long long)arg1;
@end
