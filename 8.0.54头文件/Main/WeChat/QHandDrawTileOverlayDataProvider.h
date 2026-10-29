@interface QHandDrawTileOverlayDataProvider : NSObject
{
    NSString * _version; // +0x8
    QDataCacheHandDrawMap * _dataCache; // +0x10
}
- (id)init;
- (id)URLForTilePath:(struct)arg1;
- (id)loadTileImageAtPath:(struct)arg1;
- (void)saveTileData:(id)arg1 atPath:(struct)arg2;
- (struct)tileForPath:(struct)arg1;
- (int)tileType;
- (void)resetData;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)dataCache;
- (void)setDataCache:(id)arg1;
- (void).cxx_destruct;
@end

