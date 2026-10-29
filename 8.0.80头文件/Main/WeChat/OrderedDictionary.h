@interface OrderedDictionary : NSMutableDictionary
{
    NSMutableDictionary * dictionary; // +0x8
    NSMutableArray * array; // +0x10
    BOOL _disableStrictDebugMode; // +0x18
}
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)setupWithCapacity:(unsigned long long)arg1;
- (void)dealloc;
- (id)copy;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)allValues;
- (id)allValuesInOrder;
- (id)allValuesInReverseOrder;
- (id)allValuesForKeyEnumerator:(id)arg1;
- (id)keyEnumerator;
- (id)reverseKeyEnumerator;
- (void)insertObject:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)firstKey;
- (id)lastKey;
- (id)allKeysInOrder;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)setObjectAsLastObject:(id)arg1 forKey:(id)arg2;
- (void)sortOrderUsingComparator:(id /* block */)arg1;
- (void)updateOrderForKey:(id)arg1 index:(unsigned long long)arg2;
- (BOOL)disableStrictDebugMode;
- (void)setDisableStrictDebugMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
