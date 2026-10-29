@interface MPOriginalImageTileServer : NSObject
{
    MPOriginalImageEntryStore * _store; // +0x8
    MPOriginalImageTileScheduler * _tileScheduler; // +0x10
    MPOriginalImageLevelPlaneStore * _levelPlaneStore; // +0x18
    NSLock * _sourceLock; // +0x20
    NSMutableDictionary * _servedLevelByKey; // +0x28
}
- (id)initWithStore:(id)arg1;
- (id)makeTileScheduler;
- (void)clearCacheForKey:(id)arg1 reason:(id)arg2;
- (void)purgeL1IfTileLevelChangedForKey:(id)arg1 level:(long long)arg2;
- (void)getTileForKey:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5 completion:(id /* block */)arg6;
- (void)rebuildFromDiskAndServeTileForKey:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5 completion:(id /* block */)arg6;
- (void)serveTileForReadyEntry:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5 completion:(id /* block */)arg6;
- (void)serveTileFromLevelPlaneForEntry:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5 completion:(id /* block */)arg6;
- (void)decodeAndServeTileForEntry:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5 completion:(id /* block */)arg6;
- (id)sourceForKey:(id)arg1;
- (BOOL)tileGeometryForEntry:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5 pixelX:(long long *)arg6 pixelY:(long long *)arg7 cropW:(long long *)arg8 cropH:(long long *)arg9 outW:(long long *)arg10 outH:(long long *)arg11;
- (id)tileHeadersForEntry:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5;
- (id)store;
- (void)setStore:(id)arg1;
- (id)tileScheduler;
- (void)setTileScheduler:(id)arg1;
- (id)levelPlaneStore;
- (void)setLevelPlaneStore:(id)arg1;
- (id)sourceLock;
- (void)setSourceLock:(id)arg1;
- (id)servedLevelByKey;
- (void)setServedLevelByKey:(id)arg1;
- (void).cxx_destruct;
@end
