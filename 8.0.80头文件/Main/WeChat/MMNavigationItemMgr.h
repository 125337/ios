@interface MMNavigationItemMgr : MMRootService <MMServiceProtocol>
{
    NSMapTable * _navBarItemMap; // +0x8
}
- (void)onServiceInit;
- (void)setItems:(id)arg1 forNavigationBar:(id)arg2;
- (id)filterItems:(id)arg1 forNavigationBar:(id)arg2;
- (id)tryCopyItem:(id)arg1;
- (id)tryCopyButtonItem:(id)arg1;
- (id)navBarItemMap;
- (void)setNavBarItemMap:(id)arg1;
- (void).cxx_destruct;
@end
