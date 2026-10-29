@interface MJVocalAdjustmentCache : NSObject
{
    NSMutableDictionary * _cache; // +0x8
}
- (id)init;
- (void)dealloc;
- (BOOL)isEmpty;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectsForKeys:(id)arg1;
- (id)allKeys;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (void).cxx_destruct;
@end

