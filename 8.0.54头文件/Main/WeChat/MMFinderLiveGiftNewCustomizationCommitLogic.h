@interface MMFinderLiveGiftNewCustomizationCommitLogic : NSObject
{
    MMFinderLiveTaskId * _finderTaskId; // +0x8
    NSMutableDictionary * _committingDict; // +0x10
    NSMutableDictionary * _pendingDict; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (void)commitGiftNewCustomizationWithGiftProductId:(id)arg1 modifyNewCustomText:(BOOL)arg2 newCustomText:(id)arg3 componentKeyList:(id)arg4 callback:(id /* block */)arg5;
- (void)tryCommitNextTaskWithGiftProductId:(id)arg1;
- (id)enqueueCommitTaskWithGiftProductId:(id)arg1;
- (id)committingDict;
- (id)pendingDict;
- (id)finderTaskId;
- (void)setFinderTaskId:(id)arg1;
- (void)setCommittingDict:(id)arg1;
- (void)setPendingDict:(id)arg1;
- (void).cxx_destruct;
@end

