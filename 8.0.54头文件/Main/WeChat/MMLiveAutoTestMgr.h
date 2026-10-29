@interface MMLiveAutoTestMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * _lock; // +0x8
    NSMutableDictionary * _logQueues; // +0x10
    NSObject<OS_dispatch_queue> * _dumpQueue; // +0x18
    MMTimer * _scheduleTimer; // +0x20
}
+ (id)autoTestAssertTypes;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)logWithType:(id)arg1 message:(id)arg2;
- (void)dumpCheckLogToFile;
- (id)logQueue:(id)arg1;
- (void)resetLogQueue:(id)arg1;
- (void)stopScheduleTimer;
- (void)pauseScheduleTimer;
- (void)resumeScheduleTimer;
- (void)startScheduleTimer:(unsigned long long)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)logQueues;
- (void)setLogQueues:(id)arg1;
- (id)dumpQueue;
- (void)setDumpQueue:(id)arg1;
- (id)scheduleTimer;
- (void)setScheduleTimer:(id)arg1;
- (void).cxx_destruct;
@end

