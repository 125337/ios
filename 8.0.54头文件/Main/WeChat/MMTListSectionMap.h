@interface MMTListSectionMap : NSObject
{
    NSMutableArray * _mObjects; // +0x8
    NSMapTable * _objectToSectionControllerMap; // +0x10
    NSMapTable * _sectionControllerToSectionMap; // +0x18
}
- (id)init;
- (id)objects;
- (id)sectionControllerForSection:(long long)arg1;
- (long long)sectionForSectionController:(id)arg1;
- (id)objectForSection:(long long)arg1;
- (id)objectForSectionController:(id)arg1;
- (id)sectionControllerForObject:(id)arg1;
- (long long)sectionForObject:(id)arg1;
- (void)updateObject:(id)arg1;
- (void)updateWithObjects:(id)arg1 sectionControllers:(id)arg2;
- (void)reset;
- (void)enumerateUsingBlock:(id /* block */)arg1;
- (id)mObjects;
- (void)setMObjects:(id)arg1;
- (id)objectToSectionControllerMap;
- (id)sectionControllerToSectionMap;
- (void).cxx_destruct;
@end

