@interface MMWebViewPlugin_CustomNavigationBar : MMWebViewPluginBase
{
    id /* block */ _onClickRightNavItem; // +0x8
    NSMutableDictionary * _dictNavBarItemStateStorage; // +0x10
}
- (id)init;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)naviationBarItemCustomStateWithContextId:(id)arg1;
- (void)setNavBarColor:(id)arg1;
- (void)setLeftNavBarItemTitle:(id)arg1 color:(id)arg2;
- (void)setRightNavBarItemTitle:(id)arg1 color:(id)arg2 icon:(id)arg3 clickAction:(id /* block */)arg4;
- (void)setRightNavBarItemHidden:(BOOL)arg1;
- (void)setRightSearchItemHidden:(BOOL)arg1;
- (void)setRightNavBarItemDisableMinimizeBlock:(BOOL)arg1;
- (void)setTitle:(id)arg1 color:(id)arg2;
- (void)setTitleColorAndUpdate:(id)arg1;
- (void)setPageSubTitle:(id)arg1;
- (id)dictNavBarItemStateStorage;
- (void)setDictNavBarItemStateStorage:(id)arg1;
- (void).cxx_destruct;
@end
