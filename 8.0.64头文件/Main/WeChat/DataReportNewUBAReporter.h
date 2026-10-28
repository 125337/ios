@interface DataReportNewUBAReporter : MMUserService <MMServiceProtocol>
{
    DataReportNewUBACacheWCDB * m_cacheDB; // +0x8
    NSNumber * m_openNewUBASwitch; // +0x10
    unsigned long long m_reportStrMaxLimit; // +0x18
    NSNumber * m_isReportAllUBA; // +0x20
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)isOpenNewUBA;
- (BOOL)isReportAllUBA;
- (void)reportStandardEvent:(id)arg1 time:(unsigned long long)arg2 target:(id)arg3 params:(id)arg4;
- (void)reportKeyUBA:(id)arg1 time:(unsigned long long)arg2 target:(id)arg3 data:(id)arg4;
- (void)realReportKeyUBA:(id)arg1 isKeyView:(BOOL)arg2;
- (void)reportAllUBA:(id)arg1 time:(unsigned long long)arg2 data:(id)arg3;
- (void)reportLogId:(unsigned long long)arg1 time:(unsigned long long)arg2;
- (void)reportFlutterAllOutEvent:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3;
- (void)realReportFlutterAllOutEvent;
- (id)getAllCache;
- (void).cxx_destruct;
@end
