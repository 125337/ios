@interface MMFinderLiveKTVRequestSongPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveKTVSongOperationExt, MMLiveTaskMgrExt, UICollectionViewDataSource, UICollectionViewDelegate, UISearchBarDelegate, MMRefreshTableFooterDelegate>
{
    BOOL _searchHasNext; // +0x8
    BOOL _searchTextAutoFilled; // +0x9
    BOOL _hasKgAuthorized; // +0xa
    BOOL _isShowing; // +0xb
    MMFinderLiveTaskId * _taskId; // +0x10
    MMFinderLiveKTVPanelTitleView * _titleView; // +0x18
    MMUISearchBar * _searchBar; // +0x20
    NSString * _curSearchID; // +0x28
    NSString * _curSearchText; // +0x30
    NSData * _searchLastBuffer; // +0x38
    WCTimeLineFooterView * _footerView; // +0x40
    MMUIActivityIndicatorView * _loadingView; // +0x48
    MMUILabel * _loadingLabel; // +0x50
    UICollectionView * _boardCollectionView; // +0x58
    UICollectionView * _subBoardCollectionView; // +0x60
    UIView * _tabIndicatorView; // +0x68
    MMTableView * _songTable; // +0x70
    NSMutableArray * _boardItems; // +0x78
    MMFinderLiveKTVBoardItem * _selectedBoard; // +0x80
    NSMutableArray * _songItems; // +0x88
    unsigned long long _state; // +0x90
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x98
    NSMutableSet * _reportedSongUniqueIdSet; // +0xa0
    unsigned long long _connectMicScene; // +0xa8
}
+ (id)showWithTaskId:(id)arg1 connectMicScene:(unsigned long long)arg2;
- (id)initWithTaskId:(id)arg1 connectMicScene:(unsigned long long)arg2;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)boardCollectionView;
- (id)subBoardCollectionView;
- (id)songTable;
- (id)searchBar;
- (id)tabIndicatorView;
- (id)loadingView;
- (id)loadingLabel;
- (id)leftNavButton;
- (id)footerView;
- (void)setState:(unsigned long long)arg1;
- (void)onLeftButtonTapped;
- (void)updateBoardFooter;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)doSearchWithText:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onLiveKTVSongOperationNotifyStartSingCurrentSong;
- (void)onRequestSongItemReturned:(id)arg1 success:(BOOL)arg2;
- (id)liveTask;
- (id)reportedSongUniqueIdSet;
- (id)anchorReporter;
- (void)initData;
- (void)initBoard:(id)arg1 lastBuffer:(id)arg2 continueFlag:(unsigned int)arg3 boardItems:(id)arg4 hasKgAuthorized:(BOOL)arg5;
- (void)reportBoardExpose;
- (void)checkAndReportCellExpose:(id)arg1;
- (void)getSongListForBoard:(id)arg1 subBoardItem:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)getSearchResult;
- (void)getSmartBoxResult;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id)curSearchID;
- (void)setCurSearchID:(id)arg1;
- (id)curSearchText;
- (void)setCurSearchText:(id)arg1;
- (id)searchLastBuffer;
- (void)setSearchLastBuffer:(id)arg1;
- (void)setFooterView:(id)arg1;
- (BOOL)searchHasNext;
- (void)setSearchHasNext:(BOOL)arg1;
- (BOOL)searchTextAutoFilled;
- (void)setSearchTextAutoFilled:(BOOL)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)setBoardCollectionView:(id)arg1;
- (void)setSubBoardCollectionView:(id)arg1;
- (void)setTabIndicatorView:(id)arg1;
- (void)setSongTable:(id)arg1;
- (id)boardItems;
- (void)setBoardItems:(id)arg1;
- (id)selectedBoard;
- (void)setSelectedBoard:(id)arg1;
- (id)songItems;
- (void)setSongItems:(id)arg1;
- (unsigned long long)state;
- (BOOL)hasKgAuthorized;
- (void)setHasKgAuthorized:(BOOL)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (void)setAnchorReporter:(id)arg1;
- (void)setReportedSongUniqueIdSet:(id)arg1;
- (unsigned long long)connectMicScene;
- (void)setConnectMicScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
