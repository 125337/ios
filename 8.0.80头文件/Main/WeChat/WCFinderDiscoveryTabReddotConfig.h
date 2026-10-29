@interface WCFinderDiscoveryTabReddotConfig : NSObject
{
    BOOL _hasOverride; // +0x8
    BOOL _skipOtherQuotaOnSnsReddot; // +0x9
    unsigned int _discoveryTabReddotClickSequenceReportCount; // +0xc
    unsigned int _disableDiscoveryTabReddotIntervalAfterConsumingQuota; // +0x10
}
- (BOOL)hasOverride;
- (void)setHasOverride:(BOOL)arg1;
- (unsigned int)discoveryTabReddotClickSequenceReportCount;
- (void)setDiscoveryTabReddotClickSequenceReportCount:(unsigned int)arg1;
- (unsigned int)disableDiscoveryTabReddotIntervalAfterConsumingQuota;
- (void)setDisableDiscoveryTabReddotIntervalAfterConsumingQuota:(unsigned int)arg1;
- (BOOL)skipOtherQuotaOnSnsReddot;
- (void)setSkipOtherQuotaOnSnsReddot:(BOOL)arg1;
@end
