@interface MMFinderLiveCommomQueue : NSObject
{
    unsigned long long _size; // +0x8
    NSMutableArray * _array; // +0x10
}
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)init;
- (id)front;
- (id)back;
- (void)push:(id)arg1;
- (id)pop;
- (void)removeObjectsInArray:(id)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (id)array;
- (void)setArray:(id)arg1;
- (void).cxx_destruct;
@end
