@interface WCFinderVideoProducerMusicSearcherViewController : WCFinderVideoProducerBaseViewControllerFragment <UITextFieldDelegate, MMUITextFieldDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderVideoProducerLoadMoreViewDelegate, EditVideoBGMPlayerDelegate>
{
    BOOL _isSearchingAfterInputEnabled; // +0x70
    BOOL _isSearching; // +0x71
    BOOL _lastSearchSequence; // +0x72
    id <WCFinderVideoProducerMusicSearcherDelegate> _delegate; // +0x78
    unsigned long long _searchScene; // +0x80
    UIView * _contentContainerView; // +0x88
    UIView * _contentContainerBackgroundView; // +0x90
    UIButton * _finishButton; // +0x98
    UITextField * _searchInputField; // +0xa0
    UICollectionView * _searchResultCollectionView; // +0xa8
    WCFinderVideoProducerLoadMoreView * _loadMoreView; // +0xb0
    EditVideoBGMPlayer * _musicPlayer; // +0xb8
    WCFinderVideoProducerDataSource * _cellVMData; // +0xc0
    NSData * _lastSearchRequestBuffer; // +0xc8
    NSString * _lastSearchKey; // +0xd0
    NSIndexPath * _selectedIndex; // +0xd8
}
- (void)dealloc;
- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)arg1 animated:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (BOOL)becomeFirstResponder;
- (void)resetSearching;
- (void)_resetSearchBar;
- (void)_resetSearchResultData;
- (void)selectMusicById:(id)arg1;
- (void)updateMusicPlayerMuted:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)mmTextFieldDidChange:(id)arg1;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onScrolledToLoading;
- (void)_requestSearchCgiWithKeyword:(id)arg1 andResignInputField:(BOOL)arg2;
- (void)_interruptSearchRequest;
- (void)_handleSearchResultWithSearchKey:(id)arg1 error:(id)arg2 requestBuffer:(id)arg3 musicList:(id)arg4 hasMore:(BOOL)arg5;
- (void)_ensureLoadMoreCellVMForInitialState:(unsigned long long)arg1;
- (void)_onMusicDataUpdated;
- (void)_onMusicAtIndex:(id)arg1 changedSelectTo:(BOOL)arg2;
- (BOOL)_playMusicForMusicCellVM:(id)arg1;
- (void)_replayMusic;
- (BOOL)_isMusicExistsInCellVMData:(id)arg1;
- (id)_createOMJMusicInfoFrom:(id)arg1;
- (id)cellVMData;
- (void)_updateLoadMoreViewState:(unsigned long long)arg1 isError:(BOOL)arg2;
- (void)_onClickCancelButton:(id)arg1;
- (void)_onClickFinishButton:(id)arg1;
- (void)_onClickClearSearchInputButton:(id)arg1;
- (void)_onTextFieldEditingChange:(id)arg1;
- (void)_relayoutView;
- (void)_initView;
- (void)_initBackgroundCloseView;
- (void)_initContentView;
- (void)_initTopBarView;
- (void)_initSearchBarView;
- (void)_initResultListView;
- (double)_getMusicSearcherSafeHeight;
- (BOOL)isSearchingAfterInputEnabled;
- (void)setIsSearchingAfterInputEnabled:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)contentContainerBackgroundView;
- (void)setContentContainerBackgroundView:(id)arg1;
- (id)finishButton;
- (void)setFinishButton:(id)arg1;
- (id)searchInputField;
- (void)setSearchInputField:(id)arg1;
- (id)searchResultCollectionView;
- (void)setSearchResultCollectionView:(id)arg1;
- (id)loadMoreView;
- (void)setLoadMoreView:(id)arg1;
- (id)musicPlayer;
- (void)setMusicPlayer:(id)arg1;
- (void)setCellVMData:(id)arg1;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (BOOL)lastSearchSequence;
- (void)setLastSearchSequence:(BOOL)arg1;
- (id)lastSearchRequestBuffer;
- (void)setLastSearchRequestBuffer:(id)arg1;
- (id)lastSearchKey;
- (void)setLastSearchKey:(id)arg1;
- (id)selectedIndex;
- (void)setSelectedIndex:(id)arg1;
- (void).cxx_destruct;
@end
