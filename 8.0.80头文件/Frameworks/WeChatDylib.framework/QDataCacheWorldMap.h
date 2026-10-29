@interface QDataCacheWorldMap : QDataCacheBase
{
    int _sceneType; // +0x8
}
+ (void)clearCache;
+ (BOOL)onReceivedSourceConfig:(id)arg1 isBingSource:(BOOL)arg2;
- (id)initWithVersion:(id)arg1;
- (int)tileType;
- (int)sceneType;
- (void)setSceneType:(int)arg1;
@end
