@interface WCFinderPassReportCGI : WCFinderBaseCgi
{
    int _passReportScene; // +0x8
    NSString * _reportData; // +0x10
}
- (id)initWithPassReportScene:(int)arg1 reportData:(id)arg2;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)passReportScene;
- (void)setPassReportScene:(int)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (void).cxx_destruct;
@end

