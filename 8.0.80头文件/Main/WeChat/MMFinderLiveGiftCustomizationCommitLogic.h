@interface MMFinderLiveGiftCustomizationCommitLogic : NSObject
{
    NSMutableDictionary * _commitQueues; // +0x8
}
- (id)init;
- (void)commitChangesToGiftCustomizationModel:(id)arg1 withTaskId:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)commitQueues;
- (void)setCommitQueues:(id)arg1;
- (void).cxx_destruct;
@end
