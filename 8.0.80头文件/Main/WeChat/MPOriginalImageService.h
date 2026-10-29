@interface MPOriginalImageService : NSObject
{
    BOOL _isSupportOriginImage; // +0x8
    MPOriginalImageTileCache * _tileCache; // +0x10
    MPOriginalImageDecoder * _decoder; // +0x18
    MPOriginalImageDownloader * _downloader; // +0x20
    MPOriginalImageEntryStore * _store; // +0x28
    MPOriginalImageDownloadCoordinator * _downloadCoordinator; // +0x30
    MPOriginalImageTileServer * _tileServer; // +0x38
    double _lastTileActivityTime; // +0x40
    NSMutableDictionary * _midUrlToSaveContext; // +0x48
}
+ (id)sharedInstance;
- (id)init;
- (BOOL)isSupportUseOriginImage;
- (id)capabilityInfo;
- (id)cacheQueryForURL:(id)arg1 midUrl:(id)arg2 isLive:(BOOL)arg3 liveVideoUrl:(id)arg4;
- (id)startDownloadForURL:(id)arg1;
- (id)startDownloadForURL:(id)arg1 isLive:(BOOL)arg2 liveVideoUrl:(id)arg3;
- (id)pollProgressForKey:(id)arg1;
- (id)cancelDownloadForURL:(id)arg1;
- (id)clearCacheForURL:(id)arg1;
- (id)saveToAlbumForURL:(id)arg1 isLive:(BOOL)arg2 liveVideoUrl:(id)arg3;
- (void)getTileForKey:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5 completion:(id /* block */)arg6;
- (BOOL)isTunnelActive;
- (BOOL)tryInterceptSaveOriginImage:(id)arg1;
- (void)removeSaveContextForOriginURL:(id)arg1;
- (id)tileCache;
- (void)setTileCache:(id)arg1;
- (id)decoder;
- (void)setDecoder:(id)arg1;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (id)store;
- (void)setStore:(id)arg1;
- (id)downloadCoordinator;
- (void)setDownloadCoordinator:(id)arg1;
- (id)tileServer;
- (void)setTileServer:(id)arg1;
- (double)lastTileActivityTime;
- (void)setLastTileActivityTime:(double)arg1;
- (BOOL)isSupportOriginImage;
- (void)setIsSupportOriginImage:(BOOL)arg1;
- (id)midUrlToSaveContext;
- (void)setMidUrlToSaveContext:(id)arg1;
- (void).cxx_destruct;
@end
