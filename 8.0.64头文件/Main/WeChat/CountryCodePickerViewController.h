@interface CountryCodePickerViewController : MMUIViewController <WCSearchDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <CountryCodePickerDelegate> m_delegate; // +0x70
    unsigned int m_curSelectedSection; // +0x78
    unsigned int m_curSelectedRow; // +0x7c
    MMTableView * m_tableView; // +0x80
    BOOL m_bSearching; // +0x88
    NSMutableArray * m_arrFilteredData; // +0x90
    BOOL _hideCode; // +0x98
    WCSearcher * _searcher; // +0xa0
    CountryCodePickerDataSource * _dataSource; // +0xa8
}
- (BOOL)shouldInteractiveDismiss;
- (id)init;
- (id)initWithBannedCountryCodes:(id)arg1;
- (void)initSearchBar;
- (void)viewDidLoad;
- (void)OnReturn;
- (void)scrollToSelected;
- (void)setCurSelectedCountryCode:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)hideCode;
- (void)setHideCode:(BOOL)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
@end
