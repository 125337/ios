@interface QWorldTileOverlayDataProvider : NSObject
{
    NSString * _styleId; // +0x8
    NSString * _scene; // +0x10
    NSString * _version; // +0x18
    NSString * _urlTemplate; // +0x20
    NSCache * _memoryCache; // +0x28
    QDataCacheWorldMap * _dataCache; // +0x30
    NSArray * _langCandidates; // +0x38
    NSMutableDictionary * _downloadingTasks; // +0x40
}
- (id)init;
- (id)initWithConfig:(id)arg1;
- (id)languageString:(long long)arg1;
- (id)URLForTilePath:(struct)arg1;
- (void)downloadTileImageAtPath:(struct)arg1 result:(id /* block */)arg2;
- (id)loadTileImageAtPath:(struct)arg1;
- (void)saveTileData:(id)arg1 atPath:(struct)arg2;
- (struct)tileForPath:(struct)arg1;
- (id)keyForTilePath:(const struct *)arg1;
- (int)tileType;
- (void)resetDataWithConfig:(id)arg1;
- (id)generateUrl:(id)arg1;
- (void)setDownloadTask:(id)arg1 forTilePath:(const struct *)arg2;
- (void)removeDownloadTaskForTilePath:(const struct *)arg1;
- (id)getDownloadTaskForTilePath:(const struct *)arg1;
- (void)onStyleChanged:(unsigned long long)arg1;
- (id)styleId;
- (void)setStyleId:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)urlTemplate;
- (void)setUrlTemplate:(id)arg1;
- (id)memoryCache;
- (void)setMemoryCache:(id)arg1;
- (id)dataCache;
- (void)setDataCache:(id)arg1;
- (id)langCandidates;
- (void)setLangCandidates:(id)arg1;
- (id)downloadingTasks;
- (void)setDownloadingTasks:(id)arg1;
- (void).cxx_destruct;
@end
