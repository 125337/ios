@interface MMFinderLiveNewMusicRequestSongPanel : MMLandscapeDragBarPageSheet <UITableViewDelegate, UITableViewDataSource, MMLiveTaskMgrExt, UICollectionViewDataSource, UICollectionViewDelegate, UISearchBarDelegate, MMRefreshTableFooterDelegate>
{
    BOOL _searchTextAutoFilled; // +0x8
    unsigned int _searchId; // +0xc
    MMFinderLiveTaskId * _taskId; // +0x10
    id <MMFinderLiveNewMusicRequestSongPanelDelegate> _delegate; // +0x18
    MMFinderLiveKTVTrialListenManageLogic * _trialListenManageLogic; // +0x20
    unsigned long long _state; // +0x28
    MMUISearchBar * _searchBar; // +0x30
    MMFinderLiveKTVBoardItem * _searchBoard; // +0x38
    NSString * _searchText; // +0x40
    MMUIActivityIndicatorView * _loadingView; // +0x48
    MMUILabel * _loadingLabel; // +0x50
    UICollectionView * _boardCollectionView; // +0x58
    UICollectionView * _subBoardCollectionView; // +0x60
    NSMutableArray * _boardItems; // +0x68
    MMFinderLiveKTVBoardItem * _selectedBoard; // +0x70
    MMTableView * _songTable; // +0x78
    WCTimeLineFooterView * _footerView; // +0x80
    NSMutableSet * _reportedSongUniqueKeySet; // +0x88
    WCFinderLiveStarterReporter * _startReporter; // +0x90
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x98
}
+ (id)showWithTaskId:(id)arg1 delegate:(id)arg2 trialListenManageLogic:(id)arg3;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2 trialListenManageLogic:(id)arg3;
- (void)registerExtensions;
- (void)setupPageSheetConfig;
- (void)showWithAnimated:(BOOL)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)refreshSongPanel;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)startSmartBoxRequest;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)doSearchWithText:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)searchBar;
- (id)loadingView;
- (id)loadingLabel;
- (id)boardCollectionView;
- (id)subBoardCollectionView;
- (id)songTable;
- (id)footerView;
- (id)searchBoard;
- (void)initData;
- (void)getSongListForBoard:(id)arg1 subBoardItem:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)getSearchResultWithText:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)getSmartBoxResult:(id /* block */)arg1;
- (void)requestSong:(id)arg1;
- (id)liveTask;
- (id)getSelectedBoardIndexPath;
- (id)getSelectedSubBoardIndexPath;
- (BOOL)canShowSubBoard;
- (void)pageSheetDidDismiss;
- (void)checkAndReportCellExpose:(id)arg1;
- (id)startReporter;
- (id)anchorReporter;
- (id)reportedSongUniqueKeySet;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)trialListenManageLogic;
- (void)setTrialListenManageLogic:(id)arg1;
- (unsigned long long)state;
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
- (void)setReportedSongUniqueKeySet:(id)arg1;
- (void)setStartReporter:(id)arg1;
- (void)setAnchorReporter:(id)arg1;
- (void).cxx_destruct;
@end
