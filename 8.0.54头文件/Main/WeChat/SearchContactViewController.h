@interface SearchContactViewController : MMUIViewController <FindContactSearchViewCellInfoDelegate>
{
    UIView * m_headerSearchView; // +0x68
    FindContactSearchViewCellInfo * m_searchInfo; // +0x70
    NSArray * m_resultArray; // +0x78
    NSString * m_searchText; // +0x80
    MMTableView * m_tableView; // +0x88
}
- (id)initWithResultArray:(id)arg1 searchText:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)onCancelSearch;
- (BOOL)isSeachActive;
- (void)onMainWindowFrameChanged;
- (void).cxx_destruct;
@end

