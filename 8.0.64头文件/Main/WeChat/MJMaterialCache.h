@interface MJMaterialCache : NSObject
{
    id <MJMaterialCacheDelegate> _delegate; // +0x8
    NSDictionary * _cacheMap; // +0x10
}
+ (id)createCacheMapFromConfigs:(id)arg1;
+ (id)loadLRUCacheFromMMKVWithKey:(id)arg1 capacity:(unsigned long long)arg2;
+ (id)createCacheWithCapacity:(unsigned long long)arg1 allKeysAndValues:(id)arg2 comparator:(id /* block */)arg3;
+ (id)loadCacheDictFromMMKVWithKey:(id)arg1;
+ (void)saveCacheToMMKV:(id)arg1 key:(id)arg2;
- (id)initWithConfigs:(id)arg1;
- (id)configForKey:(id)arg1;
- (id)cacheForKey:(id)arg1;
- (unsigned long long)capacityForCache:(id)arg1;
- (id)allMaterialIDsInCache:(id)arg1;
- (id)allItemsInCache:(id)arg1;
- (id)itemWithID:(id)arg1 inCache:(id)arg2;
- (BOOL)containsItemWithID:(id)arg1 inCache:(id)arg2;
- (void)addItem:(id)arg1 inCache:(id)arg2;
- (void)removeItem:(id)arg1 inCache:(id)arg2;
- (void)clearCache:(id)arg1;
- (void)onCacheDidUpdate:(id)arg1 withKey:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cacheMap;
- (void)setCacheMap:(id)arg1;
- (void).cxx_destruct;
@end
