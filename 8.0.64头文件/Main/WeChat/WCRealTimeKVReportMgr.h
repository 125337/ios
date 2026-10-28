@interface WCRealTimeKVReportMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableDictionary * m_realTimeReport; // +0x8
}
- (void)onServiceInit;
- (id)reportLogId:(unsigned int)arg1 value:(id)arg2 extKey:(id)arg3;
- (id)reportLogId2:(unsigned int)arg1 value:(id)arg2 extKey:(id)arg3;
- (id)realTimeReportWithWrap:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
