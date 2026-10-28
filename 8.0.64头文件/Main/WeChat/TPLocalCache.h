@interface TPLocalCache : NSObject
{
    int _diskItemCount; // +0x8
    NSMutableDictionary * _memeryCacheMap; // +0x10
    NSMutableArray * _memeryItemArray; // +0x18
    NSRecursiveLock * _lock; // +0x20
    NSString * _cachePath; // +0x28
    long long _diskItemCacheSize; // +0x30
    NSMutableArray * _diskItemArray; // +0x38
}
- (id)initWithName:(id)arg1;
- (void)initDefaultDisk;
- (void)put:(id)arg1 value:(id)arg2 cacheTime:(double)arg3 saveDisk:(BOOL)arg4;
- (void)put:(id)arg1 value:(id)arg2 cacheTime:(double)arg3;
- (void)put:(id)arg1 value:(id)arg2;
- (id)get:(id)arg1;
- (id)get:(id)arg1 memeryOnly:(BOOL)arg2;
- (long long)getFileSize:(id)arg1 key:(id)arg2;
- (double)getFileLastModifyTime:(id)arg1 key:(id)arg2;
- (void)clearMemery;
- (void)clearCache;
- (void)removeOneItem:(id)arg1;
- (BOOL)writeToFile:(id)arg1 cacheObject:(id)arg2;
- (void)addInfoToFile:(id)arg1 cacheSize:(long long)arg2;
- (void)removeItemPath:(id)arg1 itemKey:(id)arg2;
- (void)writeItemInfo:(long long)arg1 itemCount:(int)arg2;
- (void)writeItemArray:(id)arg1;
- (void)removeWithKey:(id)arg1;
- (void)removeAll;
- (void)clearDiskCache;
- (id)logTag;
- (id)memeryCacheMap;
- (void)setMemeryCacheMap:(id)arg1;
- (id)memeryItemArray;
- (void)setMemeryItemArray:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)cachePath;
- (void)setCachePath:(id)arg1;
- (int)diskItemCount;
- (void)setDiskItemCount:(int)arg1;
- (long long)diskItemCacheSize;
- (void)setDiskItemCacheSize:(long long)arg1;
- (id)diskItemArray;
- (void)setDiskItemArray:(id)arg1;
- (void).cxx_destruct;
@end
