@interface WCFinderTabPageView : UIView <WCFinderTabPageViewBasicViewDelegate, WCFinderPageViewContainerDelegate, UIScrollViewDelegate>
{
    BOOL _alwaysDisplayTabContainer; // +0x8
    BOOL _delayPageViewCreateTime; // +0x9
    BOOL _scrollToSwitchTabEnabled; // +0xa
    BOOL _lazyLoadingDisabled; // +0xb
    BOOL _pageViewContainerBounceDisabled; // +0xc
    BOOL _autoResizeMinContentSizeDisabled; // +0xd
    BOOL _enableHeaderViewBounce; // +0xe
    BOOL _enableFixHeaderWidth; // +0xf
    BOOL _tabViewFollowScrollDisabled; // +0x10
    BOOL _tabViewContainerBlurEffectEnabled; // +0x11
    id <WCFinderTabPageViewDataSource> _dataSource; // +0x18
    id <WCFinderTabPageViewDelegate> _delegate; // +0x20
    UIColor * _tabViewContainerBackgroundColor; // +0x28
    UIColor * _tabViewContainerBlurColor; // +0x30
    unsigned long long _selectedIndex; // +0x38
    unsigned long long _selectedFilterIndex; // +0x40
    UIView * _headerView; // +0x48
    UIView<WCFinderTabPageViewBasicProtocol> * _tabViewContainer; // +0x50
    WCFinderPageViewContainer * _pageViewContainer; // +0x58
    double _topInset; // +0x60
    double _hoverOffset; // +0x68
    UIView * _tabViewContainerWithBlur; // +0x70
    UIView * _tabBlurView; // +0x78
    WCFinderEmptyTipsView * _emptyTipsView; // +0x80
    NSMutableDictionary * _index2PageViewDict; // +0x88
    NSMutableDictionary * _identifier2HeaderClassMap; // +0x90
    NSMutableDictionary * _identifier2TabContainerClassMap; // +0x98
    NSMutableDictionary * _identifier2TabClassMap; // +0xa0
    NSMutableDictionary * _identifier2PageClassMap; // +0xa8
    unsigned long long _tabCount; // +0xb0
    unsigned long long _preSelectIndex; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)registerClass:(Class)arg1 forHeaderViewIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forTabViewContainerIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forTabViewIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forPageViewIdentifier:(id)arg2;
- (id)dequeueHeaderViewWithIdentifier:(id)arg1;
- (id)dequeueTabViewContainerWithIdentifier:(id)arg1;
- (id)dequeueTabViewWithIdentifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)dequeuePageViewWithIdentifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reload;
- (void)updateTabViewContainerAlpha;
- (void)moveAllViewsAboveToTop;
- (void)moveAllViewsAboveToPageViewAtIndex:(unsigned long long)arg1;
- (id)pageViewContainer;
- (id)emptyTipsView;
- (id)identifier2HeaderClassMap;
- (id)identifier2TabContainerClassMap;
- (id)identifier2TabClassMap;
- (id)identifier2PageClassMap;
- (unsigned long long)numberOfTabPage;
- (double)getTopInset;
- (double)getHoverOffset;
- (double)heightForHeaderView;
- (id)getHeaderView;
- (double)lengthForHeaderViewChangeAlpha;
- (id)getEmptyTipsConfig;
- (double)heightForTabViewContainer;
- (id)getTabViewContainer;
- (id)getTabViewArray;
- (id)filterNameArrayAtIndex:(unsigned long long)arg1;
- (double)heightForTabViewAtIndex:(unsigned long long)arg1;
- (id)tabViewAtIndex:(unsigned long long)arg1;
- (id)pageViewAtIndex:(unsigned long long)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setScrollToSwitchTabEnabled:(BOOL)arg1;
- (void)setLazyLoadingDisabled:(BOOL)arg1;
- (void)setPageViewContainerBounceDisabled:(BOOL)arg1;
- (void)setTabViewContainerBlurColor:(id)arg1;
- (void)setTabViewContainerBlurEffectEnabled:(BOOL)arg1;
- (void)setSelectedFilterIndex:(unsigned long long)arg1;
- (void)finderTabPageView:(id)arg1 didSelectIndex:(unsigned long long)arg2 isTriggerByUser:(BOOL)arg3;
- (void)finderTabPageView:(id)arg1 didSelectFilterAtIndex:(unsigned long long)arg2;
- (id)finderPageViewContainer:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (double)heightOfDisableScrollPageArea;
- (void)finderPageViewContainerWillSwitchPage:(id)arg1 type:(unsigned long long)arg2;
- (void)finderPageViewContainerDidEndSwitchingPage:(id)arg1;
- (void)finderPageViewContainer:(id)arg1 switchPageViewFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)linkedContentOffsetYDidChange:(id)arg1;
- (void)onWillSwitchPageWithType:(unsigned long long)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)alwaysDisplayTabContainer;
- (void)setAlwaysDisplayTabContainer:(BOOL)arg1;
- (BOOL)delayPageViewCreateTime;
- (void)setDelayPageViewCreateTime:(BOOL)arg1;
- (BOOL)scrollToSwitchTabEnabled;
- (BOOL)lazyLoadingDisabled;
- (BOOL)pageViewContainerBounceDisabled;
- (BOOL)autoResizeMinContentSizeDisabled;
- (void)setAutoResizeMinContentSizeDisabled:(BOOL)arg1;
- (BOOL)enableHeaderViewBounce;
- (void)setEnableHeaderViewBounce:(BOOL)arg1;
- (BOOL)enableFixHeaderWidth;
- (void)setEnableFixHeaderWidth:(BOOL)arg1;
- (id)tabViewContainerBackgroundColor;
- (void)setTabViewContainerBackgroundColor:(id)arg1;
- (id)tabViewContainerBlurColor;
- (unsigned long long)selectedIndex;
- (BOOL)tabViewFollowScrollDisabled;
- (void)setTabViewFollowScrollDisabled:(BOOL)arg1;
- (unsigned long long)selectedFilterIndex;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)tabViewContainer;
- (void)setTabViewContainer:(id)arg1;
- (void)setPageViewContainer:(id)arg1;
- (double)topInset;
- (void)setTopInset:(double)arg1;
- (double)hoverOffset;
- (void)setHoverOffset:(double)arg1;
- (id)tabViewContainerWithBlur;
- (void)setTabViewContainerWithBlur:(id)arg1;
- (id)tabBlurView;
- (void)setTabBlurView:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (id)index2PageViewDict;
- (void)setIndex2PageViewDict:(id)arg1;
- (void)setIdentifier2HeaderClassMap:(id)arg1;
- (void)setIdentifier2TabContainerClassMap:(id)arg1;
- (void)setIdentifier2TabClassMap:(id)arg1;
- (void)setIdentifier2PageClassMap:(id)arg1;
- (BOOL)tabViewContainerBlurEffectEnabled;
- (unsigned long long)tabCount;
- (void)setTabCount:(unsigned long long)arg1;
- (unsigned long long)preSelectIndex;
- (void)setPreSelectIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
