@interface AppmsgExposureService : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _uid2HasExposuredMap; // +0x8
}
- (void)onServiceInit;
- (void)chatExposuredWithSvrID:(unsigned long long)arg1 chatName:(id)arg2 urlInfoList:(id)arg3 sendUserName:(id)arg4 createTime:(unsigned int)arg5 currSessionID:(unsigned int)arg6;
- (void)chatReportIfExposuredWithSvrID:(unsigned long long)arg1;
- (void)chatLogErrorIfHasExposuredButNotReport;
- (void)snsExposuredWithTid:(id)arg1 contentUrl:(id)arg2 itemShowType:(unsigned int)arg3 sendUserName:(id)arg4 createTime:(unsigned int)arg5 itemShowTypeFrom:(unsigned int)arg6;
- (void)snsReportIfExposuredWithTid:(id)arg1;
- (void)snsLogErrorIfHasExposuredButNotReport;
- (void)profileExposuredWithMsgID:(id)arg1 brandName:(id)arg2 urlInfo:(id)arg3;
- (id)uidForScene:(unsigned int)arg1 innerID:(id)arg2;
- (void)exposuredWithScene:(unsigned int)arg1 innerID:(id)arg2 chatName:(id)arg3 urlInfoList:(id)arg4 sendUserName:(id)arg5 createTime:(unsigned int)arg6 currSessionID:(unsigned int)arg7;
- (void)reportIfExposuredWithScene:(unsigned int)arg1 innerID:(id)arg2;
- (void)doReportExposureItem:(id)arg1 urlInfo:(id)arg2 chatType:(unsigned int)arg3;
- (void)logErrorIfHasExposuredButNotReport:(unsigned int)arg1;
- (void)reportWithId:(unsigned int)arg1 key:(long long)arg2 value:(unsigned int)arg3;
- (void).cxx_destruct;
@end
