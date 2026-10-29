@interface WXGRoamImportScheduler : NSObject
{
    NSLock * _lock; // +0x8
    NSMutableArray * _pending; // +0x10
    NSMutableDictionary * _runningByConv; // +0x18
    unsigned long long _runningCount; // +0x20
    NSMutableArray * _pendingBarriers; // +0x28
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x30
}
- (id)init;
- (void)submitConvId:(id)arg1 work:(id /* block */)arg2;
- (void)cancelAllPending;
- (void)submitBarrier:(id /* block */)arg1;
- (void)drain;
- (id)dequeueAdmissibleLocked;
- (void)finishConvId:(id)arg1;
- (void)runBarriersIfDrained;
- (void).cxx_destruct;
@end
