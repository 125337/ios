@interface GameLifeTabBarViewController : GameCenterNativeVc <MMWebViewPresetUIChildViewDelegate, GameCenterBannerNavBarProtocol, MMTabBarDelegate, UITabBarDelegate, UIGestureRecognizerDelegate, IGameCenterMsgNotifyExt, MMWebViewPresetUIChildViewDelegate, IGroupServerUpdateExt, IHttpCacheExt, IGameLifeTabNavIconDownloadExt>
{
    MMUIViewController * _currentVc; // +0x68
    BOOL _useBlackNav; // +0x70
    NSMutableDictionary * _navConfigDic; // +0x78
    NSDictionary * _extra; // +0x80
    GameLifeTabBarLogicController * _tabBarLogicController; // +0x88
    NSMutableDictionary * _tab2JumpType; // +0x90
    int _currentSelectedIndex; // +0x98
    int _defaultIndex; // +0x9c
    unsigned long long _tabCount; // +0xa0
    GameCenterTabSettingControl_TabConfiguration * _tabBarConfiguration; // +0xa8
    MMTabBar * _tabBar; // +0xb0
    int _tabBarHeight; // +0xb8
    BOOL _switchTabing; // +0xbc
    BOOL _diableSwtichTab; // +0xbd
    BOOL _hideTab; // +0xbe
    NSMutableArray * _tabBarItemViewArray; // +0xc0
    int _chatTabIndex; // +0xc8
    NSMutableDictionary * _urlParams; // +0xd0
    NSString * _preloadExtraData; // +0xd8
    BOOL _gameTabNavigationBarHidden; // +0xe0
    BOOL _openNewMsgVc; // +0xe1
    BOOL _viewHasAppear; // +0xe2
    BOOL _isFromGameLifeRedDot; // +0xe3
    unsigned int _sourceScene; // +0xe4
    NSMutableDictionary * _tabIndex2viewControllerDict; // +0xe8
    GameLifeTabBarConfig * _barConfig; // +0xf0
    NSString * _defaultTabUrl; // +0xf8
    id <UIViewControllerAnimatedTransitioning> _customPopAndPushAnimation; // +0x100
    UIView * _oriTitleView; // +0x108
    id /* block */ _interceptCloseBlock; // +0x110
    double _startTime; // +0x118
    double _endTime; // +0x120
    double _lastVisibileTime; // +0x128
    double _costTime; // +0x130
    GameCenterTabSettingControl_TabSetting * _defaultTabSetting; // +0x138
    unsigned long long _chatPageStyle; // +0x140
    NSMutableDictionary * _prefetchIndexCgiDataDic; // +0x148
    unsigned long long _lastMsgUpdateTime; // +0x150
    unsigned long long _gameChatV3SelectTab; // +0x158
    NSDictionary * _redPointBusinessInfo; // +0x160
    GameCenterBaseMsg * _currentMsg; // +0x168
    UIView * _tabbarBgView; // +0x170
    UIView * _tabbarBgContainerView; // +0x178
    UIImageView * _tabbarBgImgView; // +0x180
    PAGView * _pagView; // +0x188
    JumpInfo * _homeBarJumpInfo; // +0x190
    double _gameTabHeight; // +0x198
    CGSize _bgViewSize; // +0x1a0
}
- (void)initNavConfig:(id)arg1 navConfig:(id)arg2;
- (id)handleIconLightColor;
- (id)handleIconDarkColor;
- (id)handleNavBgDynamicColor;
- (id)handleIconColorWithIconDark:(BOOL)arg1;
- (void)updateNavConfig:(long long)arg1;
- (void)onWebViewRightBarClick:(id)arg1;
- (void)onClickJSDefineRightNavItem:(id)arg1;
- (void)onClickTabSettingRightNavItem:(id)arg1;
- (void)setTitle:(id)arg1 viewController:(id)arg2;
- (id)navConfigForViewController:(id)arg1;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)onViewController:(id)arg1 recieveNavigationBarEvent:(id)arg2 params:(id)arg3;
- (void)setNavigationBarHidden:(id)arg1 params:(id)arg2;
- (void)switchViewUnderNav:(BOOL)arg1 forViewController:(id)arg2;
- (void)onWebViewController:(id)arg1 recieveNavigationBarEvent:(id)arg2 params:(id)arg3;
- (void)setPageTitle:(id)arg1 params:(id)arg2;
- (void)setNavBarColor:(id)arg1 params:(id)arg2;
- (void)setNavBarButtons:(id)arg1 params:(id)arg2;
- (BOOL)decodeBase64ToImage:(id)arg1 retImage:(id *)arg2;
- (id)initWIthBarConfig:(id)arg1;
- (id)getReddotExternPage;
- (id)getHomeUrlParams;
- (void)gameTabApplicationWillEnterForeground;
- (void)calculateVisibleTime;
- (void)gameTabApplicationDidEnterBackground;
- (void)unregisterExtension;
- (void)dealloc;
- (void)initTabData;
- (void)prefetchGameIndexPageCgiIfNeed;
- (id)keyForChatTab:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)isVcRealWebViewController:(id)arg1;
- (BOOL)isLiteViewController:(id)arg1;
- (id)getWebViewControllerIfMatch:(id)arg1;
- (id)getSubWebViewControllerArray;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)onGameLifeTabBarPoped;
- (void)adjustTableViewInset:(id)arg1;
- (void)setupTabBar;
- (id)currentLiteAppVc;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTapTabBgView;
- (void)handleTabbarBgImgDownload:(id)arg1 error:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)onBgFileDownload;
- (void)updateBgViewWithSize;
- (void)getPagBgDataWithHttpUrl:(id)arg1;
- (void)configPagViewAndPlayWithData:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (id)getTabBar;
- (void)setupChildViewContoller;
- (id)createLiteAppControllerWithLiteAppParam:(id)arg1 pkgId:(id)arg2;
- (void)preloadWebViewController:(id)arg1 index:(int)arg2;
- (id)getServiceCenterLiteAppInfo;
- (id)getCenterHomeLiteAppInfo;
- (id)configureItemLiteAppInfo:(id)arg1 type:(int)arg2;
- (id)createSubWebViewController:(id)arg1 show:(BOOL)arg2 index:(int)arg3;
- (void)addViewControllerToDic:(id)arg1 index:(int)arg2 navConfig:(id)arg3;
- (void)updatePresetUIwithImmersiveBgColor:(id)arg1 presetUI:(id)arg2;
- (id)getPreInjectDictWIthShow:(BOOL)arg1 tabSetting:(id)arg2;
- (id)getTabInfoStr;
- (id)createWebViewController:(id)arg1 index:(int)arg2 show:(BOOL)arg3 urlImmersiveBgColor:(id)arg4;
- (id)mm_defaultBackgroundColor;
- (void)initDefaultTab;
- (void)addSubViewControllerAndView:(id)arg1;
- (BOOL)switchToTabWithKey:(id)arg1 params:(id)arg2;
- (BOOL)switchTab:(int)arg1;
- (void)notifyLiteVisibleChnge:(BOOL)arg1 vc:(id)arg2;
- (void)notifyWebViewControllBackgroud:(id)arg1;
- (void)jumpToWeapp:(id)arg1 path:(id)arg2;
- (CGRect)tabBarBtnFrameAtIndex:(long long)arg1;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (void)hideTabBar:(BOOL)arg1;
- (void)disableSwitchTabBar:(BOOL)arg1;
- (void)getRedPointInfoBy:(id)arg1 toTotalUnReadCnt:(unsigned int *)arg2 showSmallRedDot:(BOOL *)arg3;
- (void)updateNavItemConfig:(id)arg1 withTotalUnReadCnt:(unsigned int)arg2 showSmallRedDot:(BOOL)arg3;
- (void)updateMessageRedPoint:(id)arg1;
- (void)recordExitTabKeyIfNeed;
- (id)getReEnterTabKey;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)OnClose;
- (id)currentVc;
- (void)onConfigNavgationIconDownloaded;
- (void)onMyChatRoomStatusUpdate:(id)arg1;
- (void)onGameCenterMessageRedPointInfoChange:(id)arg1;
- (void)reportTabClick:(unsigned int)arg1 TabItem:(id)arg2;
- (void)reportExposure:(id)arg1;
- (void)reportGameLifeTabPoped;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)tabIndex2viewControllerDict;
- (void)setTabIndex2viewControllerDict:(id)arg1;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (id)barConfig;
- (void)setBarConfig:(id)arg1;
- (id)defaultTabUrl;
- (void)setDefaultTabUrl:(id)arg1;
- (id)customPopAndPushAnimation;
- (void)setCustomPopAndPushAnimation:(id)arg1;
- (id)oriTitleView;
- (void)setOriTitleView:(id)arg1;
- (id /* block */)interceptCloseBlock;
- (void)setInterceptCloseBlock:(id /* block */)arg1;
- (BOOL)gameTabNavigationBarHidden;
- (void)setGameTabNavigationBarHidden:(BOOL)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (double)lastVisibileTime;
- (void)setLastVisibileTime:(double)arg1;
- (double)costTime;
- (void)setCostTime:(double)arg1;
- (id)defaultTabSetting;
- (void)setDefaultTabSetting:(id)arg1;
- (BOOL)openNewMsgVc;
- (void)setOpenNewMsgVc:(BOOL)arg1;
- (BOOL)viewHasAppear;
- (void)setViewHasAppear:(BOOL)arg1;
- (BOOL)isFromGameLifeRedDot;
- (void)setIsFromGameLifeRedDot:(BOOL)arg1;
- (unsigned long long)chatPageStyle;
- (void)setChatPageStyle:(unsigned long long)arg1;
- (id)prefetchIndexCgiDataDic;
- (void)setPrefetchIndexCgiDataDic:(id)arg1;
- (unsigned long long)lastMsgUpdateTime;
- (void)setLastMsgUpdateTime:(unsigned long long)arg1;
- (unsigned long long)gameChatV3SelectTab;
- (void)setGameChatV3SelectTab:(unsigned long long)arg1;
- (id)redPointBusinessInfo;
- (void)setRedPointBusinessInfo:(id)arg1;
- (id)currentMsg;
- (void)setCurrentMsg:(id)arg1;
- (id)tabbarBgView;
- (void)setTabbarBgView:(id)arg1;
- (id)tabbarBgContainerView;
- (void)setTabbarBgContainerView:(id)arg1;
- (CGSize)bgViewSize;
- (void)setBgViewSize:(CGSize)arg1;
- (id)tabbarBgImgView;
- (void)setTabbarBgImgView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)homeBarJumpInfo;
- (void)setHomeBarJumpInfo:(id)arg1;
- (double)gameTabHeight;
- (void)setGameTabHeight:(double)arg1;
- (void).cxx_destruct;
@end

