@interface WCTabBarBaseNavigationController : MMUINavigationController <UINavigationControllerDelegate>
{
    id <WCTabBarNavigationTransitionDelegate> _tabNavigationTransitionDelegate; // +0x8
}
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)isSelectedTabBarNavigationController;
- (void)prepareTransitionLayoutForViewController:(id)arg1 animated:(BOOL)arg2;
- (void)layoutNavigationContent;
- (void)layoutViewController:(id)arg1;
- (id)tabNavigationTransitionDelegate;
- (void)setTabNavigationTransitionDelegate:(id)arg1;
- (void).cxx_destruct;
@end
