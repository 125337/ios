@interface MJTimelineMutationInfo : NSObject
{
    NSSet * _insertedIDs; // +0x8
    NSSet * _deletedIDs; // +0x10
    NSSet * _updatedIDs; // +0x18
    NSArray * _inserts; // +0x20
    NSArray * _deletes; // +0x28
    NSArray * _updates; // +0x30
    unsigned long long _mutationOptions; // +0x38
}
- (id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 options:(unsigned long long)arg4;
- (BOOL)hasChanges;
- (unsigned long long)changeCount;
- (BOOL)affectSegmentWithID:(id)arg1;
- (id)description;
- (id)inserts;
- (id)deletes;
- (id)updates;
- (unsigned long long)mutationOptions;
- (void).cxx_destruct;
@end
