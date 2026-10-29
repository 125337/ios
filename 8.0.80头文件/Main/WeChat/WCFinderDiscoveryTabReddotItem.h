@interface WCFinderDiscoveryTabReddotItem : NSObject
{
    unsigned int _quota; // +0x8
    unsigned long long _businessType; // +0x10
    unsigned long long _quotaBusinessType; // +0x18
    unsigned long long _discoveryBusinessMask; // +0x20
    unsigned long long _receiveMsTimeStamp; // +0x28
    unsigned long long _freqLimitMask; // +0x30
    NSString * _path; // +0x38
    WCFinderRedDotCtrlInfo * _ctrlInfo; // +0x40
    WCFinderRedDotTipsShowInfo * _showInfo; // +0x48
}
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (unsigned long long)quotaBusinessType;
- (void)setQuotaBusinessType:(unsigned long long)arg1;
- (unsigned long long)discoveryBusinessMask;
- (void)setDiscoveryBusinessMask:(unsigned long long)arg1;
- (unsigned long long)receiveMsTimeStamp;
- (void)setReceiveMsTimeStamp:(unsigned long long)arg1;
- (unsigned long long)freqLimitMask;
- (void)setFreqLimitMask:(unsigned long long)arg1;
- (unsigned int)quota;
- (void)setQuota:(unsigned int)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)ctrlInfo;
- (void)setCtrlInfo:(id)arg1;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (void).cxx_destruct;
@end
