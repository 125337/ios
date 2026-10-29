@interface MMLivePollingFetchTask : NSObject <MMPollingFetchQueueItemProtocol>
{
    MMLiveTaskId * _taskId; // +0x8
    long long _cmdId; // +0x10
    unsigned long long _interval; // +0x18
    long long _lastExecuteTimeInterval; // +0x20
    long long _mostEarlyStartTime; // +0x28
}
+ (id)createWithTaskId:(id)arg1 cmdId:(long long)arg2 interval:(unsigned long long)arg3;
- (id)init;
- (long long)sortId;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)cmdId;
- (void)setCmdId:(long long)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (long long)lastExecuteTimeInterval;
- (void)setLastExecuteTimeInterval:(long long)arg1;
- (long long)mostEarlyStartTime;
- (void)setMostEarlyStartTime:(long long)arg1;
- (void).cxx_destruct;
@end

