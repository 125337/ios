@interface MMWebJSLogMgr : MMUserService <PBMessageObserverDelegate, CNetworkStatusExt, MMServiceProtocol>
{
    NSMutableArray * logList; // +0x8
    NSMutableDictionary * invalidLogDic; // +0x10
    BOOL cgiRunning; // +0x18
}
- (id)init;
- (void)onServiceInit;
- (void)loadInvalidLogDic;
- (void)saveInvalidLogDic;
- (id)pathForInvalidLogCache;
- (void)filterInvalidLogItem;
- (BOOL)isInvaildWithLogId:(unsigned int)arg1;
- (void)handleRespInvalidLogList:(id)arg1;
- (BOOL)addJSLog:(unsigned int)arg1 logExt:(id)arg2 type:(unsigned int)arg3;
- (id)getKVLogHead;
- (void)tryRealtimeReport;
- (void)realtimeReport;
- (id)getReportPackage;
- (unsigned int)getMaxSendSize;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void).cxx_destruct;
@end
