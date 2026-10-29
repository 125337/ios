@interface OMCTimelineMutation : NSObject
{
    NSArray * _addedMutationInfos; // +0x8
    NSArray * _removedMutationInfos; // +0x10
    NSArray * _changedMutationInfos; // +0x18
}
- (id)initWithBackingMutationInfo:(const void *)arg1;
- (id)description;
- (id)addedMutationInfos;
- (id)removedMutationInfos;
- (id)changedMutationInfos;
- (void).cxx_destruct;
@end

