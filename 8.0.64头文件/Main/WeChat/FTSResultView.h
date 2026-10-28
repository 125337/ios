@interface FTSResultView : MMUIView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, WSTagSearchDelegate, FTSResultViewDelegate>
{
    NSString * m_keyword; // +0x8
    NSString * m_defaultKeyword; // +0x10
    MMUIViewController * m_controller; // +0x18
    UIView * m_bottomView; // +0x20
    UIView * m_searchBarSuperView; // +0x28
    UIImageView * m_searchBarWrap; // +0x30
    MMUISearchBar * m_searchBar; // +0x38
    MMTableView * m_tableView; // +0x40
    WCTimeLineFooterView * m_footerView; // +0x48
    NSMutableArray * m_resultAry; // +0x50
    NSString * m_emptyTipSuffix; // +0x58
    AttributeLabel * m_emptyTipLabel; // +0x60
    BOOL m_popForCancel; // +0x68
    BOOL m_hasMoving; // +0x69
    double m_moveStartOffset; // +0x70
    double m_moveCurOffset; // +0x78
    double m_moveContentOffsetY; // +0x80
    UIImageView * m_bottomViewShadow; // +0x88
    id <FTSResultViewDelegate> m_detailViewDelegate; // +0x90
    unsigned long long m_searchScene; // +0x98
    WSTagSearchLogic * _tagSearchLogic; // +0xa0
    FTSResultView * _addedResultView; // +0xa8
    NSString * _cachedSearchBarText; // +0xb0
    BOOL _isUseSectionResult; // +0xb8
    double _searchTextFieldNormalWidth; // +0xc0
    double _searchTextFieldOriginY; // +0xc8
    CGSize _searchIconDefaultSize; // +0xd0
    UIImageView * _searchIcon; // +0xe0
    BOOL _isCancelled; // +0xe8
    id <FTSResultPage> _searchPage; // +0xf0
    FTSResultView * _previousResultView; // +0xf8
    NSMutableArray * _arrSectionResult; // +0x100
}
- (double)getSearchTextFieldWidth;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (id)initWithSearchBar:(id)arg1 frame:(CGRect)arg2;
- (id)initWithSearchPage:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)searchBarText;
- (void)onBackButtonClick;
- (void)loadView;
- (void)loadTableView;
- (void)setDefaultKeyWord:(id)arg1;
- (void)clearResource;
- (void)handleRotateEvent;
- (id)getSearchText;
- (id)getRealSearchText;
- (void)show;
- (void)becomActiveAccessibilityElements;
- (void)setMainSearchGestureEnabled:(BOOL)arg1;
- (void)showWithStaticSearchBar;
- (void)pop;
- (void)setIsCancelled:(BOOL)arg1;
- (void)pop:(BOOL)arg1;
- (id)getFirstResultView;
- (id)getTopAddedResultView;
- (void)popForSubResultView:(BOOL)arg1;
- (void)remove;
- (void)cancelSearch;
- (void)recursivePopPreviousResultView;
- (BOOL)hasAddedResultView;
- (void)enableButton:(id)arg1;
- (id)getSearchIcon;
- (void)resetSearchIconFrame;
- (void)didAddResultView:(id)arg1;
- (id)getSearchSectionArray:(id)arg1;
- (id)getSearchArray:(id)arg1;
- (BOOL)hasSearchDone:(id)arg1;
- (void)setLoadingFooterView;
- (void)setNormalFooterView;
- (void)setEmptyFooterView;
- (void)setNoResultFooterView;
- (void)cancelMoveSearchBar;
- (void)moveRight;
- (void)updateSearchBarPosition;
- (void)handlePanGesture:(id)arg1;
- (void)handleTextChanged:(id)arg1 immediately:(BOOL)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)isSubResultView;
- (BOOL)isUseSectionResult;
- (BOOL)isSearchAll;
- (BOOL)hasMoreData;
- (BOOL)isSearchRunning;
- (void)reloadData;
- (void)onLoadMore;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)needNoResultFooterInSection:(long long)arg1;
- (BOOL)needSeperatedFooterInSection:(long long)arg1;
- (BOOL)needNoResultTableFooterView;
- (id)getNoResultView:(double)arg1;
- (id)getSeperatedFooterView;
- (long long)getSectionCount;
- (long long)getRowCountForSection:(long long)arg1;
- (BOOL)searchBarHasTagInfo;
- (id)getTagDisplayText;
- (id)getTagSearchText;
- (void)cacheSearchBarText;
- (void)setCachedSearchBarText;
- (id)ftsResultGetWCSearchContainerView;
- (void)onFTSDetailViewReturn:(BOOL)arg1;
- (void)onRemoveAddedResultView;
- (void)fillCommonClickReportStat:(id)arg1 matchTip:(id)arg2;
- (id)searchBarSuperView;
- (void)setSearchBarSuperView:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)resultAry;
- (void)setResultAry:(id)arg1;
- (id)emptyTipSuffix;
- (void)setEmptyTipSuffix:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)detailViewDelegate;
- (void)setDetailViewDelegate:(id)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)searchPage;
- (void)setSearchPage:(id)arg1;
- (BOOL)isCancelled;
- (id)addedResultView;
- (void)setAddedResultView:(id)arg1;
- (id)previousResultView;
- (void)setPreviousResultView:(id)arg1;
- (id)tagSearchLogic;
- (void)setTagSearchLogic:(id)arg1;
- (id)arrSectionResult;
- (void)setArrSectionResult:(id)arg1;
- (void).cxx_destruct;
@end
