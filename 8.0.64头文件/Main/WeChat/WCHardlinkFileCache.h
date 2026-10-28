@interface WCHardlinkFileCache : NSObject
{
    unsigned int _cacheVersion; // +0x8
    MemoryMappedKV * _mmkv; // +0x10
}
+ (unsigned int)currentCacheVersion;
- (id)init;
- (void)setFileCache:(id)arg1 withKey:(id)arg2;
- (id)getFileCacheWithKey:(id)arg1;
- (void)clearAll;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (unsigned int)cacheVersion;
- (void)setCacheVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
