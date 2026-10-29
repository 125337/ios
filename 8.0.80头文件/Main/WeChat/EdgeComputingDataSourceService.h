@interface EdgeComputingDataSourceService : MMObject <IEdgeComputingDataSourceExt>
- (id)init;
- (void)initAutoTestSwitch;
- (void)onSendKV:(id)arg1 withReportID:(unsigned int)arg2;
- (void)onSendForeBack:(id)arg1;
- (void)onSendSessionSingle:(id)arg1;
- (void)onSendSessionMerge:(id)arg1;
- (void)onSendSessionPageSingle:(id)arg1 withReportID:(unsigned int)arg2;
- (void)onSendSessionPageMerge:(id)arg1;
- (void)onSendSessionUBA:(id)arg1;
- (void)onSendSessionSingleAll:(id)arg1;
- (void)onSendSessionUBAAll:(id)arg1;
- (void)onSendDataReportSDKUBAData:(id)arg1;
- (void)onSendDataReportSDKData:(id)arg1;
@end
