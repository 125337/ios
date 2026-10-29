@interface FinderThreadSafeDictionary : NSMutableDictionary
{
    NSMutableDictionary * _dic; // +0x8
    NSRecursiveLock * _lock; // +0x10
}
- (id)init;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (id)description;
- (id)descriptionInStringsFileFormat;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)objectEnumerator;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
@end
