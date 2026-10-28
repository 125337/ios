@interface WePkgStatReport : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    ReportObj16171 * _reportObj16171; // +0x8
}
- (void)svrReport14229:(id)arg1;
- (void)kvReport13980:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)svrReport:(unsigned int)arg1 withLogExt:(id)arg2;
- (id)reportObj16171;
- (void)setReportObj16171:(id)arg1;
- (void).cxx_destruct;
@end
