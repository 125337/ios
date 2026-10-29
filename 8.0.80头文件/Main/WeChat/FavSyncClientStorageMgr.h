@interface FavSyncClientStorageMgr : MMObject
{
    MemoryMappedKV * _mmkv; // +0x8
    NSString * _storageKey; // +0x10
    SyncClientStorageList * _storageList; // +0x18
}
- (id)initWithMMKV:(id)arg1 storageKey:(id)arg2;
- (void)loadFromMMKV;
- (BOOL)saveToMMKV;
- (id)getStorageListForRequest;
- (BOOL)mergeAndSaveServerStorageList:(id)arg1;
- (void)clearAll;
- (id)storageListToString:(id)arg1;
- (id)localItemForKey:(unsigned int)arg1;
- (void).cxx_destruct;
@end
