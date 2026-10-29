@interface WXGRoamBackupStatusManager : NSObject
{
    NSMutableDictionary * _taskStatuses; // +0x8
    NSObject<OS_dispatch_queue> * _statusQueue; // +0x10
    NSTimer * _cleanupTimer; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setupCleanupTimer;
- (unsigned long long)calculateNotifyCode:(int)arg1 taskState:(int)arg2;
- (BOOL)isCompletedStatus:(unsigned long long)arg1;
- (BOOL)shouldPrioritize:(unsigned long long)arg1 over:(unsigned long long)arg2;
- (void)notifyStatusChanged:(id)arg1;
- (void)updateTaskStatus:(unsigned long long)arg1 taskType:(int)arg2 taskState:(int)arg3 progress:(int)arg4 currentCount:(unsigned long long)arg5 totalCount:(unsigned long long)arg6 updateNotifyCode:(BOOL)arg7;
- (void)removeTaskStatus:(unsigned long long)arg1;
- (id)getAllTaskStatuses;
- (id)getHighestPriorityTaskStatus;
- (id)getTaskStatus:(unsigned long long)arg1;
- (void)cleanupExpiredStatuses;
- (BOOL)isTaskRunning:(id)arg1;
- (int)countForTaskRunning;
- (BOOL)isMultiPackageBackingup;
- (BOOL)isMultiPackageHasBannerStatus;
- (id)taskStatuses;
- (void)setTaskStatuses:(id)arg1;
- (id)statusQueue;
- (void)setStatusQueue:(id)arg1;
- (id)cleanupTimer;
- (void)setCleanupTimer:(id)arg1;
- (void).cxx_destruct;
@end
