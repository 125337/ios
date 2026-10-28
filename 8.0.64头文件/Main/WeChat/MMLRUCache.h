@interface MMLRUCache : NSObject
{
    unsigned int m_capacity; // +0x8
    BOOL m_alwaysCache; // +0xc
    unordered_map<NSString *, id, KeyHasher, KeyEqualer, std::allocator<std::pair<NSString *const, id>>> m_dic; // +0x10
    vector<NSString *__unsafe_unretained, std::allocator<NSString *__unsafe_unretained>> m_vector; // +0x38
}
- (id)initWithCapacity:(unsigned int)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (unsigned int)capacity;
- (unsigned long long)count;
- (id)allKeys;
- (id)allObjects;
- (id)allKeysAndObjects;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
