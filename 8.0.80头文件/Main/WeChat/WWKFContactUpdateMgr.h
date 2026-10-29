@interface WWKFContactUpdateMgr : MMUserService <MMServiceProtocol>
{
    WWKFContactOpLogic * _contactOpLogic; // +0x8
    NSMutableArray * _queueWaitingTasks; // +0x10
    NSMutableDictionary * _dictUserName2RequestingTasks; // +0x18
}
- (void)onServiceInit;
- (void)updateWWKFContact:(id)arg1 isForce:(BOOL)arg2;
- (void)enqueueWWKFContactUpdate:(id)arg1 isForce:(BOOL)arg2 contactInfoScene:(int)arg3;
- (void)mainThread_addTaskToUpdateQueue:(id)arg1;
- (id)taskInWaittingQueueWithUsername:(id)arg1;
- (void)mainThread_checkWaitingQueue;
- (BOOL)isContactStillInUpdateInterval:(id)arg1;
- (void)removeTaskAferUpdate:(id)arg1;
- (void)handleFetchContactResponse:(id)arg1;
- (unsigned long long)maxRequestTaskCount;
- (long long)updateContactDefautltInterval;
- (id)contactOpLogic;
- (void)setContactOpLogic:(id)arg1;
- (id)queueWaitingTasks;
- (void)setQueueWaitingTasks:(id)arg1;
- (id)dictUserName2RequestingTasks;
- (void)setDictUserName2RequestingTasks:(id)arg1;
- (void).cxx_destruct;
@end
