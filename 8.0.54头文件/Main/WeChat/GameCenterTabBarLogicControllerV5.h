@interface GameCenterTabBarLogicControllerV5 : MMObject <IGameCenterExt>
{
    id /* block */ _tabItemCompleteBlock; // +0x8
}
- (id)init;
- (id)getHomeTabItemsFromCache;
- (void)requestHomeTabItems:(id /* block */)arg1;
- (void)onFetchGameCenterHomeTabNavV5:(id)arg1 error:(long long)arg2;
- (void).cxx_destruct;
@end

