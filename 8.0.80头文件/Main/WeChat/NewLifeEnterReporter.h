@interface NewLifeEnterReporter : NSObject
+ (void)onFindFriendDidAppear;
+ (void)setupReportContext:(BOOL)arg1;
+ (void)setupReportContextOnSwitchIn;
+ (void)setCacheType:(unsigned int)arg1;
+ (void)setNewLifeTab:(unsigned int)arg1;
+ (void)setUseInstanceCache:(unsigned int)arg1;
+ (void)setRedDotUUID:(id)arg1;
+ (void)addReportAction:(id)arg1;
+ (id)getPeriodCost:(id)arg1 startAction:(id)arg2 endAction:(id)arg3;
+ (void)addReportAction:(id)arg1 timestamp:(unsigned long long)arg2 upTime:(unsigned long long)arg3;
+ (void)reportCgiInfoFail:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3 beforeFetchClock:(unsigned long long)arg4 afterFetchClock:(unsigned long long)arg5 redDotUuid:(id)arg6;
+ (void)reportCgiInfo:(id)arg1 response:(id)arg2 beforeFetchClock:(unsigned long long)arg3 afterFetchClock:(unsigned long long)arg4 profileClockData:(id)arg5 redDotUuid:(id)arg6;
@end
