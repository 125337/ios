@interface CountryCodePickerSheetViewController : MMPageSheetBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, MMTableViewIndexViewDelegate>
{
    MMTableView * m_tableView; // +0x70
    BOOL m_bSearching; // +0x78
    NSMutableArray * m_arrFilteredData; // +0x80
    unsigned int m_curSelectedSection; // +0x88
    unsigned int m_curSelectedRow; // +0x8c
    id <CountryCodePickerDelegate> m_delegate; // +0x90
    CountryCodePickerDataSource * _dataSource; // +0x98
    WCSearchBar * _searchBar; // +0xa0
}
- (id)initWithDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initSheetConfig;
- (void)initView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (void).cxx_destruct;
@end
