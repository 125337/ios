@interface WCFinderDiscoveryTabClickSequenceCache : NSObject
{
    BOOL _hasCachedResult; // +0x8
    unsigned long long _reportCount; // +0x10
    unsigned long long _recordsVersion; // +0x18
    unsigned long long _lastEnterFinderMs; // +0x20
    DiscoveryTabReddotClickSequence * _sequence; // +0x28
}
- (BOOL)hasCachedResult;
- (void)setHasCachedResult:(BOOL)arg1;
- (unsigned long long)reportCount;
- (void)setReportCount:(unsigned long long)arg1;
- (unsigned long long)recordsVersion;
- (void)setRecordsVersion:(unsigned long long)arg1;
- (unsigned long long)lastEnterFinderMs;
- (void)setLastEnterFinderMs:(unsigned long long)arg1;
- (id)sequence;
- (void)setSequence:(id)arg1;
- (void).cxx_destruct;
@end
