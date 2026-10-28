@interface DataReportAbilityProviderOtherImpl : NSObject <AmoebaAbilityProviderOther>
- (id)init;
- (void)kvReport:(id)arg1 withLogId:(unsigned long long)arg2;
- (void)rtReport:(id)arg1 withLogId:(unsigned long long)arg2;
- (void)sendDataReportEdgeData:(id)arg1;
- (void)sendDataReportUBAEdgeData:(id)arg1;
- (void)sendDebugInfo:(unsigned int)arg1 key:(unsigned int)arg2 content:(id)arg3;
- (id)getJsonRepresentation:(id)arg1;
- (id)getTing28683Params;
- (id)genJsonArray:(id)arg1;
- (id)genJsonDictionary:(id)arg1;
- (BOOL)isFinderTabPage:(id)arg1;
- (void)logWithLevel:(long long)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (id)getFinderHalfPreViewController:(id)arg1;
- (void)setCgiDataReportMonitor:(id)arg1;
- (id)getMd5:(id)arg1;
- (BOOL)isFlutterPage:(id)arg1;
- (void)onRealTimeKVReportSucceedWithWrap:(id)arg1;
- (void)onRealTimeKVReportFailedWithWrap:(id)arg1;
@end
