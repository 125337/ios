@interface FTSFeatureMessageSplitter : NSObject
{
    NSMutableDictionary * _cache; // +0x8
    NSLock * _lock; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (id)regularSessionIndexesForQuery:(id)arg1 taskKey:(id)arg2;
- (id)featureSessionIndexesForQuery:(id)arg1 taskKey:(id)arg2;
- (id)featureDisplayItemsForQuery:(id)arg1 taskKey:(id)arg2;
- (void)invalidateForTaskKey:(id)arg1;
- (void)invalidateAll;
- (id)ensureEntryForQuery:(id)arg1 taskKey:(id)arg2;
- (id)computeEntryForQuery:(id)arg1 taskKey:(id)arg2;
- (id)emptyEntryForQuery:(id)arg1;
- (void).cxx_destruct;
@end
