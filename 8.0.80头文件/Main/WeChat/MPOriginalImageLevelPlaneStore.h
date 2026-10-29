@interface MPOriginalImageLevelPlaneStore : NSObject
{
    MPOriginalImageEntryStore * _entryStore; // +0x8
    NSMutableDictionary * _planes; // +0x10
    NSMutableDictionary * _waiters; // +0x18
    NSLock * _lock; // +0x20
}
- (id)initWithEntryStore:(id)arg1;
- (id)waiterKeyForKey:(id)arg1 level:(long long)arg2;
- (void)ensurePlaneForKey:(id)arg1 level:(long long)arg2 entry:(id)arg3 completion:(id /* block */)arg4;
- (id)takeWaitersForKey:(id)arg1 exceptLevel:(long long)arg2;
- (id)cropTileFromPlane:(id)arg1 planeX:(long long)arg2 planeY:(long long)arg3 width:(long long)arg4 height:(long long)arg5;
- (void)clearCacheForKey:(id)arg1;
- (id)entryStore;
- (void)setEntryStore:(id)arg1;
- (id)planes;
- (void)setPlanes:(id)arg1;
- (id)waiters;
- (void)setWaiters:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
