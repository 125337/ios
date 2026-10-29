@interface WCFinderReportBgmInteractCGI : WCFinderBaseCgi
{
    WCFinderReportBgmInteractParams * _params; // +0x8
}
- (id)initWithParams:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
