@interface WCFinderAdCommentReportCGI : WCFinderBaseCgi
{
    NSString * _reportData; // +0x8
    NSString * _reportBypData; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithTid:(id)arg1 scene:(int)arg2 ReportData:(id)arg3 reportBypData:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (BOOL)needADDeviceInfo;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (id)reportBypData;
- (void)setReportBypData:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

