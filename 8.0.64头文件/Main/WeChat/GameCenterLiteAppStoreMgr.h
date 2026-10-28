@interface GameCenterLiteAppStoreMgr : MMUserService <MMServiceProtocol>
{
    BOOL _coolStartFinish; // +0x8
    BOOL _background; // +0x9
    BOOL _disableStore; // +0xa
    id /* block */ _delayReleaseBlock; // +0x10
    NSString * _liteAppStoreAppId; // +0x18
    NSString * _liteAppStorePkgId; // +0x20
    NSMutableArray * _cachedEvent; // +0x28
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (BOOL)checkCreateStore;
- (void)releaseStore;
- (void)notifyGameEntryExpose:(id)arg1;
- (void)notifyGameEntryClick:(id)arg1;
- (void)notifyGameCenterExit:(id)arg1;
- (void)publishGlobalEventToAll:(id)arg1 params:(id)arg2;
- (BOOL)coolStartFinish;
- (void)setCoolStartFinish:(BOOL)arg1;
- (BOOL)background;
- (void)setBackground:(BOOL)arg1;
- (id /* block */)delayReleaseBlock;
- (void)setDelayReleaseBlock:(id /* block */)arg1;
- (id)liteAppStoreAppId;
- (void)setLiteAppStoreAppId:(id)arg1;
- (id)liteAppStorePkgId;
- (void)setLiteAppStorePkgId:(id)arg1;
- (BOOL)disableStore;
- (void)setDisableStore:(BOOL)arg1;
- (id)cachedEvent;
- (void)setCachedEvent:(id)arg1;
- (void).cxx_destruct;
@end
