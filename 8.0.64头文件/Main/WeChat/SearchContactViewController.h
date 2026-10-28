@interface SearchContactViewController : MMUIViewController <FindContactSearchViewCellInfoDelegate>
{
    UIView * m_headerSearchView; // +0x70
    FindContactSearchViewCellInfo * m_searchInfo; // +0x78
    NSArray * m_resultArray; // +0x80
    NSString * m_searchText; // +0x88
    MMTableView * m_tableView; // +0x90
}
- (id)initWithResultArray:(id)arg1 searchText:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)onCancelSearch;
- (BOOL)isSeachActive;
- (void)onMainWindowFrameChanged;
- (void).cxx_destruct;
@end
