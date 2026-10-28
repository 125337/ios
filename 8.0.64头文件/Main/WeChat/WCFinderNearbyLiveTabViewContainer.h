@interface WCFinderNearbyLiveTabViewContainer : UIView <WCFinderTabViewDelegate, WCFinderTabPageViewBasicProtocol>
{
    BOOL _showSearchEntry; // +0x8
    id <WCFinderTabPageViewBasicViewDelegate> delegate; // +0x10
    id <WCFinderNearbyLiveTabViewContainerDelegate> _containerDelegate; // +0x18
    UIScrollView * _tabContainer; // +0x20
    NSMutableArray * _tabViewArray; // +0x28
    unsigned long long _selectIndex; // +0x30
    UIView * _gradientView; // +0x38
    MMUIButton * _searchImageButtonView; // +0x40
    CAGradientLayer * _gradientLayer; // +0x48
}
- (id)initWithTabViewArray:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSearchView;
- (void)checkResetSearchLayer;
- (void)setSelectIndex:(unsigned long long)arg1;
- (unsigned long long)getSelectIndex;
- (void)adjustTabViewFrame;
- (void)setShowSearchEntry:(BOOL)arg1;
- (void)onClickSearchEntry:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)adjustContentOffsetWithTabView:(id)arg1;
- (id)tabContainer;
- (id)gradientView;
- (id)searchImageButtonView;
- (void)finderTabPageTabView:(id)arg1 changeToWidth:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (BOOL)showSearchEntry;
- (void)setTabContainer:(id)arg1;
- (id)tabViewArray;
- (void)setTabViewArray:(id)arg1;
- (unsigned long long)selectIndex;
- (void)setGradientView:(id)arg1;
- (void)setSearchImageButtonView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
