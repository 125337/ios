@interface WCFinderGroupSection : NSObject <NSFastEnumeration>
{
    NSMutableDictionary * _maps; // +0x8
    id /* block */ _mapper; // +0x10
    NSMutableOrderedSet * _keys; // +0x18
    NSMapTable * _objectMap; // +0x20
    long long _allElementCount; // +0x28
}
- (id)initWithMapper:(id /* block */)arg1;
- (long long)sectionCount;
- (long long)elementCount;
- (BOOL)hasElements;
- (id)allSection;
- (unsigned long long)countByEnumeratingWithState:(struct *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)nameForSection:(long long)arg1;
- (long long)numberOfElementForSection:(long long)arg1;
- (id)iterItemsForSection:(id)arg1;
- (id)itemsForSection:(id)arg1;
- (id)elementAtIndexPath:(id)arg1;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)indexPathForObject:(id)arg1;
- (id)maps;
- (void)setMaps:(id)arg1;
- (id /* block */)mapper;
- (void)setMapper:(id /* block */)arg1;
- (id)keys;
- (void)setKeys:(id)arg1;
- (id)objectMap;
- (void)setObjectMap:(id)arg1;
- (long long)allElementCount;
- (void)setAllElementCount:(long long)arg1;
- (void).cxx_destruct;
@end
