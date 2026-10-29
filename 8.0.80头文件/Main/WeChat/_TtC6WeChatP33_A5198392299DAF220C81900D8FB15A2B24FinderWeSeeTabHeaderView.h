@interface _TtC6WeChatP33_A5198392299DAF220C81900D8FB15A2B24FinderWeSeeTabHeaderView : WCFinderNaviTabsView <WCFinderTabPageViewBasicProtocol>
{
    void * delegate; // +0x8
     pageIndex; // +0x10
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithTabNameArray:(id)arg1;
- (unsigned long long)currentSelectIndex;
- (void)setSelectIndex:(unsigned long long)arg1;
- (void)setTabName:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)adjustTabViewFrame;
- (id)initWithTabTitles:(id)arg1;
- (id)initWithTabItems:(id)arg1;
- (void).cxx_destruct;
@end
