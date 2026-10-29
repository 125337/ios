@interface MMBGMUniqueMutableArray : NSObject
{
    NSMutableArray * _array; // +0x8
    NSMutableSet * _set; // +0x10
}
+ (id)uniqueIdOfMusicData:(id)arg1;
- (unsigned long long)count;
- (id)safeObjectAtIndex:(unsigned long long)arg1;
- (void)safeAddObject:(id)arg1;
- (void)safeRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)safeInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)indexOfObject:(id)arg1;
- (void)safeAddObjectsFromArray:(id)arg1;
- (void)safeAddObjectsFromRecommendMusicInfos:(id)arg1;
- (void)removeAllObjects;
- (id)array;
- (id)set;
- (void)setArray:(id)arg1;
- (void)setSet:(id)arg1;
- (void).cxx_destruct;
@end
