@interface RingToneVideoSearchViewController : WCSearchViewController <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewDelegate, RingToneVideoFeedViewCellDelegate, UITextFieldDelegate, RingToneSearchHistoryListViewDelegate>
{
    BOOL _shouldNotShowFriendSettings; // +0x68
    BOOL _isViewAppearing; // +0x69
    BOOL _isJumpToOtherPage; // +0x6a
    BOOL _isFirstAppear; // +0x6b
    BOOL _isPreFetchDone; // +0x6c
    BOOL _needRefreshTable; // +0x6d
    unsigned int _exposeIndex; // +0x70
    unsigned long long _setType; // +0x78
    CContact * _exclusiveContact; // +0x80
    WCFinderFeedFlowView * _feedFlowView; // +0x88
    double _prevOffsetY; // +0x90
    double _dragOffsetY; // +0x98
    RingToneRecommendReporter_23604 * _reporter; // +0xa0
    NSString * _searchText; // +0xa8
    RingToneVideoSearchViewModel * _model; // +0xb0
    unsigned long long _state; // +0xb8
    long long _constructIndex; // +0xc0
    long long _vmsIndex; // +0xc8
    long long _reportIndex; // +0xd0
    NSString * _friendName; // +0xd8
    RingToneSearchLayout * _layout; // +0xe0
    long long _currentShowCount; // +0xe8
    unsigned long long _searchRequestID; // +0xf0
    RingToneSearchHistoryListView * _historyListView; // +0xf8
}
- (id)init;
- (void)preInitJob;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initWCFinderScrollView;
- (void)setupHistoryListView;
- (void)viewWillLayoutSubviews;
- (unsigned long long)getTotalNumOfShowVM;
- (void)initData;
- (BOOL)isFetchingStateError;
- (void)preloadVideoItemsWithCurrentFeedNextIndex:(unsigned long long)arg1;
- (BOOL)accessibilityScroll:(long long)arg1;
- (void)searchWithFirstPage:(BOOL)arg1;
- (void)tryReloadData:(BOOL)arg1 recordTime:(unsigned long long)arg2 status:(unsigned long long)arg3 needSetVM:(BOOL)arg4 count:(unsigned long long)arg5 searchText:(id)arg6;
- (void)refreshTableForPrefetchData;
- (void)checkAutoPlayWhenDataReload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)clearDataAfterQuit;
- (void)clearData;
- (void)reportPlayingRingAtIndex:(unsigned long long)arg1;
- (id)getContentVMByIndex:(unsigned long long)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (BOOL)isInSubScene;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)jumpToPlayerPage:(id)arg1 index:(id)arg2 searchID:(long long)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)finderFeedFlowViewForbidenOpenFeedAutoAnimation:(id)arg1;
- (void)changeVideoFeedPlay;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidScrollToTop:(id)arg1;
- (unsigned long long)getRingSheetViewFlag;
- (id)getSettingsName;
- (void)reportRingEvent:(unsigned long long)arg1 ring:(id)arg2 cell:(id)arg3;
- (void)finderPickerListTableViewCellTriggerAntiAddictCheckLogic;
- (BOOL)getIfNoNeedToPlay;
- (void)onJumpToTingInfoPage:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onSelectSearchRecord:(id)arg1 location:(long long)arg2 dataType:(unsigned long long)arg3;
- (void)onClearAllSerchHistory;
- (void)onDeleteSearchRecord:(id)arg1;
- (unsigned long long)setType;
- (void)setSetType:(unsigned long long)arg1;
- (BOOL)shouldNotShowFriendSettings;
- (void)setShouldNotShowFriendSettings:(BOOL)arg1;
- (id)exclusiveContact;
- (void)setExclusiveContact:(id)arg1;
- (BOOL)isViewAppearing;
- (void)setIsViewAppearing:(BOOL)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (double)prevOffsetY;
- (void)setPrevOffsetY:(double)arg1;
- (double)dragOffsetY;
- (void)setDragOffsetY:(double)arg1;
- (BOOL)isJumpToOtherPage;
- (void)setIsJumpToOtherPage:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (long long)constructIndex;
- (void)setConstructIndex:(long long)arg1;
- (long long)vmsIndex;
- (void)setVmsIndex:(long long)arg1;
- (BOOL)isFirstAppear;
- (void)setIsFirstAppear:(BOOL)arg1;
- (id)friendName;
- (void)setFriendName:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (long long)currentShowCount;
- (void)setCurrentShowCount:(long long)arg1;
- (unsigned long long)searchRequestID;
- (void)setSearchRequestID:(unsigned long long)arg1;
- (BOOL)isPreFetchDone;
- (void)setIsPreFetchDone:(BOOL)arg1;
- (BOOL)needRefreshTable;
- (void)setNeedRefreshTable:(BOOL)arg1;
- (id)historyListView;
- (void)setHistoryListView:(id)arg1;
- (void).cxx_destruct;
@end

