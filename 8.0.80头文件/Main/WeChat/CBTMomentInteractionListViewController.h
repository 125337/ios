@interface CBTMomentInteractionListViewController : MMUIViewController <CBTMomentInteractionListViewDelegate>
{
    BOOL _historyList; // +0x70
    unsigned int _displayedList; // +0x74
    UIScrollView * _scrollView; // +0x78
    NSMutableArray * _listViewArr; // +0x80
    UIView * _navSepLine; // +0x88
    CBTMomentTabBar * _tabBar; // +0x90
}
- (id)initWithIsHistoryList:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)clearRedDotWithListType:(unsigned int)arg1;
- (id)getListWithType:(unsigned int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initContentViews;
- (void)setupTitleView;
- (void)initNavibarSepLine;
- (void)setupScrollView;
- (void)setupListViews;
- (void)updateContentToIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (BOOL)shouldHideNavigationBar;
- (BOOL)useCustomNavibar;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)onClickInteractionInfo:(id)arg1;
- (BOOL)isHistoryList;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)listViewArr;
- (void)setListViewArr:(id)arg1;
- (id)navSepLine;
- (void)setNavSepLine:(id)arg1;
- (id)tabBar;
- (void)setTabBar:(id)arg1;
- (BOOL)historyList;
- (void)setHistoryList:(BOOL)arg1;
- (unsigned int)displayedList;
- (void)setDisplayedList:(unsigned int)arg1;
- (void).cxx_destruct;
@end
