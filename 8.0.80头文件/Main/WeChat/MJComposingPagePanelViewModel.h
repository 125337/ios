@interface MJComposingPagePanelViewModel : MJComposingPanelViewModel
{
    BOOL _restoresSelectedTabDirectly; // +0x8
    NSArray * _pageItems; // +0x10
    long long _selectedTabIndex; // +0x18
    unsigned long long _selectedTab; // +0x20
    MJPageItem * _selectedPageItem; // +0x28
    MJSegmentViewModel * _entranceSegmentVM; // +0x30
}
- (id)initWithPanelType:(unsigned long long)arg1 respondsToQuickExit:(BOOL)arg2 pageItems:(id)arg3 selectedTabIndex:(long long)arg4;
- (BOOL)selectTabWithIndex:(long long)arg1;
- (long long)itemIndexWithEditContentType:(unsigned long long)arg1;
- (long long)itemIndexWithSupportedSegmentType:(unsigned long long)arg1;
- (BOOL)restoresSelectedTabDirectly;
- (void)setRestoresSelectedTabDirectly:(BOOL)arg1;
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
