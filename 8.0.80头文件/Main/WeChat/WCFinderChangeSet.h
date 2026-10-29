@interface WCFinderChangeSet : NSObject
{
    NSIndexSet * _removes; // +0x8
    NSIndexSet * _inserts; // +0x10
    NSIndexSet * _updates; // +0x18
}
+ (id)changeSetWithRemove:(id)arg1;
+ (id)changeSetWithInsert:(id)arg1;
+ (id)changeSetWithUpdate:(id)arg1;
- (BOOL)empty;
- (BOOL)onlyInsert;
- (void)applyRemoves:(id /* block */)arg1 inserts:(id /* block */)arg2 updates:(id /* block */)arg3;
- (id)convertRemoveIndexPath:(long long)arg1;
- (id)convertInsertIndexPath:(long long)arg1;
- (id)convertUpdateIndexPath:(long long)arg1;
- (id)description;
- (id)descriptForIndexSet:(id)arg1;
- (id)removes;
- (void)setRemoves:(id)arg1;
- (id)inserts;
- (void)setInserts:(id)arg1;
- (id)updates;
- (void)setUpdates:(id)arg1;
- (void).cxx_destruct;
@end
