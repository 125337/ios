@interface QDataCacheSql : NSObject
{
    QDataStoreSelectorWorldmap * _worldmapNormal; // +0x8
    QDataStoreSelectorWorldmapDark * _worldmapDark; // +0x10
    QDataStoreSelectorHandDrawMap * _handDrawMap; // +0x18
    QDataStoreSelectorBingWorldmap * _bingmap; // +0x20
    QDataStoreSelectorCustomWorldmap * _customWorldmap; // +0x28
    NSString * _dbpath; // +0x30
    QDBDatabase * _db; // +0x38
}
+ (id)singlton;
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (void)initData;
- (void)initTableWithName:(id)arg1;
- (void)open;
- (void)close;
- (id)selectorForSourceType:(int)arg1;
- (id)decryptItem:(id)arg1;
- (id)encryptItem:(id)arg1;
- (void)resetMapDataForSelector:(id)arg1;
- (void)resetWorldMapDataForType:(int)arg1;
- (void)resetHandDrawMapData;
- (BOOL)executeQuery:(id)arg1;
- (BOOL)executeUpdate:(id)arg1;
- (BOOL)executeInsert:(id)arg1;
- (id)worldmapNormal;
- (void)setWorldmapNormal:(id)arg1;
- (id)worldmapDark;
- (void)setWorldmapDark:(id)arg1;
- (id)handDrawMap;
- (void)setHandDrawMap:(id)arg1;
- (id)bingmap;
- (void)setBingmap:(id)arg1;
- (id)customWorldmap;
- (void)setCustomWorldmap:(id)arg1;
- (id)dbpath;
- (void)setDbpath:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (void).cxx_destruct;
@end

