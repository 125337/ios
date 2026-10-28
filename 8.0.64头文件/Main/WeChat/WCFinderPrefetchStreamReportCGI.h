@interface WCFinderPrefetchStreamReportCGI : WCFinderBaseCgi
{
    unsigned long long _tabType; // +0x8
    NSData * _lastBuffer; // +0x10
}
- (id)initWithTabType:(unsigned long long)arg1 lastBuffer:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
