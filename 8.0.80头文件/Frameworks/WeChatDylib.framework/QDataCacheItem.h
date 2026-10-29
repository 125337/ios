@interface QDataCacheItem : NSObject
{
    BOOL _shouldUpdateData; // +0x8
    int _sourceType; // +0xc
    NSData * _tileData; // +0x10
    NSString * _cacheStyleid; // +0x18
    NSString * _cacheVersion; // +0x20
    NSString * _tileVersion; // +0x28
    NSString * _tileSignature; // +0x30
    struct _tile; // +0x38
}
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (struct)tile;
- (void)setTile:(struct)arg1;
- (id)tileData;
- (void)setTileData:(id)arg1;
- (BOOL)shouldUpdateData;
- (void)setShouldUpdateData:(BOOL)arg1;
- (id)cacheStyleid;
- (void)setCacheStyleid:(id)arg1;
- (id)cacheVersion;
- (void)setCacheVersion:(id)arg1;
- (id)tileVersion;
- (void)setTileVersion:(id)arg1;
- (id)tileSignature;
- (void)setTileSignature:(id)arg1;
- (void).cxx_destruct;
@end
