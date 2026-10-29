@interface WAJSContextPlugin_CustomTabBar : WAJSContextPluginBase <WCMainWindowExt, WeAppCustomTabbarDelegate>
{
    BOOL _m_IsChangeTab; // +0x8
    BOOL _needAnimation; // +0x9
    BOOL _m_IsCustomRender; // +0xa
    BOOL _isTopTabBar; // +0xb
    BOOL _bIsLoading; // +0xc
    BOOL _isTabbarAnimating; // +0xd
    BOOL _isTabbarVisible; // +0xe
    BOOL _needAdaptIpad; // +0xf
    BOOL _shouldIgnoreBottomSafeInset; // +0x10
    long long m_TabItemCount; // +0x18
    id /* block */ _m_onLoadTabThenSwitch; // +0x20
    WeAppCustomTabbar * _myCustomTabBar; // +0x28
    long long _mainTabIndex; // +0x30
    long long _curSelectedIndex; // +0x38
    WAWebViewController * _skylineRoutingVC; // +0x40
    WeAppCustomTabSwitchParams * _delaySwitchParams; // +0x48
    UIView * _topCoverBoderLine; // +0x50
    UIView * _topSelectedLine; // +0x58
    UIColor * _textColor; // +0x60
    UIColor * _selectTextColor; // +0x68
    NSMutableArray * _arrTabItemData; // +0x70
    NSMutableDictionary * _dicTabWebView; // +0x78
}
- (id)getTabbar;
- (void)dealloc;
- (BOOL)shouldUseIpadTabbarLayout;
- (double)tabbarHeight;
- (BOOL)currentHasTabPage;
- (id)getAllTabWebViews;
- (id)getSkylineTabWebView;
- (void)clearTabWebView;
- (void)clearTabWebViewFrom:(id)arg1;
- (BOOL)isSelectedMainTab;
- (void)selectMainTab;
- (BOOL)selectTabWithIndex:(long long)arg1 routeId:(id)arg2;
- (void)onSkylineRouteDoneByTimeout:(id)arg1;
- (void)onSkylineRouteDone:(id)arg1 webviewId:(unsigned int)arg2;
- (void)switchTabAfterSkylineRouteDone:(id)arg1;
- (void)selectTabWithPagePath:(id)arg1 routeId:(id)arg2;
- (BOOL)isTabCreatedWithPagePath:(id)arg1;
- (id)getSelectedTabWebView;
- (BOOL)isTabWebVC:(id)arg1;
- (BOOL)isTabPath:(id)arg1;
- (id)getTabWebViewAtIndex:(unsigned long long)arg1;
- (long long)findIndexByTabWebView:(id)arg1;
- (BOOL)isLoadingTab;
- (id)init;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (BOOL)constructByFirstWAWebviewVC:(id)arg1;
- (void)createChildVCTabBarWithItems:(id)arg1 mainTabIndex:(long long)arg2 position:(id)arg3 backgroundColor:(id)arg4 textColor:(id)arg5 selectedTextColor:(id)arg6 borderColor:(id)arg7;
- (void)setItemAtTabIndex:(long long)arg1 text:(id)arg2 iconImage:(id)arg3 selectIconImage:(id)arg4;
- (void)setTabBarStyleWithTextColor:(id)arg1 selectTextColor:(id)arg2 backgroundColor:(id)arg3 borderColor:(id)arg4;
- (CGRect)currentTabBarFrame;
- (void)bringTabBarToFront;
- (void)updateTopTabBarSelectedLinePosition;
- (BOOL)tabBar:(id)arg1 didSelectIndex:(long long)arg2;
- (BOOL)switchToTabItem:(long long)arg1;
- (void)switchToTabItemByReusingTabVC:(id)arg1 toIndex:(long long)arg2;
- (BOOL)switchTabItemToVC:(id)arg1 toIndex:(long long)arg2 fromVC:(id)arg3 navigationController:(id)arg4;
- (void)frameChanged;
- (BOOL)loadTabWebViewWithIndex:(long long)arg1 routeId:(id)arg2;
- (void)performDelaySwitchTabItemWithWebVC:(id)arg1 index:(long long)arg2 isFromRewriteRouteReuse:(BOOL)arg3;
- (void)cancelPendingTabSwitch;
- (void)doSwitchTabItemWithParams:(id)arg1;
- (id)imageWithImage:(id)arg1 scaledToSize:(CGSize)arg2;
- (void)setTabBarVisible:(BOOL)arg1;
- (void)setTabBarVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)isVisible;
- (void)updateBadgeByIndex:(long long)arg1;
- (void)setTabBarBadgeString:(id)arg1 badgeColor:(id)arg2 forIndex:(long long)arg3;
- (void)setTabBarBadgeAsRedDotForIndex:(long long)arg1;
- (void)hideBadgeOnItemIndex:(long long)arg1;
- (void)layoutTabbarByWAWebviewVC:(id)arg1;
- (id)genTabbarItemsWithtextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)changeColorAppearance;
- (void)setBorderStyle:(id)arg1;
- (void)scaleTabbarItem:(BOOL)arg1 isLandscape:(BOOL)arg2;
- (void)removeTabPage:(id)arg1;
- (BOOL)rewriteRouteForTabPage:(id)arg1 toTabPageUrl:(id)arg2 fromLaunchScene:(BOOL)arg3 error:(id *)arg4;
- (long long)findTabIndexWithPageUrl:(id)arg1;
- (long long)m_TabItemCount;
- (void)setM_TabItemCount:(long long)arg1;
- (BOOL)m_IsChangeTab;
- (void)setM_IsChangeTab:(BOOL)arg1;
- (BOOL)needAnimation;
- (void)setNeedAnimation:(BOOL)arg1;
- (BOOL)m_IsCustomRender;
- (void)setM_IsCustomRender:(BOOL)arg1;
- (id /* block */)m_onLoadTabThenSwitch;
- (void)setM_onLoadTabThenSwitch:(id /* block */)arg1;
- (id)myCustomTabBar;
- (void)setMyCustomTabBar:(id)arg1;
- (BOOL)isTopTabBar;
- (void)setIsTopTabBar:(BOOL)arg1;
- (long long)mainTabIndex;
- (void)setMainTabIndex:(long long)arg1;
- (long long)curSelectedIndex;
- (void)setCurSelectedIndex:(long long)arg1;
- (BOOL)bIsLoading;
- (void)setBIsLoading:(BOOL)arg1;
- (id)skylineRoutingVC;
- (void)setSkylineRoutingVC:(id)arg1;
- (id)delaySwitchParams;
- (void)setDelaySwitchParams:(id)arg1;
- (id)topCoverBoderLine;
- (void)setTopCoverBoderLine:(id)arg1;
- (id)topSelectedLine;
- (void)setTopSelectedLine:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)selectTextColor;
- (void)setSelectTextColor:(id)arg1;
- (id)arrTabItemData;
- (void)setArrTabItemData:(id)arg1;
- (id)dicTabWebView;
- (void)setDicTabWebView:(id)arg1;
- (BOOL)isTabbarAnimating;
- (void)setIsTabbarAnimating:(BOOL)arg1;
- (BOOL)isTabbarVisible;
- (void)setIsTabbarVisible:(BOOL)arg1;
- (BOOL)needAdaptIpad;
- (void)setNeedAdaptIpad:(BOOL)arg1;
- (BOOL)shouldIgnoreBottomSafeInset;
- (void)setShouldIgnoreBottomSafeInset:(BOOL)arg1;
- (void).cxx_destruct;
@end
