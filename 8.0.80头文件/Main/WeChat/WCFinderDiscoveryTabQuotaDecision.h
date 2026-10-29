@interface WCFinderDiscoveryTabQuotaDecision : NSObject
{
    BOOL _shouldConsumeQuota; // +0x8
    BOOL _shouldFreeze; // +0x9
    unsigned long long _quotaBusinessType; // +0x10
    unsigned long long _consumedDiscoveryBusinessMask; // +0x18
    WCFinderDiscoveryTabReddotItem * _quotaItem; // +0x20
}
- (BOOL)shouldConsumeQuota;
- (void)setShouldConsumeQuota:(BOOL)arg1;
- (BOOL)shouldFreeze;
- (void)setShouldFreeze:(BOOL)arg1;
- (unsigned long long)quotaBusinessType;
- (void)setQuotaBusinessType:(unsigned long long)arg1;
- (unsigned long long)consumedDiscoveryBusinessMask;
- (void)setConsumedDiscoveryBusinessMask:(unsigned long long)arg1;
- (id)quotaItem;
- (void)setQuotaItem:(id)arg1;
- (void).cxx_destruct;
@end
