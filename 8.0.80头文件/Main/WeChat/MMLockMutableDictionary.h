@interface MMLockMutableDictionary : MMObject
{
    NSRecursiveLock * _lock; // +0x8
    NSMutableDictionary * _dict; // +0x10
}
+ (id)dictionaryWithMutableDictionary:(id)arg1;
- (id)init;
- (id)initWithMutableDictionary:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)fetchDictionary;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)allKeys;
- (id)allValues;
- (id)allKeysForObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (int)count;
- (void).cxx_destruct;
@end
