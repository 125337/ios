@interface WCFinderInteractiveHeader : UIView <WCFinderTabSwitchViewDataSource, WCFinderTabSwitchViewDelegate>
{
    id <WCFinderInteractiveHeaderDelegate> _delegate; // +0x8
    NSArray * _tabs; // +0x10
    WCFinderTabSwitchView * _tabSwitchView; // +0x18
}
- (id)init;
- (void)sizeToFit;
- (void)setTabs:(id)arg1;
- (long long)numberOfTabSwitchView:(id)arg1;
- (id)tabSwitchView:(id)arg1 customTabViewAtIndex:(long long)arg2;
- (BOOL)onTabSwitchViewUserSelectIdx:(long long)arg1 oldIdx:(long long)arg2 animated:(BOOL)arg3 context:(void *)arg4 completion:(id /* block */)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabs;
- (id)tabSwitchView;
- (void)setTabSwitchView:(id)arg1;
- (void).cxx_destruct;
@end
