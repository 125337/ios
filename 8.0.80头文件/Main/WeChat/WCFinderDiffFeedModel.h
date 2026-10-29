@interface WCFinderDiffFeedModel : NSObject
{
    unsigned long long _type; // +0x8
    NSMutableIndexSet * _removals; // +0x10
    NSMutableIndexSet * _insertions; // +0x18
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)removals;
- (void)setRemovals:(id)arg1;
- (id)insertions;
- (void)setInsertions:(id)arg1;
- (void).cxx_destruct;
@end
