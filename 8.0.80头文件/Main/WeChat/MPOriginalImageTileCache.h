@interface MPOriginalImageTileCache : NSObject
{
    MPOriginalImageLRUMemoryCache * _tileMemoryCache; // +0x8
    NSMutableDictionary * _sourceCache; // +0x10
    NSObject<OS_dispatch_queue> * _sourceQueue; // +0x18
    NSString * _diskCachePath; // +0x20
}
- (id)init;
- (void)dealloc;
- (id)tileCacheKeyForKey:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5 orientation:(long long)arg6;
- (id)getTileForKey:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5 orientation:(long long)arg6;
- (void)setTileData:(id)arg1 forKey:(id)arg2 level:(long long)arg3 x:(long long)arg4 y:(long long)arg5 tileSize:(long long)arg6 orientation:(long long)arg7;
- (void)removeTilesForKey:(id)arg1 exceptLevel:(long long)arg2;
- (id)getSourceForKey:(id)arg1;
- (void)setSource:(id)arg1 forKey:(id)arg2;
- (id)filePathForKey:(id)arg1;
- (id)filePathForKey:(id)arg1 extension:(id)arg2;
- (BOOL)hasFileForKey:(id)arg1;
- (BOOL)hasFileForKey:(id)arg1 extension:(id)arg2;
- (BOOL)moveDownloadedFileFromURL:(id)arg1 forKey:(id)arg2;
- (BOOL)moveDownloadedFileFromURL:(id)arg1 forKey:(id)arg2 extension:(id)arg3;
- (void)handleMemoryWarning;
- (void)clearMemoryCache;
- (void)clearDecodeCacheForKey:(id)arg1;
- (unsigned long long)diskCacheSize;
- (void)clearAllCache;
- (id)tileMemoryCache;
- (void)setTileMemoryCache:(id)arg1;
- (id)sourceCache;
- (void)setSourceCache:(id)arg1;
- (id)sourceQueue;
- (void)setSourceQueue:(id)arg1;
- (id)diskCachePath;
- (void)setDiskCachePath:(id)arg1;
- (void).cxx_destruct;
@end
