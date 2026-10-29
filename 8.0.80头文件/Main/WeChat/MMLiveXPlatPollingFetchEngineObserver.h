@interface MMLiveXPlatPollingFetchEngineObserver : NSObject <LiveURLivePollingEngineObserver>
{
    MMFinderLiveTaskId * _taskId; // +0x8
}
- (void)onPollCompleted:(int)arg1;
- (void)onReceivedPollingEvent:(unsigned long long)arg1 buffer:(id)arg2 result:(unsigned int)arg3 interval:(unsigned long long)arg4;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end
