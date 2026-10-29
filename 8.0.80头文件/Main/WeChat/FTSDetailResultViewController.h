@interface FTSDetailResultViewController : FTSBaseViewController <MMTListAdapterDataSource, MMTListAdapterDelegate, FTSResultPage, UITextFieldDelegate, UITableViewDelegate, MMRefreshTableFooterDelegate>
{
    BOOL _needConvertPinyinSearch; // +0x70
    FTSVoiceSearchBarController * _ftsPresenter; // +0x78
    id <FTSDetailResultViewControllerDelegate> _delegate; // +0x80
    MMTListAdapter * _listAdapter; // +0x88
    NSArray * _dataObject; // +0x90
    unsigned long long _sectionType; // +0x98
    FTSBaseSectionController * _searchController; // +0xa0
    MMTableView * _tableView; // +0xa8
    NSString * _latestSearchQuery; // +0xb0
}
- (id)initWithSectionType:(unsigned long long)arg1 context:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)onNavigationCancelItemClick;
- (void)setDefaultQuery:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)cancelSearch;
- (void)__search:(id)arg1 withSlowMode:(BOOL)arg2;
- (id)genSectionControllerFor:(unsigned long long)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)onListWillReloadData:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadList;
- (void)reloadListWithDataUpdate:(id)arg1;
- (id)searchBarText;
- (void)setSearchBarText:(id)arg1 isReplace:(BOOL)arg2;
- (id)searchTextField;
- (void)setLoadingFooterView;
- (void)setNormalFooterView;
- (void)setNoResultFooterView;
- (void)setEmptyFooterView;
- (id)getNoResultView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)setSearchController:(id)arg1;
- (id)ftsPresenter;
- (void)setFtsPresenter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)needConvertPinyinSearch;
- (void)setNeedConvertPinyinSearch:(BOOL)arg1;
- (id)listAdapter;
- (void)setListAdapter:(id)arg1;
- (id)dataObject;
- (void)setDataObject:(id)arg1;
- (unsigned long long)sectionType;
- (void)setSectionType:(unsigned long long)arg1;
- (id)searchController;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)latestSearchQuery;
- (void)setLatestSearchQuery:(id)arg1;
- (void).cxx_destruct;
@end
