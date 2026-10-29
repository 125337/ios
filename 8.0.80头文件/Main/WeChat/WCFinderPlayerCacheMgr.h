@interface WCFinderPlayerCacheMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _playerCaches; // +0x8
}
+ (id)cacheKeyForTid:(id)arg1 scene:(int)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cachePlayer:(id)arg1 forKey:(id)arg2;
- (void)removePlayerForKey:(id)arg1;
- (id)playerForKey:(id)arg1;
- (BOOL)isPlayerInCache:(id)arg1;
- (id)playerCaches;
- (void)setPlayerCaches:(id)arg1;
- (void).cxx_destruct;
@end
