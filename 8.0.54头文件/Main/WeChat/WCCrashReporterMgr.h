@interface WCCrashReporterMgr : MMRootService <MMServiceProtocol>
{
    unsigned long long _currentReportType; // +0x8
}
+ (void)reportId:(int)arg1 key:(int)arg2 andValue:(int)arg3;
+ (void)reportIdKeyList:(vector<mars::smc::STIDKeyInfo, std::allocator<mars::smc::STIDKeyInfo>>)arg1;
+ (void)reportWithID:(int)arg1 ext:(id)arg2 isReportNow:(BOOL)arg3 isKeyLog:(BOOL)arg4;
- (id)init;
- (void)handleBeginReportCrashIssue:(id)arg1;
- (void)handleReportCrashIssue:(id)arg1 success:(BOOL)arg2;
- (void)handleReportCrashError:(id)arg1;
- (void)handleBeginReportCoreDumpIssue:(id)arg1;
- (void)handleReportCoreDumpIssue:(id)arg1 success:(BOOL)arg2;
- (unsigned long long)currentReportType;
- (void)setCurrentReportType:(unsigned long long)arg1;
@end

