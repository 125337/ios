@interface MMLiveMicEffectsFetchingLogic : NSObject
{
    MMFinderLiveTaskId * _taskId; // +0x8
    unsigned long long _status; // +0x10
    NSMutableArray * _completionItems; // +0x18
}
- (id)initWithLiveTaskId:(id)arg1;
- (void)fetchEffectItemsWithCompletionBlock:(id /* block */)arg1;
- (id)liveTask;
- (void)invokeCompletionItemsWithSuccess:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)completionItems;
- (void)setCompletionItems:(id)arg1;
- (void).cxx_destruct;
@end
