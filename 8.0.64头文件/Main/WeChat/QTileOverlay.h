@interface QTileOverlay : NSObject <QOverlay>
{
    struct _boundingRect; // +0x8
    BOOL _isHighResoultionTile; // +0x28
    BOOL _enableReuseOnMultiLevel; // +0x29
    BOOL _toSetVisibleRange; // +0x2a
    int _minDataLevel; // +0x2c
    int _maxDataLevel; // +0x30
    int _minVisibleLevel; // +0x34
    int _maxVisibleLevel; // +0x38
    int _tileOverlayID; // +0x3c
    NSString * _URLTemplate; // +0x40
    NSString * _tileCacheDir; // +0x48
    long long _levelOffset; // +0x50
    QMediator * _mediator; // +0x58
    NSString * _tileSavePath; // +0x60
    NSCache * _tileCache; // +0x68
    QTileDataDownloader * _tileDownloader; // +0x70
    NSMutableDictionary * _downloadingTasks; // +0x78
    long long _searchDepth; // +0x80
}
+ (id)getTileOverlayCachePath;
- (id)URLForTilePath:(struct)arg1;
- (void)loadTileAtPath:(struct)arg1 result:(id /* block */)arg2;
- (void)cancelLoadOfTileAtPath:(struct)arg1;
- (void)setup;
- (id)init;
- (id)initWithURLTemplate:(id)arg1;
- (struct)boundingMapRect;
- (void)setTileCacheDir:(id)arg1;
- (void)setMinDataLevel:(int)arg1 maxDataLevel:(int)arg2;
- (void)setMinVisibleLevel:(int)arg1 maxVisibleLevel:(int)arg2;
- (void)setLevelOffset:(long long)arg1;
- (void)sendLoadTileAtPath:(struct)arg1 callback:(id /* block */)arg2;
- (void)sendCancelLoadOfTileAtPath:(struct)arg1;
- (id)keyForTilePath:(const struct *)arg1;
- (id)getDownloadTaskForTilePath:(const struct *)arg1;
- (void)setDownloadTask:(id)arg1 forTilePath:(const struct *)arg2;
- (void)removeDownloadTaskForTilePath:(const struct *)arg1;
- (BOOL)shouldRemoverTileOverlayCache;
- (void)removerTileOverlayCache;
- (void)removeMemoryCache;
- (void)onReceivedCacheVersion:(id)arg1;
- (id)tileSavePath;
- (id)loadTileCacheDataAtPath:(struct)arg1;
- (id)fakeUrlForPath:(struct)arg1;
- (void)onDownloadSuccess:(id)arg1 path:(const struct *)arg2 callback:(id /* block */)arg3 task:(id)arg4 tileKey:(id)arg5;
- (void)onDownloadFail:(id)arg1 path:(const struct *)arg2 callback:(id /* block */)arg3 task:(id)arg4 tileKey:(id)arg5;
- (BOOL)writeToDiskCache:(id)arg1 tileKey:(id)arg2;
- (id)URLTemplate;
- (void)setURLTemplate:(id)arg1;
- (BOOL)isHighResoultionTile;
- (void)setIsHighResoultionTile:(BOOL)arg1;
- (id)tileCacheDir;
- (BOOL)enableReuseOnMultiLevel;
- (void)setEnableReuseOnMultiLevel:(BOOL)arg1;
- (long long)levelOffset;
- (int)minDataLevel;
- (void)setMinDataLevel:(int)arg1;
- (int)maxDataLevel;
- (void)setMaxDataLevel:(int)arg1;
- (int)minVisibleLevel;
- (void)setMinVisibleLevel:(int)arg1;
- (int)maxVisibleLevel;
- (void)setMaxVisibleLevel:(int)arg1;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (void)setTileSavePath:(id)arg1;
- (int)tileOverlayID;
- (void)setTileOverlayID:(int)arg1;
- (BOOL)toSetVisibleRange;
- (void)setToSetVisibleRange:(BOOL)arg1;
- (id)tileCache;
- (void)setTileCache:(id)arg1;
- (id)tileDownloader;
- (void)setTileDownloader:(id)arg1;
- (id)downloadingTasks;
- (void)setDownloadingTasks:(id)arg1;
- (long long)searchDepth;
- (void)setSearchDepth:(long long)arg1;
- (void).cxx_destruct;
@end
