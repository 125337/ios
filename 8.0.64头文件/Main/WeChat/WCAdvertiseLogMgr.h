@interface WCAdvertiseLogMgr : MMUserService <PBMessageObserverDelegate, MMKernelExt, MMServiceProtocol>
{
    BOOL adLogReporting; // +0x8
    BOOL reportTaskRunning; // +0x9
    WCAdvertiseLogDB * logDB; // +0x10
    unsigned int reportBeginLocalId; // +0x18
    unsigned int reportCurrLocalId; // +0x1c
    unsigned int reportEndLocalId; // +0x20
    BOOL delayInsertDB; // +0x24
    NSMutableArray * tempLogs; // +0x28
}
- (id)getPathForLogCache;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)setupLogDB;
- (id)getKVLogHead;
- (void)reportADLog:(unsigned int)arg1 logExt:(id)arg2;
- (void)insertDBLogsToDb;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)tryReportADLog;
- (id)getReportADLogPackage;
- (void)startReportADLog;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)onAuthOK;
- (unsigned int)getNextReportTime;
- (void)saveNextReportTime:(unsigned int)arg1;
- (unsigned int)getExceptionMaxTime;
- (unsigned int)getRandomInternalTime;
- (unsigned int)getMaxSendSize;
- (void).cxx_destruct;
@end
