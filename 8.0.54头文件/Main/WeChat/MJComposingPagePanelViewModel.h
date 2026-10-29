@interface MJComposingPagePanelViewModel : MJComposingPanelViewModel
{
    NSArray * _pageItems; // +0x8
    long long _selectedTabIndex; // +0x10
    unsigned long long _selectedTab; // +0x18
    MJPageItem * _selectedPageItem; // +0x20
    MJSegmentViewModel * _entranceSegmentVM; // +0x28
}
- (id)initWithPanelType:(unsigned long long)arg1 respondsToQuickExit:(BOOL)arg2 pageItems:(id)arg3 selectedTabIndex:(long long)arg4;
- (BOOL)selectTabWithIndex:(long long)arg1;
- (long long)itemIndexWithEditContentType:(unsigned long long)arg1;
- (long long)itemIndexWithSupportedSegmentType:(unsigned long long)arg1;
- (id)pageItems;
- (void)setPageItems:(id)arg1;
- (long long)selectedTabIndex;
- (void)setSelectedTabIndex:(long long)arg1;
- (unsigned long long)selectedTab;
- (void)setSelectedTab:(unsigned long long)arg1;
- (id)selectedPageItem;
- (void)setSelectedPageItem:(id)arg1;
- (id)entranceSegmentVM;
- (void)setEntranceSegmentVM:(id)arg1;
- (void).cxx_destruct;
@end

