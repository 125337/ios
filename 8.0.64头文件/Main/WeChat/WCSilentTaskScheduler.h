@interface WCSilentTaskScheduler : NSObject
{
    BOOL _isAppForeground; // +0x8
    NSMutableOrderedSet * _tasks; // +0x10
    NSRecursiveLock * _lock; // +0x18
}
+ (id)shareInstance;
- (id)init;
- (BOOL)registerTask:(id)arg1;
- (BOOL)unregisterTask:(id)arg1;
- (id)nextTask;
- (void)registerNotifications;
- (void)onAppEnterForeground:(id)arg1;
- (void)onAppEnterBackground:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (BOOL)isAppForeground;
- (void)setIsAppForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end
