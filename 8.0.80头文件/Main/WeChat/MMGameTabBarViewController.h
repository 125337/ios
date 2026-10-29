@interface MMGameTabBarViewController : MMGameUIViewController
{
    BOOL _bHasH5FloatLayer; // +0x70
    int _currentSelectedIndex; // +0x74
    MMUIViewController * _homeVC; // +0x78
    MMUIViewController * _webVC; // +0x80
    GameCenterTabBarLogicControllerV5 * _tabBarLogicControllerV5; // +0x88
    NSArray * _tabItemArrayFromCache; // +0x90
    NSMutableDictionary * _tabIndex2ViewController; // +0x98
    NSMutableDictionary * _tabIndex2Button; // +0xa0
    MMUIView * _tabBarParentView; // +0xa8
    MMUIViewController * _nativeHomeVC; // +0xb0
    unsigned long long _tabCount; // +0xb8
}
- (id)init;
- (id)initWithSourceScene:(unsigned int)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)AdjustTabBarUI;
- (void)initTabControllers:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initAllTabAndViewController:(id)arg1;
- (void)showH5FloatLayerWebViewControllerIfNeeded;
- (double)getTabBarHeight;
- (void)initTabBars:(id)arg1;
- (id)getOneTabBar:(int)arg1 TabItem:(id)arg2 OriginX:(double)arg3 OriginY:(double)arg4;
- (void)selectTabIndex:(int)arg1 ToIndex:(int)arg2;
- (void)setTabIndexHighlighted:(int)arg1;
- (void)setTabButtonHighlighted:(BOOL)arg1 TabButton:(id)arg2;
- (void)replaceFromViewController:(id)arg1 toViewController:(id)arg2 NewIndex:(int)arg3;
- (void)itemButtonTap:(id)arg1;
- (void)tabBarExposureReport:(id)arg1;
- (void)tabBarClickReport:(id)arg1;
- (id)homeVC;
- (void)setHomeVC:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (BOOL)bHasH5FloatLayer;
- (void)setBHasH5FloatLayer:(BOOL)arg1;
- (id)tabBarLogicControllerV5;
- (void)setTabBarLogicControllerV5:(id)arg1;
- (id)tabItemArrayFromCache;
- (void)setTabItemArrayFromCache:(id)arg1;
- (id)tabIndex2ViewController;
- (void)setTabIndex2ViewController:(id)arg1;
- (id)tabIndex2Button;
- (void)setTabIndex2Button:(id)arg1;
- (id)tabBarParentView;
- (void)setTabBarParentView:(id)arg1;
- (id)nativeHomeVC;
- (void)setNativeHomeVC:(id)arg1;
- (int)currentSelectedIndex;
- (void)setCurrentSelectedIndex:(int)arg1;
- (unsigned long long)tabCount;
- (void)setTabCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
