@interface WCFinderSearchTabCellHeader : UICollectionReusableView <WCFinderTabSwitchViewDelegate, WCFinderTabSwitchViewDataSource>
{
    id <WCFinderSearchTabCellHeaderDelegate> _delegate; // +0x8
    NSArray * _tabs; // +0x10
    WCFinderTabSwitchView * _switchView; // +0x18
}
+ (double)displayHeightForTab;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setTabs:(id)arg1;
- (long long)numberOfTabSwitchView:(id)arg1;
- (id)tabSwitchView:(id)arg1 titleForTabAtIndex:(long long)arg2;
- (id)tabSwitchView:(id)arg1 uniqueObjectForIndex:(unsigned long long)arg2;
- (BOOL)onTabSwitchViewUserSelectIdx:(long long)arg1 oldIdx:(long long)arg2 animated:(BOOL)arg3 context:(void *)arg4 completion:(id /* block */)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabs;
- (id)switchView;
- (void)setSwitchView:(id)arg1;
- (void).cxx_destruct;
@end

