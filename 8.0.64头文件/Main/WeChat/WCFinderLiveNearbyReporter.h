@interface WCFinderLiveNearbyReporter : NSObject <IWCFinderLiveNearbyReporterCallback>
{
    NSString * m_sessionId; // +0x8
    NSString * m_clickId; // +0x10
    unsigned long long m_pageType; // +0x18
    BOOL m_isInHalfPage; // +0x20
}
- (id)init;
- (void)onNearbyStartLiveClick:(unsigned long long)arg1;
- (void)onNearbyStartLiveAction:(unsigned long long)arg1;
- (void)reportNearbyStartLiveClick:(unsigned long long)arg1;
- (void)reportNearbyStartLiveAction:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
