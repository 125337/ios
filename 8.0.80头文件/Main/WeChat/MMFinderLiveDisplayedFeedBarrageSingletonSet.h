@interface MMFinderLiveDisplayedFeedBarrageSingletonSet : NSObject
+ (id)sharedSetContainer;
+ (id)getBarrageSeqSetForFeedLiveId:(id)arg1;
+ (void)removeBarrageSeqSetForFeedLiveId:(id)arg1;
+ (void)markBarrageDisplayed:(id)arg1 feedLiveId:(id)arg2;
+ (BOOL)checkIfBarrageDisplayed:(id)arg1 feedLiveId:(id)arg2;
@end
