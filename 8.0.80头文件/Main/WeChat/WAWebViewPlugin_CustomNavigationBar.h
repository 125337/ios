@interface WAWebViewPlugin_CustomNavigationBar : WAWebViewPluginBase <UIScrollViewDelegate>
{
    BOOL _webAppear; // +0x8
    UIScrollView * _scrollListener; // +0x10
    UIColor * _reservedBgColor; // +0x18
    long long _reservedStatusBar; // +0x20
    long long _reservedNavigationMode; // +0x28
    NSString * _reservedNavigationTitle; // +0x30
    BOOL _showShareMenu; // +0x38
    BOOL _showSellsDriving; // +0x39
    BOOL _listenTapStatusBar; // +0x3a
    BOOL _shouldUseDynamicPageShare; // +0x3b
    long long _shareMenuType; // +0x40
    long long _gameMenuStyle; // +0x48
}
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)changeStatusBarWhite:(BOOL)arg1;
- (void)__changeStatusBarWhite:(BOOL)arg1;
- (void)setListenTapStatusBar:(BOOL)arg1;
- (void)addWeAppStatusBarListener;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)setNavBarBackgroundColor:(id)arg1;
- (void)setNavBarElementAndStatusBarStyle:(long long)arg1;
- (void)setNavBarTitle:(id)arg1;
- (void)setShowShareMenu:(BOOL)arg1;
- (long long)shareMenuType;
- (void)setShareMenuType:(long long)arg1;
- (BOOL)showShareMenu;
- (BOOL)showSellsDriving;
- (void)setShowSellsDriving:(BOOL)arg1;
- (BOOL)listenTapStatusBar;
- (BOOL)shouldUseDynamicPageShare;
- (void)setShouldUseDynamicPageShare:(BOOL)arg1;
- (long long)gameMenuStyle;
- (void)setGameMenuStyle:(long long)arg1;
- (void).cxx_destruct;
@end
