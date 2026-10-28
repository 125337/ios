@interface WCFinderMutableChangeSet : WCFinderChangeSet
+ (id)mutableChangeSet;
- (id)init;
- (void)setInserts:(id)arg1;
- (void)setRemoves:(id)arg1;
- (void)setUpdates:(id)arg1;
- (id)inserts;
- (id)removes;
- (id)updates;
@end
