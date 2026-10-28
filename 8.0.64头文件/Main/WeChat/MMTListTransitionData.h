@interface MMTListTransitionData : NSObject
{
    NSArray * _fromObjects; // +0x8
    NSArray * _toObjects; // +0x10
    NSArray * _toSectionControllers; // +0x18
}
- (id)initFromObjects:(id)arg1 toObjects:(id)arg2 toSectionControllers:(id)arg3;
- (id)fromObjects;
- (id)toObjects;
- (id)toSectionControllers;
- (void).cxx_destruct;
@end
