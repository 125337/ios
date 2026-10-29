@interface MMFinderLiveStatsReportLogic : NSObject <MMFinderLiveStatsReporterDelegate, MMLiveTaskMgrExt>
{
    NSMutableDictionary * _reporterDictionary; // +0x8
    NSObject<OS_dispatch_queue> * _processQueue; // +0x10
}
- (id)init;
- (void)registerExtension;
- (void)reportWithLiveTask:(id)arg1 itemArray:(id)arg2 immediately:(BOOL)arg3;
- (void)onJoinLiveFinish:(BOOL)arg1 sessionId:(id)arg2;
- (void)innerReportWithLiveTask:(id)arg1 itemArray:(id)arg2 immediately:(BOOL)arg3;
- (void)onExitLiveRoom:(id)arg1;
- (id)getReporterForSessionId:(id)arg1;
- (id)getOrCreateReporterForLiveTask:(id)arg1;
- (void)onLiveStatsReporterShouldRelease:(id)arg1;
- (void)onLiveTaskExitLive:(id)arg1;
- (id)reporterDictionary;
- (void)setReporterDictionary:(id)arg1;
- (id)processQueue;
- (void)setProcessQueue:(id)arg1;
- (void).cxx_destruct;
@end
