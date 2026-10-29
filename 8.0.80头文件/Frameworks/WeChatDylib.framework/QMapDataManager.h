@interface QMapDataManager : NSObject
{
    BOOL _toCheckOfflineMapFolder; // +0x8
    QMapContext * _mapContext; // +0x10
    id <QMapDataDelegate> _delegate; // +0x18
    QUniversalMapCounter * _universalMapCounter; // +0x20
    QTileDataDownloader * _tileDownloader; // +0x28
    long long _maxCacheAge; // +0x30
    unsigned long long _maxCacheSize; // +0x38
    NSString * _cacheFolder; // +0x40
}
- (id)initWithMapContext:(id)arg1;
- (void)dealloc;
- (void)reloadConfig;
- (BOOL)needsReloadConfig;
- (void)findAndDeleteOutdatedCache:(id)arg1;
- (void)clearOutdatedCache;
- (void)cancelDownloadTile:(id)arg1;
- (void)downloadTile:(id)arg1;
- (void)notifyDidFailLoadingWithError:(id)arg1;
- (void)saveTileData:(id)arg1 withUrl:(id)arg2;
- (void)copyOfflineMapResource:(id)arg1;
- (void)clearOfflineMapResource:(id)arg1;
- (void)copyOfflineMapLocalResource;
- (void)recordOfflineMapCount;
- (id)mapContext;
- (void)setMapContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)universalMapCounter;
- (void)setUniversalMapCounter:(id)arg1;
- (id)tileDownloader;
- (void)setTileDownloader:(id)arg1;
- (long long)maxCacheAge;
- (void)setMaxCacheAge:(long long)arg1;
- (unsigned long long)maxCacheSize;
- (void)setMaxCacheSize:(unsigned long long)arg1;
- (id)cacheFolder;
- (void)setCacheFolder:(id)arg1;
- (BOOL)toCheckOfflineMapFolder;
- (void)setToCheckOfflineMapFolder:(BOOL)arg1;
- (void).cxx_destruct;
@end
