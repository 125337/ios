@interface MMFinderLiveKTVRequestSongPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveKTVSongOperationExt, MMLiveTaskMgrExt, UICollectionViewDataSource, UICollectionViewDelegate, UISearchBarDelegate, MMRefreshTableFooterDelegate>
{
    BOOL _searchTextAutoFilled; // +0x8
    unsigned int _searchId; // +0xc
    MMFinderLiveTaskId * _taskId; // +0x10
    unsigned long long _state; // +0x18
    unsigned long long _scene; // +0x20
    unsigned long long _connectMicScene; // +0x28
    MMFinderLiveKTVPanelTitleView * _titleView; // +0x30
    MMUIButton * _leftNavBtn; // +0x38
    MMUISearchBar * _searchBar; // +0x40
    MMFinderLiveKTVBoardItem * _searchBoard; // +0x48
    NSString * _searchText; // +0x50
    MMUIActivityIndicatorView * _loadingView; // +0x58
    MMUILabel * _loadingLabel; // +0x60
    UICollectionView * _boardCollectionView; // +0x68
    UICollectionView * _subBoardCollectionView; // +0x70
    NSMutableArray * _boardItems; // +0x78
    MMFinderLiveKTVBoardItem * _selectedBoard; // +0x80
    MMTableView * _songTable; // +0x88
    WCTimeLineFooterView * _footerView; // +0x90
    MMFinderLiveKTVRequestedSongPanel * _cachedRequestedSongPanel; // +0x98
    NSMutableSet * _reportedSongUniqueIdSet; // +0xa0
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0xa8
}
+ (id)showWithTaskId:(id)arg1 scene:(unsigned long long)arg2 connectMicScene:(unsigned long long)arg3;
- (id)initWithTaskId:(id)arg1 scene:(unsigned long long)arg2 connectMicScene:(unsigned long long)arg3;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setState:(unsigned long long)arg1;
- (void)onLeftButtonTapped;
- (void)refreshSongPanel;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)doSearchWithText:(id)arg1;
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
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (void)onLiveKTVSongOperationNotifyStartSingCurrentSong;
- (void)onRequestSongItemReturned:(id)arg1 success:(BOOL)arg2;
- (id)boardCollectionView;
- (id)subBoardCollectionView;
- (id)songTable;
- (id)searchBar;
- (id)loadingView;
- (id)loadingLabel;
- (id)leftNavBtn;
- (void)didPushSelfInPage:(id)arg1;
- (id)footerView;
- (id)liveTask;
- (void)initData;
- (void)getSongListForBoard:(id)arg1 subBoardItem:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)getSearchResultWithCompleteBlock:(id /* block */)arg1;
- (void)getSmartBoxResult;
- (void)getSmartBoxResultWithCompleteBlock:(id /* block */)arg1;
- (void)requestSong:(id)arg1;
- (id)getSelectedBoardIndexPath;
- (id)getSelectedSubBoardIndexPath;
- (id)searchBoard;
- (BOOL)canShowSubBoard;
- (void)reportPanel;
- (id)reportedSongUniqueIdSet;
- (id)anchorReporter;
- (void)reportBoardExpose;
- (void)checkAndReportCellExpose:(id)arg1;
- (void)pageSheetWillDisappear;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)state;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)connectMicScene;
- (void)setConnectMicScene:(unsigned long long)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (void)setLeftNavBtn:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchBoard:(id)arg1;
- (unsigned int)searchId;
- (void)setSearchId:(unsigned int)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (BOOL)searchTextAutoFilled;
- (void)setSearchTextAutoFilled:(BOOL)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)setBoardCollectionView:(id)arg1;
- (void)setSubBoardCollectionView:(id)arg1;
- (id)boardItems;
- (void)setBoardItems:(id)arg1;
- (id)selectedBoard;
- (void)setSelectedBoard:(id)arg1;
- (void)setSongTable:(id)arg1;
- (void)setFooterView:(id)arg1;
- (id)cachedRequestedSongPanel;
- (void)setCachedRequestedSongPanel:(id)arg1;
- (void)setReportedSongUniqueIdSet:(id)arg1;
- (void)setAnchorReporter:(id)arg1;
- (void).cxx_destruct;
@end
