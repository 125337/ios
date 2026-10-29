@interface ExptDebugReportLogic : MMObject <PBMessageObserverDelegate>
- (void)dealloc;
- (void)sendStartMonitorKV:(id)arg1;
- (void)stopMonitorKV:(id)arg1;
- (void)sendKV:(unsigned int)arg1 value:(id)arg2;
- (void)sendPageAppear:(id)arg1;
- (void)sendPageDisappear:(id)arg1;
- (void)sendSession:(id)arg1;
- (void)sendSvrPushXML:(id)arg1 usrName:(id)arg2 withType:(id)arg3;
- (void)sendToSvr:(id)arg1 byKey:(unsigned int)arg2 scene:(unsigned int)arg3 type:(unsigned int)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end

