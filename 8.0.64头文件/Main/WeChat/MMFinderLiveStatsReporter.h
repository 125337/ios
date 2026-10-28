@interface MMFinderLiveStatsReporter : NSObject
{
    BOOL _alreadyExitedLive; // +0x8
    id <MMFinderLiveStatsReporterDelegate> _delegate; // +0x10
    NSString * _sessionId; // +0x18
    NSObject<OS_dispatch_queue> * _processQueue; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    long long _state; // +0x30
    double _lastReportTime; // +0x38
    NSMutableArray * _stashedItemArray; // +0x40
}
- (id)initWithTaskId:(id)arg1 sessionId:(id)arg2;
- (void)appendReportItemArray:(id)arg1;
- (void)onJoinLiveFinish:(BOOL)arg1;
- (void)onExitLiveRoom;
- (void)flush;
- (void)becomeActived;
- (void)becomeIdle;
- (void)triggerReportAction;
- (id)popAndClearStashedItemArray;
- (void)notifyDelegateShouldReleaseReporter;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)processQueue;
- (void)setProcessQueue:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (double)lastReportTime;
- (void)setLastReportTime:(double)arg1;
- (BOOL)alreadyExitedLive;
- (void)setAlreadyExitedLive:(BOOL)arg1;
- (id)stashedItemArray;
- (void)setStashedItemArray:(id)arg1;
- (void).cxx_destruct;
@end
