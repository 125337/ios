@interface WCMomentsPredictMgr : MMUserService <MMServiceProtocol>
{
    OrderedDictionary * _pendingTasks; // +0x8
    OrderedDictionary * _runningTasks; // +0x10
    NSMutableDictionary * _cachedPredictedResults; // +0x18
}
- (id)init;
- (void)initPredictor;
- (void)addTask:(id)arg1;
- (void)taskDidComplete:(id)arg1;
- (void)checkTasks;
- (BOOL)_checkNextTask;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)getCachedPredictedResultWithTid:(id)arg1 mid:(id)arg2;
- (id)getCachedOrCreatePredictedResultWithTid:(id)arg1 mid:(id)arg2;
- (BOOL)predictVideoSourceWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (BOOL)predictVideoSourceWithDataItem:(id)arg1;
- (id)predictVideoSourceWithDataItems:(id)arg1;
- (void)handleVideoSourcePredictTaskDidComplete:(id)arg1;
- (void).cxx_destruct;
@end

