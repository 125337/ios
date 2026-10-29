@interface ForwardScheduleQueueMgr : MMUserService <ISendMessageExt, MMServiceProtocol>
{
    BOOL _lastLoggedEnabled; // +0x8
    NSMutableDictionary * _msgToGroup; // +0x10
    NSMutableDictionary * _groups; // +0x18
    NSRecursiveLock * _lock; // +0x20
    NSTimer * _watchdogTimer; // +0x28
    unsigned long long _batchSeed; // +0x30
    NSMutableArray * _insertCountedKeys; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)OnSendMessageSuccess:(id)arg1;
- (void)OnSendMessageFail:(id)arg1;
- (BOOL)isEnabled;
- (double)scheduleTimeout;
- (BOOL)isStatEnabled;
- (id)generateBatchIdForChatName:(id)arg1 expectCount:(unsigned long long)arg2;
- (double)watchdogInterval;
- (double)maxLifetimeOfGroup:(id)arg1;
- (void)startWatchdogIfNeeded;
- (void)stopWatchdog;
- (void)onWatchdogTick;
- (void)tryEnqueueMsg:(id)arg1;
- (BOOL)canStartSendMsg:(id)arg1;
- (BOOL)hasActiveBatch;
- (BOOL)isMsgScheduleHold:(id)arg1;
- (BOOL)isItemTimeout:(id)arg1;
- (void)onMsgFinished:(id)arg1;
- (void)removeMsg:(id)arg1;
- (void)finishMsg:(id)arg1 countAsSent:(BOOL)arg2;
- (void)recordFinishInGroup:(id)arg1 msgKey:(id)arg2;
- (void)checkInsertQueueOfMsg:(id)arg1;
- (void)reportInsertIntoGroup:(id)arg1 batchId:(id)arg2 msgWrap:(id)arg3;
- (void)reportStatOfGroup:(id)arg1 batchId:(id)arg2;
- (void)discardGroup:(id)arg1 batchId:(id)arg2;
- (void)clearInsertCountedKeysIfIdle;
- (void)removeAllMsgByChatName:(id)arg1;
- (id)groupOfMsg:(id)arg1;
- (id)groupKeyOfMsg:(id)arg1;
- (void)removeItemWithKey:(id)arg1;
- (void)breakOrderOfGroup:(id)arg1 batchId:(id)arg2 reason:(id)arg3;
- (void)wakeUpHeadOfGroup:(id)arg1;
- (id)msgToGroup;
- (void)setMsgToGroup:(id)arg1;
- (id)groups;
- (void)setGroups:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)watchdogTimer;
- (void)setWatchdogTimer:(id)arg1;
- (unsigned long long)batchSeed;
- (void)setBatchSeed:(unsigned long long)arg1;
- (BOOL)lastLoggedEnabled;
- (void)setLastLoggedEnabled:(BOOL)arg1;
- (id)insertCountedKeys;
- (void)setInsertCountedKeys:(id)arg1;
- (void).cxx_destruct;
@end
