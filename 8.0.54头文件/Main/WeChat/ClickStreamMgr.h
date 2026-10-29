@interface ClickStreamMgr : MMRootService <MMServiceProtocol>
{
    timeval m_tvStart; // +0x8
    NSString * m_nsLastPageID; // +0x18
    NSString * m_nsInterruptPageID; // +0x20
    NSMutableString * m_nsReport; // +0x28
    NSSet * m_setIgnorePageIDs; // +0x30
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)activePage:(id)arg1;
- (void)inActivePage:(id)arg1;
- (id)genRedunDantReport;
- (void)writeReportLog:(BOOL)arg1;
- (void)checkWriteReportLog;
- (void)recordPage:(id)arg1 withTime:(long long)arg2;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (id)getClickStreamReport;
- (void)clearClickStreamReport;
- (void)insertWithKey:(id)arg1 Value:(id)arg2;
- (void).cxx_destruct;
@end

