@interface MMKReportServiceImpl : NSObject <MMKReportService>
+ (void)reportAcf:(id)arg1 sessionId:(id)arg2;
- (void)idkeyStat:(long long)arg1 key:(long long)arg2 val:(long long)arg3 isImportant:(BOOL)arg4;
- (void)kvStat:(int)arg1 val:(id)arg2;
- (long long)svrTimeMs;
- (void)setLastSessionInfo:(id)arg1;
- (id)getLastSessionInfo;
@end

