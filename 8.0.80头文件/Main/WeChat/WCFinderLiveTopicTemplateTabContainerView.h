@interface WCFinderLiveTopicTemplateTabContainerView : UIView <WCFinderTabPageViewBasicProtocol>
{
    id <WCFinderTabPageViewBasicViewDelegate> delegate; // +0x8
    NSArray * _tabViews; // +0x10
    UIScrollView * _scrollView; // +0x18
    unsigned long long _selectedIndex; // +0x20
}
- (void)addTabWithName:(id)arg1;
- (void)addTabWithTabView:(id)arg1;
- (void)adjustTabViewFrame;
- (unsigned long long)currentSelectIndex;
- (id)init;
- (id)initWithTabNameArray:(id)arg1;
- (id)initWithTabViewArray:(id)arg1;
- (void)layoutSubviews;
- (BOOL)removeTabAtIndex:(unsigned long long)arg1;
- (void)setSelectIndex:(unsigned long long)arg1;
- (void)setTabName:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)scrollView;
- (void)didTapScrollView:(id)arg1;
- (void)setSelectedForTabView:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabViews;
- (void)setTabViews:(id)arg1;
- (void)setScrollView:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
