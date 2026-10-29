@interface WCFinderDynamicFriendTabContainerViewController : WCFinderTLBaseViewController <IMMFontMgrExt>
{
    BOOL _containerSelected; // +0x70
    BOOL _transitionRunning; // +0x71
    BOOL _appearanceTransitionActive; // +0x72
    BOOL _tabBarCollapsed; // +0x73
    BOOL _tabBarTransitionAnimating; // +0x74
    NSArray * _tabInfos; // +0x78
    UIView * _tabBarClipView; // +0x80
    UIView * _tabBarBackgroundView; // +0x88
    UIScrollView * _tabScrollView; // +0x90
    NSMutableArray * _tabButtons; // +0x98
    NSMutableDictionary * _childPages; // +0xa0
    unsigned long long _selectedIndex; // +0xa8
    unsigned long long _pendingSelectedIndex; // +0xb0
    double _tabBarHeight; // +0xb8
    CADisplayLink * _transitionDisplayLink; // +0xc0
    WCFinderDynamicFriendTabViewController * _transitionOldPage; // +0xc8
    WCFinderDynamicFriendTabViewController * _transitionNewPage; // +0xd0
    unsigned long long _transitionTargetIndex; // +0xd8
    unsigned long long _tabBarTransitionGeneration; // +0xe0
    double _lastPanTranslationY; // +0xe8
    double _lastContentOffsetY; // +0xf0
    double _panDistanceY; // +0xf8
    long long _contentPanDirection; // +0x100
    unsigned long long _nextPageInType; // +0x108
    UIEdgeInsets _lastAdjustedContentInset; // +0x110
}
- (double)preferredBottomInsetForStandardOverlay;
- (id)initWithTabInfos:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)viewDidLoad;
- (void)onFontSizeChange;
- (void)viewDidLayoutSubviews;
- (void)setUpTabBar;
- (id)pageAtIndex:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2;
- (id)currentPage;
- (id)currentTabInfo;
- (double)visibleSubtabOcclusionHeight;
- (void)onContentPan:(id)arg1;
- (double)clampedContentOffsetY:(id)arg1;
- (void)accumulateContentMotionY:(double)arg1;
- (void)contentScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)contentScrollViewDidScroll:(id)arg1;
- (void)contentScrollViewDidEndDecelerating:(id)arg1;
- (void)resetContentMotion;
- (void)setTabBarCollapsed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)onTabButtonTapped:(id)arg1;
- (void)prepareNextPageInType:(unsigned long long)arg1;
- (BOOL)selectDefaultTabForBubble;
- (void)switchToIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)startTransitionDisplayLink;
- (void)stopTransitionDisplayLink;
- (void)updateTransitionTabAppearance:(id)arg1;
- (void)finishRunningTransitionIfNeeded;
- (void)tabViewControllerSelectionDidChange:(BOOL)arg1;
- (void)updateTabViewByHalfScreenIsShow:(BOOL)arg1;
- (void)prepareForTopRefresh;
- (void)refreshHeadOnScrolltoTop:(long long)arg1;
- (BOOL)triggerRefreshLogic:(long long)arg1 toTab:(long long)arg2;
- (void)markNeedReloadTeenagerModeChange;
- (long long)currentVCTabType;
- (int)feedViewControllerScene;
- (id)getCommonViewModel;
- (id)getCurViewModelLastBuff;
- (BOOL)tabViewControllerGetSelectState;
- (void)tabViewControllerStopCurrentPlayVideo;
- (void)tabViewControllerWillDisappear:(unsigned long long)arg1;
- (void)tabViewControllerRecordEnterInfo;
- (BOOL)isTopRrefreshing;
- (BOOL)isCurrentMediaBeginPlayed;
- (void)resetRefreshState;
- (void)adjustPortraitUIIfNeeded;
- (void)showPlayRatePanel;
- (unsigned long long)tabViewControllerGetCurTableViewVisibleTopIndex;
- (id)contentScrollView;
- (id)getCurrentContentVM;
- (id)getCurrentDataItemWithSessionBuffer;
- (id)currentFeedMediaCell;
- (void)markHighEntropyExposeEndType:(int)arg1;
- (id)currentFeedContentVM;
- (void)reportFullStatsImmediately;
- (void)updateCurrentStats;
- (double)pauseCurrentPlayingFeedReturnPalybackTime;
- (long long)supportedInterfaceStyle;
- (void)refreshNavBarAppearanceForCurrentTab;
- (id)tabInfos;
- (void)setTabInfos:(id)arg1;
- (id)tabBarClipView;
- (void)setTabBarClipView:(id)arg1;
- (id)tabBarBackgroundView;
- (void)setTabBarBackgroundView:(id)arg1;
- (id)tabScrollView;
- (void)setTabScrollView:(id)arg1;
- (id)tabButtons;
- (void)setTabButtons:(id)arg1;
- (id)childPages;
- (void)setChildPages:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (BOOL)containerSelected;
- (void)setContainerSelected:(BOOL)arg1;
- (BOOL)transitionRunning;
- (void)setTransitionRunning:(BOOL)arg1;
- (unsigned long long)pendingSelectedIndex;
- (void)setPendingSelectedIndex:(unsigned long long)arg1;
- (double)tabBarHeight;
- (void)setTabBarHeight:(double)arg1;
- (id)transitionDisplayLink;
- (void)setTransitionDisplayLink:(id)arg1;
- (id)transitionOldPage;
- (void)setTransitionOldPage:(id)arg1;
- (id)transitionNewPage;
- (void)setTransitionNewPage:(id)arg1;
- (unsigned long long)transitionTargetIndex;
- (void)setTransitionTargetIndex:(unsigned long long)arg1;
- (BOOL)appearanceTransitionActive;
- (void)setAppearanceTransitionActive:(BOOL)arg1;
- (BOOL)tabBarCollapsed;
- (void)setTabBarCollapsed:(BOOL)arg1;
- (BOOL)tabBarTransitionAnimating;
- (void)setTabBarTransitionAnimating:(BOOL)arg1;
- (unsigned long long)tabBarTransitionGeneration;
- (void)setTabBarTransitionGeneration:(unsigned long long)arg1;
- (double)lastPanTranslationY;
- (void)setLastPanTranslationY:(double)arg1;
- (double)lastContentOffsetY;
- (void)setLastContentOffsetY:(double)arg1;
- (UIEdgeInsets)lastAdjustedContentInset;
- (void)setLastAdjustedContentInset:(UIEdgeInsets)arg1;
- (double)panDistanceY;
- (void)setPanDistanceY:(double)arg1;
- (long long)contentPanDirection;
- (void)setContentPanDirection:(long long)arg1;
- (unsigned long long)nextPageInType;
- (void)setNextPageInType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
