@interface GameLaunchReportMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    CRReportAPIClient * _reportClient; // +0x8
    NSMutableDictionary * _reportModelDict; // +0x10
}
- (id)init;
- (void)tryFetchAndReportGameLaunchAppStore:(id)arg1 extraInfo:(id)arg2;
- (void)tryFetchAndReportGameLaunchAppStore:(id)arg1 extraInfo:(id)arg2 info:(id)arg3;
- (void)tryFetchAndReportGameLaunchAppStore:(id)arg1 extraInfo:(id)arg2 isCancel:(BOOL)arg3 isLaunch:(BOOL)arg4;
- (void)tryFetchAndReportGameLaunchAppStore:(id)arg1 extraInfo:(id)arg2 isCancel:(BOOL)arg3 isLaunch:(BOOL)arg4 info:(id)arg5;
- (id)reportInfoToDic:(id)arg1;
- (id)getReportInfoWithAppId:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)reportClient;
- (void)setReportClient:(id)arg1;
- (id)reportModelDict;
- (void)setReportModelDict:(id)arg1;
- (void).cxx_destruct;
@end
