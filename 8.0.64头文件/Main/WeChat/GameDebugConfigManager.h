@interface GameDebugConfigManager : MMRootService <MMServiceProtocol>
{
    GameMultiOptionItem * _gameWkInterceptOptionItem; // +0x8
    GameMultiOptionItem * _loadHtmlOptionItem; // +0x10
}
- (id)init;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)getBoolForKey:(id)arg1;
- (id)getStringForKey:(id)arg1;
- (BOOL)measurePerformance;
- (id)gameWkInterceptOptionItem;
- (void)setGameWkInterceptOptionItem:(id)arg1;
- (id)loadHtmlOptionItem;
- (void)setLoadHtmlOptionItem:(id)arg1;
- (void).cxx_destruct;
@end
