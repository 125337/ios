@interface ContactsSearchResultListView : UIView <UITableViewDelegate, UITableViewDataSource, MMTableViewIndexViewDelegate>
{
    id <ContactsSearchResultListViewDelegate> _delegate; // +0x8
    ContactsSearchSnapshot * _snapshot; // +0x10
    MMTableView * _tableView; // +0x18
    ContactsRefreshTableFooterView * _countFooterView; // +0x20
    UILabel * _placeholderLabel; // +0x28
    double _placeholderTopInset; // +0x30
    id <ContactsSearchCellRenderer> _defaultRenderer; // +0x38
    id <ContactsSearchCellRenderer> _searchRenderer; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setSnapshot:(id)arg1;
- (void)dealloc;
- (void)setupTableView;
- (void)layoutSubviews;
- (void)reloadData;
- (void)scrollToTop;
- (void)refreshListChrome;
- (void)detachCountFooter;
- (void)showPlaceholderWithText:(id)arg1 topInset:(double)arg2;
- (void)hidePlaceholder;
- (void)layoutPlaceholderLabel;
- (id)activeRenderer;
- (BOOL)shouldShowSectionHeaders;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)globalIndexOfIndexPath:(id)arg1;
- (id)starImageForSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadHeaderViewSelection;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)snapshot;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)countFooterView;
- (void)setCountFooterView:(id)arg1;
- (id)placeholderLabel;
- (void)setPlaceholderLabel:(id)arg1;
- (double)placeholderTopInset;
- (void)setPlaceholderTopInset:(double)arg1;
- (id)defaultRenderer;
- (void)setDefaultRenderer:(id)arg1;
- (id)searchRenderer;
- (void)setSearchRenderer:(id)arg1;
- (void).cxx_destruct;
@end
