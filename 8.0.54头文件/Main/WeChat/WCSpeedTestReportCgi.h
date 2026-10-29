@interface WCSpeedTestReportCgi : WCBaseCgi
{
    SpeedTestReportReq * speedTestReportRequest; // +0x8
}
- (id)init;
- (void)startRequest:(id)arg1 connectionTime:(unsigned int)arg2 connectionRetCode:(unsigned int)arg3 tranTime:(unsigned int)arg4 transRetCode:(unsigned int)arg5 clinetIp:(id)arg6 clientPort:(unsigned int)arg7 serverIp:(id)arg8 serverPort:(unsigned int)arg9 localStack:(unsigned int)arg10;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)speedTestReportRequest;
- (void)setSpeedTestReportRequest:(id)arg1;
- (void).cxx_destruct;
@end

