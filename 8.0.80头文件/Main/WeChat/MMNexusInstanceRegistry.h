@interface MMNexusInstanceRegistry : NSObject
{
    NSHashTable * _table; // +0x8
    NSMutableDictionary * _pendingKeys; // +0x10
}
+ (id)sharedInstance;
+ (id)instanceKeyForPageId:(id)arg1 variant:(id)arg2;
- (id)init;
- (void)add:(id)arg1;
- (void)remove:(id)arg1;
- (id)liveInstances;
- (BOOL)hasLiveInstanceForKey:(id)arg1;
- (id)liveInstanceForKey:(id)arg1;
- (void)markPendingKey:(id)arg1;
- (void)unmarkPendingKey:(id)arg1;
- (BOOL)hasPendingForKey:(id)arg1;
- (id)table;
- (void)setTable:(id)arg1;
- (id)pendingKeys;
- (void)setPendingKeys:(id)arg1;
- (void).cxx_destruct;
@end
