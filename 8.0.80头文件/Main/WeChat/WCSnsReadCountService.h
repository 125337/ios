@interface WCSnsReadCountService : NSObject <IWCTimeLineSessionExt>
{
    NSMutableDictionary * _sessions; // +0x8
    double _reportingStartTime; // +0x10
    long long _reportingBatchCount; // +0x18
    NSString * _currentReportId; // +0x20
}
+ (id)sharedInstance;
- (id)init;
- (long long)readCountForFeedId:(id)arg1;
- (long long)incrementReadCountForFeedId:(id)arg1;
- (void)setBaseCount:(long long)arg1 forFeedId:(id)arg2;
- (void)clearAllBaseCount;
- (void)clearReportedDelta:(id)arg1;
- (id)feedIdsWithPendingDelta;
- (void)reportPendingReadCounts;
- (void)reportBatchWithItems:(id)arg1 reportId:(id)arg2 roundId:(id)arg3;
- (void)reportReadCountForFeedId:(id)arg1 delta:(long long)arg2;
- (id)sessionStateOf:(long long)arg1;
- (void)startSession:(long long)arg1 sessionId:(id)arg2;
- (BOOL)exposeFeedId:(long long)arg1 feedId:(id)arg2;
- (void)endSessionAndReport:(long long)arg1;
- (BOOL)hasActiveSession:(long long)arg1;
- (id)readCountMMkv;
- (id)readCountBaseMMkv;
- (long long)baseCountForFeedId:(id)arg1;
- (long long)deltaForFeedId:(id)arg1;
- (void)onTimeLineSessionStart;
- (void)onTimeLineSessionExposure:(id)arg1;
- (void)onTimeLineSessionEnd;
- (id)sessions;
- (void)setSessions:(id)arg1;
- (double)reportingStartTime;
- (void)setReportingStartTime:(double)arg1;
- (long long)reportingBatchCount;
- (void)setReportingBatchCount:(long long)arg1;
- (id)currentReportId;
- (void)setCurrentReportId:(id)arg1;
- (void).cxx_destruct;
@end
