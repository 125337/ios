@interface WCFinderADReportCGI : WCFinderBaseCgi
{
    unsigned long long _actionType; // +0x8
}
- (id)initWithTid:(id)arg1 scene:(unsigned long long)arg2 actionType:(unsigned long long)arg3 reportData:(id)arg4 reportBypData:(id)arg5 adInfo:(id)arg6;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
@end
