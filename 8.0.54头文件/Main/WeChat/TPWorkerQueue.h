@interface TPWorkerQueue : NSObject
{
    void * _workingQueueKey; // +0x8
    unsigned long long _queueType; // +0x10
    NSObject<OS_dispatch_queue> * _workingQueue; // +0x18
}
+ (id)workerQueueWithQueueType:(unsigned long long)arg1 queueName:(id)arg2;
- (void)scheduleTaskAsync:(id /* block */)arg1;
- (void)scheduleTaskSync:(id /* block */)arg1;
- (void)destoryQueue;
- (unsigned long long)queueType;
- (void)setQueueType:(unsigned long long)arg1;
- (id)workingQueue;
- (void)setWorkingQueue:(id)arg1;
- (void).cxx_destruct;
@end

