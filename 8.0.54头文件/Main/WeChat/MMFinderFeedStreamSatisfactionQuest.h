@interface MMFinderFeedStreamSatisfactionQuest : NSObject
{
    BOOL _isFetching; // +0x8
    BOOL _fetchSuccess; // +0x9
    NSArray * _quests; // +0x10
    NSArray * _reasons; // +0x18
}
+ (id)successWithQuest:(id)arg1 reasons:(id)arg2;
+ (id)failure;
+ (id)fetching;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)fetchSuccess;
- (void)setFetchSuccess:(BOOL)arg1;
- (id)quests;
- (void)setQuests:(id)arg1;
- (id)reasons;
- (void)setReasons:(id)arg1;
- (void).cxx_destruct;
@end

